#include "matrix.h"

struct matrix mat_new(double* data, int rows, int cols) {
    struct matrix mat;
    mat.data = data;
    mat.rows = rows;
    mat.cols = cols;
    return mat;
}

struct matrix mat_mul(struct matrix a, struct matrix b) {
    
}

struct matrix mat_add(struct matrix a, struct matrix b) {

}