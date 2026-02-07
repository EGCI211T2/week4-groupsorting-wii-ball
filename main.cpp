#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#include "sorting.h"

int main(int argc, char **argv)
{
  int *a, N;
  /* Make sure you convert 'a' properly*/
  N = argc - 2;
  a = new int[N];
  for (int i = 0; i < N; i++)
  {
    a[i] = atoi(argv[i + 2]);
  }

  display(a, N);

  if (argc > 1)
  {
    if (strcmp(argv[1],"bubble"))
    {
      bubbleSort(a, N);
      display(a, N);
    }
    else if (strcmp(argv[1] , "insert"))
    {
      insertion(a, N);
      display(a, N);
    }
    else if (strcmp(argv[1] , "selection"))
    {
      selectionSort(a, N);
      display(a, N);
    }
    display(a, N);
  }
  delete[] a;
  return 0;
}