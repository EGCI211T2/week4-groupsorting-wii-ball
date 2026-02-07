#ifndef SORTING_H
#define SORTING_H

#include <iomanip>
/* function prototype*/

void display(int a[], int n)
{

  int i;

  for (i = 0; i < n; i++)
  {
    std::cout << setw(5) << a[i];
  }
  std::cout << std::endl;
}

// slect

void selectionSort(int a[], int n)
{
  int i, j, m, mi;
  for (i = 0; i < n ; i++)
  {
    mi = i ;
    for (j = i+1; j < n ; j++)
    {
      if (a[j]<a[mi])
      {
        mi = j;
      }
    }
    swap(a[i],a[mi]);
    display(a, n);
  }
  
}

// insertion

void insertion(int a[], int n)
{
  int i;
  for (i = 1; i < n; i++)
  {
    int obj = a[i];
    int j = i - 1;
    while ( j>= 0 && a[j] > obj)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = obj;
    display(a, n);
  }
}

// swap

void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void bubbleSort(int a[], int n)
{

  int i, j;
  int sorted;
  // how may pair to compare?   
  for (j = 0 ; j < n-1; j++)
  {
    for (i=0;i<n-j-1;i++)
    {
      if (a[i]>a[i+1])
      {
        swap(a[i],a[i+1]);
      }
    }
    display(a, n);
  }
}
#endif
