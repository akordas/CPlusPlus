#include <iostream>
using namespace std;

void bubblesort(int* vals, int length)
{
	int i, j, swapped=1;
	while(swapped != 0)
	{
		swapped = 0;
		for(i=0; i<length-1; i++)
		{
			if (vals[i] > vals[i+1])
			{
				j = vals[i+1];
				vals[i+1] = vals[i];
				vals[i] = j;
				swapped = 1;				
			}
		}
	}
}

int main()
{
	int list[10] = {0,1000,9,26,54,7,1,100,74,26};
	bubblesort(&list[0], 10);
	int x;
	for(x=0; x<10; x++)
	{
		cout << list[x] << "\t";
	}
	cout << "\n";
}
