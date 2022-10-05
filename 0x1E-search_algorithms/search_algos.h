#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bSearchVal(int *array, size_t start, size_t end, int value);
void printArray(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */
