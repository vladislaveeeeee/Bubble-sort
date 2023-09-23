#include <iostream>
#include <time.h>
using namespace std;




int main()
{
	const int size = 10;
	int a[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) // rand number
	{
		a[i] = 1 + rand() % 50;
		cout << a[i] << " ";
	}

	
	
	
	for (int i = 0; i < size-1; i++)     //bubblesort down
	{
		for (int j = size-1; j > i; j--)
		{
			if (a[j] > a[j - 1])
			{
				swap(a[j], a[j - 1]);
			}
		}
	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}

	
	
	
	
	for (int i = 0; i < size-1; i++)     //bubblesort up
	{
		for (int j = 0; j < size-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

