/*
 *
 * Name: Jeffrey Leung
 * Date: 2015-03-20
 *
 * This program contains the implementation of a recursive quicksort algorithm.
 *
 */

#include <stdio.h>

#include "quick_sort.h"



// Only for use by quick_sort().
// This function swaps the values of two integers, given their pointers.
void swap_qsort( int* a, int* b )
{
  int temp = *a;
  *a = *b;
  *b = temp;

  return;
}

// This function recursively sorts an array from least to greatest using the quicksort algorithm.
void quick_sort( int* array, int len )
{
  if( len < 2 )
  {
    return;
  }

  const int PIVOT = 0;
  int mid = 0;

  // Loop invariants:
  //   All elements between indices 1 and mid (inclusive) are less than or equal to array[PIVOT]
  //   All elements between indices mid+1 and sweep-1 (inclusive) are greater than array[PIVOT]
  //   All elements between indices sweep and len-1 (inclusive) are unknown
  int sweep;
  for( sweep = 1; sweep < len; sweep++ )
  {
    if( array[sweep] < array[PIVOT] )
    {
      swap_qsort( array + (mid+1), array + (sweep) );
      mid++;
    }
  }

  swap_qsort( array, array + mid );

  int len_array_1 = mid;
  int len_array_2 = len - (mid+1);

  quick_sort( array,       len_array_1 );
  quick_sort( array+mid+1, len_array_2 );

  return;
}
