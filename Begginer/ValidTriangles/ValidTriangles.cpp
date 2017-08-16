/**
 * Write a program to check whether a triangle is valid or not, when the three angles of the triangle 
	are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degress.

	Input
	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three angles A, B and C of 
	* triangle separated by space.

	Output
	Display 'YES' or 'NO' if the triangle is Valid or not respectively.

	Constraints
	1 ≤ T ≤ 1000
	40 ≤ A,B,C ≤ 180
	Example
	Input

	3 
	40 40 100
	45 45 90
	180 0 0
	Output

	YES
	YES
	NO
*/

#include <iostream>

using namespace std;

int main()
{
	int times = 0, A = 0, B = 0, C = 0, sum = 0;
	cin >> times;
	while (times != 0)
	{
		cin >> A >> B >> C;
		
		if ((A > 0) && (B > 0) && (C > 0))
		{
			sum = A + B + C;
			if (sum == 180)
			cout << "YES" << endl;
		}
		else
		cout << "NO" << endl;
		times--;
	}
}


