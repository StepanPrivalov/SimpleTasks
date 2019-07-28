#include<iostream>
using namespace std;

int AddRightDigit(int a, int b);

float CelIntoFar(float a);

int main()
{
	int k, d, c;

	cout << "Enter the main number: ";
	cin>>k;

	cout << "Enter the added number(0 - 9): ";
	cin >> d;

	c = AddRightDigit(k, d);

	cout << "The num is: " << c << endl;

	cout << "Enter the added number(0 - 9): ";
	cin >> d;

	k = AddRightDigit(c, d);

	cout << k << " degrees Celsius -  " << CelIntoFar(k) << " degress  Fahrenheit" << endl;

	return 0;
}

int AddRightDigit(int a, int b)
{
	int x;

	x = a * 10 + b;

	return x;
}

float CelIntoFar(float a)
{
	float f;

	f = (a * 9 / 5) + 32;

	return f;
}