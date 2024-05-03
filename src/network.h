#ifndef NETWORK_H
#define NETWORK_H

#include "matrix.h"

void initialize_network();
void free_network();

double evaluate_network(struct matrix input);

#endif