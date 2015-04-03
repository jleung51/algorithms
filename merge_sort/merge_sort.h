#ifndef MERGE_SORT_H
#define MERGE_SORT_H

// Only for use by merge_sort().
// This function //TODO
// array1 and array2 must be in consecutive memory spaces.
void merge_arrays( int* array1, int len1, int* array2, int len2 );

// This function recursively sorts an array from least to greatest using the mergesort algorithm.
void merge_sort( int* array, int len );

#endif
