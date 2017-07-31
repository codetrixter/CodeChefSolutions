
/**
 * Write a program, which takes an integer N and if the number is less than 10 then display "What an obedient servant you are!" otherwise print "-1".

	Input
	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

	Output
	Output the given string or -1 depending on conditions.

	Constraints
	1 ≤ T ≤ 1000
	-20 ≤ N ≤ 20
	Example
	Input
	3 
	1
	12
	-5
	Output
	What an obedient servant you are!
	-1
	What an obedient servant you are!
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
		
		if (number < 10)
		{
			cout << "What an obediant servant you are!" << endl;
		}
		else
		{
			cout << -1 << endl;
		}
		times--;
	}
}
