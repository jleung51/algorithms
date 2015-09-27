/*
 *
 * Name: Jeffrey Leung
 * Date: 2015-06-25
 *
 * This C program tests the various sorting algorithms listed in the README.
 *
 */

#include <assert.h>
#include <ctype.h>
#include <stdio.h>

#include "test.h"
#include "../sorts/bogosort/bogosort.h"
#include "../sorts/bubble_sort/bubble_sort.h"
#include "../sorts/cocktail_sort/cocktail_sort.h"
#include "../sorts/insertion_sort/insertion_sort.h"
#include "../sorts/merge_sort/merge_sort.h"
#include "../sorts/quick_sort/quick_sort.h"
#include "../sorts/selection_sort/selection_sort.h"
#include "../sorts/shell_sort/shell_sort.h"

// This function prints an integer array.
void print_array( int* array, unsigned int len )
{
  printf( "{ " );
  int i;
  for( i = 0; i < len; ++i )
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
  int array_original[] = {0, 5, 8, 3, 2, 6, 3, 8 };

  int count = 1;
  printf( "Enter '%d' to test the bogosort.\n", count++ );
  printf( "Enter '%d' to test the bubble sort.\n", count++ );
  printf( "Enter '%d' to test the cocktail sort.\n", count++ );
  printf( "Enter '%d' to test the insertion sort.\n", count++ );
  printf( "Enter '%d' to test the merge sort.\n", count++ );
  printf( "Enter '%d' to test the quick sort.\n", count++ );
  printf( "Enter '%d' to test the selection sort.\n", count++ );
  printf( "Enter '%d' to test the shell sort.\n", count++ );

  char c = getchar();
  printf( "\n" );

  int num = c - '0';
  switch( num )
  {
    case 1:
      bogosort( array, len );
      break;
    case 2:
      bubble_sort( array, len );
      break;
    case 3:
      cocktail_sort( array, len );
      break;
    case 4:
      insertion_sort( array, len );
      break;
    case 5:
      merge_sort( array, len );
      break;
    case 6:
      quick_sort( array, len );
      break;
    case 7:
      selection_sort( array, len );
      break;
    case 8:
      shell_sort( array, len );
      break;
    default:
      printf( "That was not a valid input.\n" );
      return 1;
  }

  printf( "Before sorting, the array is:\n" );
  print_array( array_original, len );
  printf( "\n" );

  printf( "The sorted array and the sort result, respectively, are:\n" );
  printf( "{ 0 2 3 3 5 6 8 8 }\n" );
  print_array( array, len );
  printf( "\n" );

  return 0;
}
