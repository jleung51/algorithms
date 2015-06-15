/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-14
 *
 * This C program contains the implementation of a recursive quicksort
 * algorithm on an array of integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "quick_sort.h"

// Only for use by quick_sort().
// This function swaps the values of two integers, given their pointers.
static void swap_quick_sort( int* a, int* b );



// Only for use by quick_sort().
// This function swaps the values of two integers, given their pointers.
static void swap_quick_sort( int* a, int* b )
{
  int temp = *a;
  *a = *b;
  *b = temp;

  return;
}

// This function recursively sorts an array from least to greatest using the
// quicksort algorithm.
void quick_sort( int* array, int len )
{
  if( array == NULL )
  {
    printf( "Error: quick_sort() was given a null pointer.\n" );
    exit( 1 );
  }

  if( len < 2 )
  {
    return;
  }

  int mid = 0;

  // Loop invariants:
  //   All elements between indices 1 and mid (inclusive) are less than or
  //   equal to array[0].
  //   All elements between indices mid+1 and sweep-1 (inclusive) are greater
  //   than array[0].
  //   All elements between indices sweep and len-1 (inclusive) are unknown.
  int sweep;
  for( sweep = 1; sweep < len; sweep++ )
  {
    if( array[sweep] < array[0] )
    {
      swap_quick_sort( array + (mid+1), array + (sweep) );
      mid++;
    }
  }

  swap_quick_sort( array, array + mid );

  quick_sort( array,       mid );
  quick_sort( array+mid+1, len - (mid+1) );

  return;
}
