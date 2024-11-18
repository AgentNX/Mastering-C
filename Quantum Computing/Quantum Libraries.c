/*
QuEST is a high-performance library for simulating quantum circuits in C. It provides APIs to define quantum systems, apply gates, and measure outcomes.

Setting Up QuEST:
1. Download and install QuEST.
2. Include the QuEST library in your C program:
-------------------
#include "QuEST.h"
-------------------
*/

#include <stdio.h>
#include "QuEST.h"

int main() {
    QuESTEnv env = createQuESTEnv();

    // Create a 1-qubit quantum register
    Qureg qureg = createQureg(1, env);
    initZeroState(qureg);

    // Apply a Hadamard gate
    hadamard(qureg, 0);

    // Measure the qubit
    int result = measure(qureg, 0);

    printf("Measurement result: %d\n", result);

    // Clean up
    destroyQureg(qureg, env);
    destroyQuESTEnv(env);

    return 0;
}
