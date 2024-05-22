#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define print_value_checked(array, idx) \
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx])

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H*/
