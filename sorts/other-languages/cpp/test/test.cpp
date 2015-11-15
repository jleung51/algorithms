/*
 *
 * Author: Jeffrey Leung
 * Last edited: 2015-11-14
 *
 * This C++ file tests the implementation of the merge sort function
 * in merge_sort.hpp.
 *
 */

#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>

#include "../merge_sort.hpp"

// Local functions:
namespace
{

// This local function prints the contents of a given iteratable data
// structure in a horizontal list, surrounded by brackets [].
template <class Iterator>
void PrintHorizontal( const Iterator begin, const Iterator end );

// This local function prints the contents of a given iteratable data
// structure in a horizontal list, surrounded by brackets [].
template <class Iterator>
void PrintHorizontal( const Iterator begin, const Iterator end )
{
  std::cout << "[ ";
  unsigned int i = 0;
  for( Iterator index = begin; index != end; std::advance(index, 1) )
  {
    std::cout << *index << " ";
    ++i;
  }
  std::cout << "]";
  return;
}

}  // Unnamed namespace for local functions

int main()
{
  srand(time(0));  // Seeding random number generator

  std::cout << std::endl
            << "TESTING MERGESORT():"
            << std::endl
            << "______________________________________________"
            << std::endl
            << std::endl;

  std::vector<int> v;
  for( unsigned int i = 0; i < 10; ++i )
  {
    v.push_back( rand() % 100 );
  }

  std::cout << "The contents of the vector before sorting are ";
  PrintHorizontal( v.begin(), v.end() );
  std::cout << std::endl;

  MergeSort<int>( v.begin(), v.end() );

  std::cout << "The contents of the vector after sorting are  ";
  PrintHorizontal( v.begin(), v.end() );
  std::cout << std::endl;

  std::cout << std::endl;
  return 0;
}
