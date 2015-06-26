/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-14
 *
 * This C program contains the implementation of an insertion sort algorithm
 * on an array of integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "insertion_sort.h"

// This function sorts an integer array using the insertion sort algorithm.
void insertion_sort( int* array, unsigned int len )
{
  if( array == NULL )
  {
    printf( "Error: insertion_sort() was given a null pointer.\n" );
    exit( 1 );
  }

  int i;
  for( i = 0; i < len; ++i )
  {
    int index = i;
    int temp = array[index];
    while( 0 < index && array[index-1] > temp )
    {
      array[index] = array[index-1];
      index--;
    }
    array[index] = temp;
  }

  return;
}
