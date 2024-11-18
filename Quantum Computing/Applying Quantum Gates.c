#include <stdio.h>
#include <math.h>

void apply_hadamard(double qubit[2]) {
    double sqrt2_inv = 1.0 / sqrt(2.0);
    double new_state0 = sqrt2_inv * (qubit[0] + qubit[1]);
    double new_state1 = sqrt2_inv * (qubit[0] - qubit[1]);
    qubit[0] = new_state0;
    qubit[1] = new_state1;
}

int main() {
    // Initial qubit state |0⟩
    double qubit[2] = {1.0, 0.0};
    
    printf("Before Hadamard: |%f, %f>\n", qubit[0], qubit[1]);
    apply_hadamard(qubit);
    printf("After Hadamard: |%f, %f>\n", qubit[0], qubit[1]);

    return 0;
}
