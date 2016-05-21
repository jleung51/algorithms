/*
 *
 * This C program contains an implementation of a pickup-stick algorithm on an
 * array of integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>

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
  return;
}
