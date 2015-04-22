/*
 *
 * Author: Jeffrey Leung
 * Date: 2015-04-21
 *
 * This program contains the implementation of a binary search on an array of integers.
 *
 */

#include <assert.h>
#include <stdio.h>

#include "binary_search.h"

// This function returns the index of the a given value in an integer array,
// or -1 if the value is not found.
int binary_search( int* array, int len, const int TARGET )
{
  int mid = len/2;
assert( (array+mid)[0] == array[mid] );
printf( "Checking %d\n", mid );
  int location;

  if( array[mid] == TARGET )
  {
    return mid;
  }
  else if( len == 1 )
  {
    return -1;
  }
  else if( array[mid] > TARGET )
  {
    location = binary_search( array, mid, TARGET );
  }
  else if( array[mid] < TARGET )
  {
    location = binary_search( array+mid+1, len-mid-1, TARGET );
    location = ( location == -1 ) ? -1 : location+mid+1;
  }
printf( "Returning location %d\n", location );
  return location;
}
