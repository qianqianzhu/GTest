#ifndef ADD_CUDA_H
#define ADD_CUDA_H

#include "cuda.h"
#include<stdio.h>
__global__ void add(int *a, int *b, int *c);
int addKernelWrapper(int *a, int *b, int *c);

#endif
