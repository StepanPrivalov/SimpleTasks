#include <iostream>
using namespace std;

// Task 1 http://cppstudio.com/post/4991/
void Task1();

int main()
{
	Task1();

	return 0;
}

void Task1()
{
	bool des, road = false;
	int k = 1;
	int n = 0;

	cout << "Enter the length : ";
	cin >> n;

	int** p;
	p = new int* [n];

	for (int i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			p[i][j] = 0;
		}

	}

	// main logic here
	int i = 0;
	int j = 0;

	while (k <= n * n)
	{
		p[i][j] = k;
		k++;

		des = false;

		if (road == false)
		{
			if ((j - 1) >= 0 and (i + 1) < n)
			{
				// 1
				i++;
				j--;
				//cout << "the first condition has worked" << k << endl;
			}
			else
			{
				if ((i + 1) == n and (j) == 0)
				{ 
					// 2
					road = true;
					des = true;
					j++;
					//cout << "the second condition has worked" << k << endl;
				}

				if ((j) == 0)
				{
					// 3
					if (des == false)
					{
						road = true;
						i++;
						//cout << "the third condition has worked" << k << endl;
					}
				}
				else
				{
					if ((i + 1) == n)
					{
						// 4
						if (des == false)
						{
							road = true;
							j++;
							//cout << "the fourth condition has worked" << k << endl;
						}
					}
				}
			}
		}
		else
		{
			if ((j + 1) < n and (i - 1) >= 0)
			{
				// 5
				i--;
				j++;
				//cout << "the fifth condition has worked" << k << endl;
			}
			else
			{
				if ((i) == 0 and (j + 1) == n)
				{
					// 6
					road = false;
					des = true;
					i++;
					//cout << "the sixth condition has worked" << k << endl;
				}

				if ((j + 1) == n)
				{
					// 7
					if (des == false)
					{
						road = false;
						i++;
						//cout << "the seventh condition has worked" << k << endl;
					}
				}
				else
				{
					if ((i) == 0)
					{
						// 8
						if (des == false)
						{
							road = false;
							j++;
							//cout << "the eights condition has worked" << k << endl;
						}
					}
				}
			}

		}

	}
	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i][j]<<"\t";
		}

		cout << endl;
	}

}