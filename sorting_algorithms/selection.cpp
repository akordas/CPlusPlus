#include <iostream>
using namespace std;

void selectionSort(int* vals, int length)
{
	int i, j;
	int min;
	for(j=0; j<length-1; j++)
	{
		min=j;
		for(i=j+1; i<length; i++)
		{
			if(vals[i]<vals[min])
			{
				min = i;
			}
		}
		if(min!=j)
		{
			int temp = vals[j];
			vals[j] = vals[min];
			vals[min] = temp;
		}
	}
}

int main()
{
	int myNums[10] = {1, 7, 7, 9, 2, 3, 4, 10, 6, 5};
	selectionSort(myNums, 10);
	int l;
	for(l=0; l<10; l++)
	{
		cout << myNums[l] << "\t";
	}
	cout << "\n";	
}
