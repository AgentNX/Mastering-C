#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double imag;
} Complex;

typedef struct {
    Complex state0;
    Complex state1;
} Qubit;
