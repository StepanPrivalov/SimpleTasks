//http://cppstudio.com/post/1443/
//https://stackoverflow.com/questions/686353/random-float-number-generation the desicion was found here
#include <iostream>
#include <ctime>
using namespace std;

void Task3();

int main()
{
	srand(time(0));
	Task3();

	return 0;
}

void Task3()
{
	float ar[10][10];
	int change = 0;
	int a, b, index = 0, minNum;
	float ran;

	cout << "Enter the min and max numbers of array: ";
	cin >> a;
	cin >> b;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			ran = a + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (b - a)));
			ar[i][j] = ran;
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}

	minNum = ar[0][0];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (ar[i][j] < minNum)
			{
				index = i;
				minNum = ar[i][j];
			}
		}
	}

	cout << "MinNumber is: " << minNum << endl;
	cout << "Line with the minNumber is: " << index << endl;

	for (int i = 0; i < 10; i++)
	{
		change = ar[index][i];
		ar[index][i] = ar[0][i];
		ar[0][i] = change;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
}
