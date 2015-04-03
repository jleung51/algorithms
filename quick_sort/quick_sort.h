#ifndef QUICK_SORT_H
#define QUICK_SORT_H

// Only for use by quick_sort().
// This function swaps the values of two integers, given their pointers.
void swap_qsort( int* a, int* b );

// This function recursively sorts an array from least to greatest using the quicksort algorithm.
void quick_sort( int* array, int len );

#endif
