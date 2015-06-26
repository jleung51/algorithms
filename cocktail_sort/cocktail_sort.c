/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-06-25
 *
 * This C program contains the implementation of a cocktail sort algorithm on
 * an array of intgers.
 *
 */

// This function sorts an array from least to greatest using the
// cocktail sort algorithm.
void cocktail_sort( int* array, unsigned int len )
{
  int sorted_check = 1;
  int forwards = 1;
  while( sorted_check )
  {
    sorted_check = 0;

    if( forwards == 1 )
    {
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
      forwards = 0;
    }

    else
    {
      int i;
      for( i = len-2; i > -1; --i )
      {
        if( array[i] > array[i+1] )
        {
          int temp = array[i];
          array[i] = array[i+1];
          array[i+1] = temp;

          sorted_check = 1;
        }
      }
      forwards = 1;
    }

  }

  return;
}
