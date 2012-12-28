#include <iostream>
using namespace std;

void insertionSort(int* vals, int length)
{
	int i, j, temp;
	for(j=1; j<length; j++)
	{
		i=j;
		while(i>0 && vals[i-1]>vals[i])
		{
			temp = vals[i];
			vals[i] = vals[i-1];
			vals[i-1] = temp;
			i--;
		}
	}
}

int main()
{
	int mynums[10] = {1, 7, 7, 5, 2, 3, 6, 9, 10, 0};
	insertionSort(mynums, 10);
	int x;
	for(x=0; x<10; x++)
	{
		cout << mynums[x] << "\t";
	}
	cout << "\n";
}
