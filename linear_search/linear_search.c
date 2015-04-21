/*
 *
 * Author: Jeffrey Leung
 * Date: 2015-04-21
 *
 * This program contains the implementation of a linear search on an array of integers.
 *
 */

#include <assert.h>
#include <stdio.h>

#include "linear_search.h"

// This function returns the index of the first appearance of a given value in an integer array,
// or -1 if the value is not found.
int linear_search( int* array, int len, const int TARGET )
{
  int i;
  for( i = 0; i < len; i++ )
  {
    if( array[i] == TARGET )
    {
      return i;
    }
  }

  return -1;
}
