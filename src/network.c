#include "network.h"

#include <stdlib.h>

const int NUM_HIDDEN = 2; // number of hidden layers
const int INPUT_DIM = 784; // dimension of input layer
const int HIDDEN_DIM = 12; // dimension of hidden layers
const int OUTPUT_DIM = 10; // dimension of output layer
const int NUM_LAYERS = NUM_HIDDEN + 2; // number of layers

static struct {
    struct matrix weights[NUM_HIDDEN + 1];
    struct matrix biases[NUM_HIDDEN + 1];
} network;

void initialize_network() {
    for (int i = 0; i < NUM_HIDDEN + 1; i++) {
        int rows = (i < NUM_HIDDEN ? HIDDEN_DIM : OUTPUT_DIM);
        int cols = (i > 0 ? INPUT_DIM : HIDDEN_DIM);
        network.weights[i] = mat_new(calloc(rows * cols, sizeof(double)), rows, cols);
        network.biases[i] = mat_new(calloc(rows, sizeof(double)), rows, 1);
    }
}

void free_network() {
    for (int i = 0; i < NUM_HIDDEN + 1; i++) {
        free(network.weights[i].data);
        free(network.biases[i].data);
    }
}

double evaluate_network(struct matrix input) {

}
