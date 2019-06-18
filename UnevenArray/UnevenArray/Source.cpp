#include <iostream>
using namespace std;

//http://cppstudio.com/post/1315/
void Task2();

int main()
{
	Task2();

	return 0;
}

void Task2()
{
	int n = 0;
	int decision;
	int seq = 0;

	cout << "Enter the array size: ";
	cin >> n;


	cout << "0 - uneven, 1 - even ";
	cin >> decision;

	int* p;
	p = new int[n];

	int* nums;
	nums = new int[n];

	cout << "Array : ";

	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 200;
		cout << p[i] << "\t";
	}

	for (int i = 0; i < n; i++)
	{
		nums[i] = 0;
	}

	if (decision == 0)
	{
		cout << "Uneven nums : ";

		for (int i = 0; i < n; i++)
		{
			if (p[i] % 2 != 0)
			{
				nums[seq] = p[i];
				seq++;
			}
		}
	}

	if (decision == 1)
	{
		cout << "Even nums : ";

		for (int i = 0; i < n; i++)
		{
			if (p[i] % 2 == 0)
			{
				nums[seq] = p[i];
				seq++;
			}
		}
	}

	for (int i = 0; i < seq; i++)
	{
		cout << nums[i] << "\t";
	}

}
