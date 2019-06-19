#include <iostream>
using namespace std;

//https://ru.wikipedia.org/wiki/%D0%91%D1%8B%D0%BA%D0%B8_%D0%B8_%D0%BA%D0%BE%D1%80%D0%BE%D0%B2%D1%8B
void Task3();

int main()
{
	Task3();

	return 0;
}

void Task3()
{
	int num, ox, cow, eff = 0, check;
	int i = 1;
	bool good = false;
	int p[4];
	int answer[4];

	p[0] = rand() % 10;
	check = p[0];

	while (i < 4)
	{
		p[i] = rand() % 10;
		
		if (p[i] == check)
		{
			continue;
		}
		check = p[i];
		i++;

	}
	

	while (good == false)
	{
		ox = 0, cow = 0;
		cout << "Enter the four digit number " << endl<<"The digits should be uniq"<<endl;
		cin >> num;

		answer[0] = num / 1000;
		if (answer[0] >= 10)
		{
			cout << "continue";
			continue;
		}

		answer[1] = num / 100 % 10;
		answer[2] = num / 10 % 10;
		answer[3] = num % 10;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (p[i] == answer[j])
				{
					if (i == j)
					{
						ox++;
					}
					else
					{
						cow++;
					}
				}
			}
		}

		if (ox == 4)
		{
			cout << "You won!" << endl;
			good = true;
		}
		else
		{
			cout << ox << " Ox " << endl;
			cout << cow << " Cow " << endl;
		}

		eff++;
		if (eff == 10)
		{
			for (int i = 0; i < 4; i++)
			{
				cout << p[i];
			}
			cout << "You lose" << endl;
			good = true;
		}
	}

	}
	