
/**
 * If an Integer N, write a program to reverse the given number.

	Input
	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

	Output
	Display the reverse of the given number N.

	Constraints
	1 ≤ T ≤ 1000
	1 ≤ N ≤ 100000
	Example
	Input
	3 
	12345
	31203
	2123
	Output
	54321
	30213
	3212
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main()
{
	int times = 0, number = 0;
	
	cin >> times;
	
	while (times != 0)
	{
		cin >> number;
		int i = 0, temp = 0, n = number;
		while (n != 0)
		{
			temp = n%10;
			//rev += (pow(10, i) * temp);
			cout << temp;
			n = n/10;
			i++;
		}
		//cout << rev << endl;
		cout << endl;
		times--;
	}
}


/**
 * Alternatively
 * 
 * while (times--)
 * {
 * 		int rev = 0;
 * 		while (n != 0)
 * 		{
 * 			temp = n%10;
 * 			rev = rev*10 + temp;
 * 			n = n/10;
 * 		}
 * 		cout << rev;
 * }
