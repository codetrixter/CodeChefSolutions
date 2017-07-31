
/**
 * Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
	If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N. 

	Input
	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

	Output
	Display the smallest number of notes that will combine to give N.

	Constraints
	1 ≤ T ≤ 1000
	1 ≤ N ≤ 1000000
	Example
	Input
	3 
	1200
	500
	242

	Output
	12
	5
	7
*/

//Just like CeilAndReceipt

#include <iostream>

using namespace std;

int secondLargest(int, int[]);
static int count = 0;
int main()
{
	int p = 0, times = 0, result = 0;
	
	cin >> times;
	//cin >> p;
	int arr[6] = {1, 2, 5, 10, 50, 100};
	while (times != 0)
	{
		cin >> p;
		result = secondLargest(p, arr);
		cout << result;
		count = 0;
		times--;
	}
	
}

int secondLargest(int element, int array[])
{
	int remaining = 0;
	
	if (element == 0)
	{
		return count;
	}
	else
	{
		for (int i = 0; i < 6; i++)
		{
			if (element < array[i])
			{
				remaining = array[i-1]; 
				
				break;
			}
			if (i == 5)
			{
				remaining = array[i];
			}
		}
		count++;
		secondLargest((element - remaining), array);
	}
}
