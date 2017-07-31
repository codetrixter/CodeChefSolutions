
/**
 * Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.

	Input
	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.

	Output
	Display the second largest among A, B and C.

	Constraints
	1 ≤ T ≤ 1000
	1 ≤ A,B,C ≤ 1000000
	Example
	Input
	3 
	120 11 400
	10213 312 10
	10 3 450

	Output

	120
	312
	10
*/

#include <iostream>

using namespace std;

int main()
{
	static int times = 0;
	int arr[times];
	cin >> times;
	
	for (int i = 0; i < times; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < times-1; i++)
	{
		if (arr[i] > arr[i+1])
		{
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	
	cout << arr[times-2];
}
