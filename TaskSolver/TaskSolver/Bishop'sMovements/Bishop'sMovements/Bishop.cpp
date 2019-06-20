#include <iostream>
using namespace std;

//cppstudio.com/post/6550/
void Bishop();

int main()
{
	Bishop();

	return 0;
}

void Bishop()
{
	int x1, y1;
	int dif1, dif2;
	bool dec;
	
	cout << "Enter the initial position: ";
	cin >> x1;
	cin >> y1;

	int x2, y2;

	cout << "Enter the final position: ";
	cin >> x2;
	cin >> y2;

	if (x1 > x2)
	{
		dif1 = x1 - x2;
	}
	else
	{
		if (x1 == x2)
		{
			dec = false;
		}

		dif1 = x2 - x1;
	}

	if (y1 > y2)
	{
		dif2 = y1 - y2;
	}
	else
	{
		if (y1 == y2)
		{
			dec = false;
		}

		dif2 = y2 - y1;
	}

	if (dif1 == dif2) dec = true;

	if (dec == true)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}


}