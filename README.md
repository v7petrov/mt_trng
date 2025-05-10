# mt_trng
## Waveform Results

### Test 1
![TRNG Test 1 Waveform](trng_test1.PNG)
![TRNG Test 2 Waveform](trng_test2.PNG)
Above are our test results. In order to test our rng device, we ran it for 1000 clock cycles and checked to see if the amount of times it was high was around the same times it was low.
Also, you can see no pattern (at least that I recognize), making it pretty random. 

![Openroad layout (w/ setup time)](openroad_layout.PNG)
![Openroad layout (w/ hold time)](openroad_layout2.PNG)
This is our openroad layout for the chip, including our initial timings. 

![Warbler schematic](warbler_datapath.PNG)

A lot of our RTL code doesn’t have too many comments, mainly because many design choices stem from finite‐field mathematics. Essentially, you have three shift registers characterized by different feedback polynomials interacting with WG-5 transformation modules (precomputed as lookup tables for efficiency). The most complicated part is the NLFSRs, which implement nonlinear recurrence relations over GF(2⁵) using multiple tap positions and trace functions. At each clock, selected register bits form a 5-bit vector that is fed through the WG-5 trace function WGT-5(xᵈ)=Tr((x+1)^k), yielding nonlinear feedback. This finite-field arithmetic combined with nonlinear filtering ensures a maximal period of 2ⁿ–1 and high linear complexity, giving Warbler its strong randomness properties.

# Stay awesome and don't stay up too late
