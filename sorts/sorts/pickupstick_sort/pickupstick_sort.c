/*
 *
 * This C program contains an implementation of a pickup-stick algorithm on an
 * array of integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "pickupstick_sort.h"

// This local function returns 1 if an array is sorted, and 0 otherwise.
static int is_sorted( int* array, unsigned int len );

// This local function returns 1 if an array is sorted, and 0 otherwise.
static int is_sorted( int* array, unsigned int len )
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
// pickupstick sort algorithm.
void pickupstick_sort( int* array, unsigned int len )
{
  if( array == NULL )
  {
    printf( "Error: pickupstick_sort() was given a null pointer.\n" );
    exit( 1 );
  }

  srand(time(NULL));
  unsigned int element_1;
  unsigned int element_2;

  while( !is_sorted( array, len ) )
  {
    element_1 = rand() % len;
    element_2 = rand() % len;

    if( array[element_1] > array[element_2] )
    {
      int temp = array[element_1];
      array[element_1] = array[element_2];
      array[element_2] = temp;
    }
  }

  return;
}
