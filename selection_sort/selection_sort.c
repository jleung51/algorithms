/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-14
 *
 * This C program contains the implementation of a selection sort algorithm on
 * an array of integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "selection_sort.h"

// Only for use by selection_sort().
// This function swaps the values of two integers, given their pointers.
static void swap_selection_sort( int* a, int* b );



// Only for use by selection_sort().
// This function swaps the values of two integers, given their pointers.
static void swap_selection_sort( int* a, int* b )
{
  int temp = *a;
  *a = *b;
  *b = temp;

  return;
}

// This function sorts an array from least to greatest using the
// selection sort algorithm.
void selection_sort( int* array, unsigned int len )
{
  if( array == NULL )
  {
    printf( "Error: selection_sort() was given a null pointer.\n" );
    exit( 1 );
  }

  int i, j;
  for( i = 0; i < len; ++i )
  {
    int min = i;
    for( j = i; j < len; ++j )
    {
      if( array[j] < array[min] )
      {
        min = j;
      }
    }

    swap_selection_sort( array+i, array+min );
  }

  return;
}
