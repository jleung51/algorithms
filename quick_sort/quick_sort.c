/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-24
 *
 * This C program contains the implementation of a recursive quicksort
 * algorithm on an array of integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "quick_sort.h"

// Only for use by quick_sort().
// This function randomizes the contents of an array.
static void randomize_array_quick_sort( int* array, unsigned int len );

// Only for use by quick_sort().
// This function swaps the values of two integers, given their pointers.
static void swap_quick_sort( int* a, int* b );

// This function recursively sorts an array from least to greatest using the
// quicksort algorithm.
static void quick_sort_helper( int* array, unsigned int len );



// Only for use by quick_sort().
// This function randomizes the contents of an array.
static void randomize_array_quick_sort( int* array, unsigned int len )
{
  if( array == NULL )
  {
    printf( "Implementation error: randomize_array_quicksort() was given a "\
            "null pointer.\n" );
    exit( 2 );
  }

  int array_random[len];
  int len_temp = len;
  int remove;

  int i;
  for( i = 0; i < len; ++i )
  {
    remove = rand() % len_temp;
    array_random[i] = array[remove];

    array[remove] = array[len_temp-1];
    --len_temp;
  }

  int j;
  for( j = 0; j < len; ++j )
  {
    array[j] = array_random[j];
  }

  return;
}

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
static void quick_sort_helper( int* array, unsigned int len )
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
  for( sweep = 1; sweep < len; ++sweep )
  {
    if( array[sweep] < array[0] )
    {
      swap_quick_sort( array + (mid+1), array + (sweep) );
      ++mid;
    }
  }

  swap_quick_sort( array, array + mid );

  quick_sort_helper( array,       mid );
  quick_sort_helper( array+mid+1, len - (mid+1) );

  return;
}

// This function recursively sorts an array from least to greatest using the
// quicksort algorithm, after randomizing the array to prevent the worst case.
void quick_sort( int* array, unsigned int len )
{
  randomize_array_quick_sort( array, len );
  quick_sort_helper( array, len );
  return;
}
