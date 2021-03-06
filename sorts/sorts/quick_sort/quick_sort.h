/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-24
 *
 * This C program contains the implementation of a recursive quicksort
 * algorithm on an array of integers.
 *
 */

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

// This function recursively sorts an array from least to greatest using the
// quicksort algorithm, after randomizing the array to prevent the worst case.
void quick_sort( int* array, unsigned int len );

#endif
