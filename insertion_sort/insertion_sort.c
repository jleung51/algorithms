/*
 *
 * Name: Jeffrey Leung
 * Date: 2015-04-08
 *
 * This program contains the implementation of a recursive insertion sort algorithm.
 *
 */

#include <assert.h>
#include <stdio.h>

#include "insertion_sort.h"

// This function recursively sorts an integer array using the insertion sort algorithm.
void insertion_sort( int* array, int len )
{
  int unsorted;
  for( unsorted = 1; array[unsorted-1] <= array[unsorted]; unsorted++ )
  {
    if( unsorted >= len )  // List already sorted
    {
      return;
    }
  }

  int temp = array[unsorted];
  while( 0 < unsorted && array[unsorted-1] > temp )
  {
   array[unsorted] = array[unsorted-1];
    unsorted--;
  }
  array[unsorted] = temp;

  insertion_sort( array, len );

  return;
}
