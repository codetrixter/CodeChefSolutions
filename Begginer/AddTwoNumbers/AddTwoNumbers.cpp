/**
 * Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

	Program is very simple, Given two integers A and B, write a program to add these two numbers. 


	Input
	The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.

	Output
	Add A and B and display it.

	Constraints
	1 ≤ T ≤ 1000
	1 ≤ A,B ≤ 10000
	Example
	Input
	3 
	1 2
	100 200
	10 40

	Output
	3
	300
	50
*/

#include <iostream>

using namespace std;

int main()
{
	int sum = 0, times = 0, number1 = 0, number2 = 0;
	cin >> times;
	
	while (times != 0)
	{
		cin >> number1 >> number2;
		sum = number1 + number2;
		cout <<sum << endl;
		times--;
	}
}
