/*
 *
 * Name: Jeffrey Leung
 * Date: 2015-06-14
 *
 * This program tests the various sorting algorithms:
 *   Selection sort,
 *   Insertion sort,
 *   Shell sort,
 *   Quick sort, and
 *   Merge sort.
 *
 */

#include <assert.h>
#include <ctype.h>
#include <stdio.h>

#include "test.h"
#include "../selection_sort/selection_sort.h"
#include "../insertion_sort/insertion_sort.h"
#include "../shell_sort/shell_sort.h"
#include "../quick_sort/quick_sort.h"
#include "../merge_sort/merge_sort.h"

// This function prints an integer array.
void print_array( int* array, int len )
{
  printf( "{ " );
  int i;
  for( i = 0; i < len; i++ )
  {
    printf( "%d ", array[i] );
  }
  printf( "}" );

  return;
}

int main()
{
  int len = 8;
  int array[] = { 0, 5, 8, 3, 2, 6, 3, 8 };

  printf( "Enter 's' to test the selection sort.\n" );
  printf( "Enter 'i' to test the insertion sort.\n" );
  printf( "Enter '5' to test the shell sort.\n" );
  printf( "Enter 'q' to test the quick sort.\n" );
  printf( "Enter 'm' to test the merge sort.\n" );

  char c = getchar();
  c = tolower( c );
  printf( "\n" );

  if( c != 's' &&
      c != 'i' &&
      c != '5' &&
      c != 'q' &&
      c != 'm' )
  {
    printf( "That was not a valid input.\n" );
    return 1;
  }

  printf( "Before sorting, the array is:\n" );
  print_array( array, len );
  printf( "\n" );

  if( c == 's' )
  {
    selection_sort( array, len );
  }
  else if( c == 'i' )
  {
    insertion_sort( array, len );
  }
  else if( c == '5' )
  {
    shell_sort( array, len );
  }
  else if( c == 'q' )
  {
    quick_sort( array, len );
  }
  else if( c == 'm' )
  {
    merge_sort( array, len );
  }

  printf( "The sorted array and the sort result, respectively, are:\n" );
  printf( "{ 0 2 3 3 5 6 8 8 }\n" );
  print_array( array, len );
  printf( "\n" );

  return 0;
}
