#include <iostream>
using namespace std;

int binarySearchI(int* vals, int first, int last, int key)
{
	while(first<=last)
	{
		int mid = (first + last)/2;
		if (key > vals[mid])
		{
			first = mid+1;
		}
		else if (key < vals[mid])
		{
			last = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int binarySearchR(int* vals, int first, int last, int key)
{
	if (first<=last)
	{
		int mid = (first + last)/2;
		if (key == vals[mid])
		{
			return mid;
		}
		else if (key > vals[mid])
		{
			return binarySearchR(vals, mid+1, last, key);
		}
		else
		{
			return binarySearchR(vals, first, mid-1, key);
		}
	}
	return -1;
}

int main()
{
	int numsa[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int result1 = binarySearchI(numsa, 0, 9, 5);
	cout << result1 << "\n";
	int result2 = binarySearchR(numsa, 0, 9, 11);
	cout << result2 << "\n";
}
