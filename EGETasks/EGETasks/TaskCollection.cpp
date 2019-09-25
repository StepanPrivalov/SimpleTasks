#include "TaskCollection.h"
#include"Utility.h"
#include<iostream>
using namespace std;

// TaskCollection functions implementations
void Task1Run()
{
	int minNum = 10000, k = 0;
	int a[30];
	for (int i = 0; i < 30; i++)
	{
		cin >> a[i];

		if (a[i] == 0)
		{
			continue;
		}

		if ((a[i] % 5) == 0)
		{
			if (a[i] < minNum)
			{
				minNum = a[i];
			}
		}
	}

	for (int i = 0; i < 30; i++)
	{
		k++;

		if (a[i] == 0)
		{
			cout << a[i] << '\t';
		}
		else
		{
			if ((a[i] % 5) == 0)
			{
				a[i] = minNum;
			}
			cout << a[i] << '\t';
		}

		if (k > 4)
		{
			cout << endl;
			k = 0;
		}

	}

	cout << endl;
}

void Task2Run()
{
	cout << "Task2 started" << endl;

}
