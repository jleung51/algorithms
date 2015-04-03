/*
 *
 * Name: Jeffrey Leung
 * Date: 2015-03-20
 *
 * This program contains the implementation of a recursive mergesort algorithm.
 *
 */

#include <stdio.h>

#include "merge_sort.h"

// Only for use by merge_sort().
// This function // TODO AS WELL AS IN .H
// array1 and array2 must be in consecutive memory spaces.
void merge_arrays( int* array1, int len1, int* array2, int len2 )
{
  int array_final[ len1+len2 ];

  while( len1 > 0 && len2 > 0 )
  {
//    if( 


  }

  return;
}

// This function recursively sorts an array from least to greatest using the mergesort algorithm.
void merge_sort( int* array, int len )
{
  if( len == 1 )
  {
    return;
  }

  int pivot = 0;
  int mid = len / 2;

  merge_sort( array,       mid );
  merge_sort( array+mid+1, len-mid );

  merge_arrays( array, mid, array+mid+1, len-mid );

  return;
}
