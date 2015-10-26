/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-10-25
 *
 * This C program contains the implementation of a bubble sort algorithm on
 * an array of intgers.
 *
 */

// This function sorts an array from least to greatest using the
// bubble sort algorithm.
void bubble_sort( int* array, unsigned int len )
{
  int sorted = 0;
  while( !sorted )
  {
    sorted = 1;

    unsigned int i;
    for( i = 0; i < len-1; ++i )
    {
      if( array[i] > array[i+1] )
      {
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;

        sorted = 0;
      }
    }
  }

  return;
}
