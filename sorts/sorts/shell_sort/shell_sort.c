/*
 *
 * Name: Jeffrey Leung
 * Date: 2015-06-18
 *
 * This C program contains the implementation of a shell sort algorithm.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "shell_sort.h"

// Only for use by shell_sort().
// This function sorts, using insertion sort, the elements at:
// array + start + gap * 0,
// array + start + gap * 1,
// array + start + gap * 2,
// etc.
static void gap_insertion_sort( int* array, unsigned int len,
                                unsigned int gap );

// Only for use by shell_sort().
// This function sorts, using insertion sort, the elements at:
// array + start + gap * 0,
// array + start + gap * 1,
// array + start + gap * 2,
// etc.
static void gap_insertion_sort( int* array, unsigned int len,
                                unsigned int gap )
{
  if( array == NULL )
  {
    printf( "Implementation error: gap_insertion_sort() was given a null " \
            "pointer.\n" );
    exit( 2 );
  }
  else if( gap >= len )
  {
    printf( "Implementation error: gap_insertion_sort() was given an invalid "\
            "gap length (%d where the length is %d).\n", gap, len );
    exit( 2 );
  }

  int i;
  for( i = 0+gap; i < len; ++i )  // '0+gap' used for readability.
  {
    int j = i;
    int temp = array[i];
    while( j >= 0+gap && array[j-gap] > temp )  // '0+gap' used for readability.
    {
      array[j] = array[j-gap];
      j -= gap;
    }
    array[j] = temp;
  }

  return;
}



// This function sorts an array from least to greatest using the
// shell sort algorithm.
void shell_sort( int* array, unsigned int len )
{
  if( array == NULL )
  {
    printf( "Error: shell_sort() was given a null pointer.\n" );
    exit( 1 );
  }

  int gap = len / 2;
  while( gap > 0 )
  {
    gap_insertion_sort( array, len, gap );
    gap /= 2;
  }

  return;
}
