//Program to print the size of multidimensional array

#include <iostream>
using namespace std;

int main()
{
	int arr1[2][5];
	int arr2[3][4][7];

	  cout << "Size of array arr1: " << sizeof(arr1) << " bytes" << endl;
	  cout << "Size of array arr2: " << sizeof(arr2) << " bytes";

  return 0;
}
