
/**
 * In olden days finding square roots seemed to be difficult but nowadays it can be easily done using in-built functions available across many languages .

	Assume that you happen to hear the above words and you want to give a try in finding the square root of any given integer using 
	* in-built functions. So here's your chance.

	Input
	The first line of the input contains an integer T, the number of test cases. T lines follow. Each T contains an integer N whose square root 
	* needs to be computed.

	Output
	For each line of input output the square root of the input integer.

	Constraints
	1<=T<=20 
	1<=N<=10000 
	Input:
	3
	10
	5
	10000

	Output:
	3
	2
	100
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int times = 0, number = 0;
	cin >> times;
	
	while (times != 0)
	{
		cin >> number;
		cout << (int)sqrt(number) << endl;
		times--;
	}	
}
