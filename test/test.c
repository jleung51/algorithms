/*
 *
 * Author: Jeffrey Leung
 * Date: 2015-04-21
 *
 * This program tests the various search functions:
 *   linear search, and
 *   binary search.
 *
 */

#include <assert.h>
#include <stdio.h>

#include "test.h"
#include "../linear_search/linear_search.h"

// This function prints the contents of an array.
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
  int len = 6;
  int array[6] = { 3, 54, 76, 9, 1, 45 };

  char in;
  printf( "Enter 'l' to test the linear search.\n" );
  printf( "Enter 'b' to test the binary search.\n" );
  scanf( "%c", &in );

  while( in != 'l' && in != 'b' )
  {
    printf( "\n" );
    printf( "That is not a valid input.\n" );
    printf( "Enter 'l' to test the linear search.\n" );
    printf( "Enter 'b' to test the binary search.\n" );
    scanf( "%c", &in );
  }

  int find1 = 76;
  int find2 = 45;
  int find3 = 0;

  int found1;
  int found2;
  int found3;

  if( in == 'l' )
  {
    found1 = linear_search( array, len, find1 );
    found2 = linear_search( array, len, find2 );
    found3 = linear_search( array, len, find3 );
  }
  else if( in == 'b' )
  {/*
    found1 = binary_search( array, len, find1 );
    found2 = binary_search( array, len, find2 );
    found3 = binary_search( array, len, find3 );
  */}

  printf( "\n" );
  printf( "In the array " );
  print_array( array, len );
  printf( ":\n" );
  printf( "76 is found at index %d,\n", found1 );
  printf( "45 is found at index %d, and\n", found2 );
  printf( "0  is found at index %d (an index of -1 means not found).\n", found3 );

  return 0;
}
