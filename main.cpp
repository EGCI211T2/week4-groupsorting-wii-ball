#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#include "sorting.h"

int main(int argc, char **argv)
{
  //setup
  int *a, N;
  
//convert to array and size
  N = argc - 2;
  a = new int[N];

  for (int i = 0; i < N; i++)
  {
    a[i] = atoi(argv[i + 2]);
  }
//determining sorting type
  if (argc > 1)
  {
    if (strcmp(argv[1], "bubble") == 0)
    {
      bubbleSort(a, N);
    }
    else if (strcmp(argv[1], "insertion") == 0 )
    {
      insertion(a, N);
    }
    else if (strcmp(argv[1], "selection") == 0)
    {
      selectionSort(a, N);
    }
  }
  delete[] a;
  return 0;
}