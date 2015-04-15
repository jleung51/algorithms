/*
 *
 * Name: Jeffrey Leung
 * Date: 2015-04-15
 *
 * This program contains the implementation of a recursive selection sort algorithm.
 *
 */

#include <stdio.h>

#include "selection_sort.h"

// Only for use by selection_sort().
// This function swaps the values of two integers, given their pointers.
static void swap_ssort( int* a, int* b );



// Only for use by selection_sort().
// This function swaps the values of two integers, given their pointers.
static void swap_ssort( int* a, int* b )
{
  int temp = *a;
  *a = *b;
  *b = temp;

  return;
}

// This function recursively sorts an array from least to greatest using the
// selection sort algorithm.
void selection_sort( int* array, int len )
{
  if( array == NULL )
  {
    printf( "Error: selection_sort was given a null pointer.\n" );
    exit( 1 );
  }

  if( len < 2 )
  {
    return;
  }

  int min = 0;

  int i;
  for( i = 0; i < len; i++ )
  {
    if( array[i] < array[min] )
    {
      min = i;
    }
  }

  swap_ssort( array, array+min );

  selection_sort( array+1, len-1 );

  return;
}
