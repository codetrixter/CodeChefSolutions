
/**
 * If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.

	Input
	The first line contains an integer T, total number of test cases. Then follow T lines, each line contains an integer N.

	Output
	Display the sum of first and last digit of N.

	Constraints
	1 ≤ T ≤ 1000
	1 ≤ N ≤ 1000000
	Example
	Input
	3 
	1234
	124894
	242323

	Output
	5
	5
	5
*/

#include <iostream>

using namespace std;

int main()
{
	int times = 0, number = 0;
	
	cin >> times;
	
	while (times != 0)
	{
		cin >> number;
		int n = number, sum = 0, temp = number;
		while (n != 0)
		{
			temp = n%10;
			if (temp == (number%10) || (n/10 == 0))
			{
				sum += temp;
			}
			n = n/10;
		}
		cout << sum;
		times--;
	}
}
