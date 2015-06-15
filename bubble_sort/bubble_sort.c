/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-14
 *
 * This C program contains the implementation of a bubble sort algorithm on
 * an array of intgers.
 *
 */

// This function sorts an array from least to greatest using the
// bubble sort algorithm.
void bubble_sort( int* array, unsigned int len )
{
  int sorted_check = 1;
  while( sorted_check )
  {
    sorted_check = 0;

    int i;
    for( i = 0; i < len-1; ++i )
    {
      if( array[i] > array[i+1] )
      {
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;

        sorted_check = 1;
      }
    }
  }

  return;
}
