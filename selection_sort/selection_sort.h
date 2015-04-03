#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

// Only for use by selection_sort().
// This function swaps the values of two integers, given their pointers.
void swap_ssort( int* a, int* b );

// This function recursively sorts an array from least to greatest using the
// selection sort algorithm.
void selection_sort( int* array, int len );

#endif
