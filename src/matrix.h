#ifndef MATRIX_H
#define MATRIX_H

struct matrix {
    int rows, cols;
    double* data;
};

struct matrix mat_new(double* data, int rows, int cols);
struct matrix mat_mul(struct matrix a, struct matrix b);

#endif