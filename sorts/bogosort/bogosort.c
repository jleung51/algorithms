/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-14
 *
 * This C program contains an implementation of a bogosort algorithm on an
 * array of integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "bogosort.h"

// Only for use by bogosort().
// This function randomizes the contents of an array.
static void randomize_array_bogosort( int* array, unsigned int len );

// Only for use by bogosort().
// This function returns 1 if an array is sorted, and 0 otherwise.
static int is_sorted_bogosort( int* array, unsigned int len );

// Only for use by bogosort().
// This function randomizes the contents of an array.
static void randomize_array_bogosort( int* array, unsigned int len )
{
  if( array == NULL )
  {
    printf( "Implementation error: randomize_array_bogosort() was given a "\
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

// Only for use by bogosort().
// This function returns 1 if an array is sorted, and 0 otherwise.
static int is_sorted_bogosort( int* array, unsigned int len )
{
  int i;
  for( i = 0; i < len-1; ++i )
  {
    if( array[i] > array[i+1] )
    {
      return 0;
    }
  }

  return 1;
}



// This function sorts an array from least to greatest using the
// bogosort algorithm.
void bogosort( int* array, unsigned int len )
{
  if( array == NULL )
  {
    printf( "Error: bogosort() was given a null pointer.\n" );
    exit( 1 );
  }

  while( !is_sorted_bogosort( array, len ) )
  {
    randomize_array_bogosort( array, len );
  }

  return;
}
