# cppaistuff

Learning how neural networks work by building the pieces from scratch in C++. No ML libraries, just the math.

## Contents

| File | What it is |
|------|------------|
| `forwardprop.cpp` | Forward propagation: computing a neuron's activation from its inputs, weights and bias. |
| `notes/` | Notes on concepts as I learn them. |

## Building

```sh
g++ -std=c++17 -O2 forwardprop.cpp -o forwardprop
./forwardprop
```

`<bits/stdc++.h>` is GCC-specific, so this needs g++ (MinGW on Windows), not MSVC.

## Roadmap

- [ ] Forward propagation
- [ ] Activation functions (sigmoid, ReLU)
- [ ] Loss function
- [ ] Backpropagation
- [ ] Train a small network end to end
