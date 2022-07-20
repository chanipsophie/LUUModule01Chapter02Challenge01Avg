// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

int main()
{
	auto num1{ 0 };
	auto num2{ 0 };
	auto num3{ 0 };
	auto sum{ 0 };
	auto average{ 0 };

	cout << "Enter three numbers :";
	cin >> num1 >> num2 >> num3;

	sum = num1 + num2 + num3;
	average = sum / 3;

	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;

	return 0;
}