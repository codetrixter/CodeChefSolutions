/**
 * All submissions for this problem are available.
	Given the list of numbers, you are to sort them in non decreasing order.
	Input
	t – the number of numbers in list, then t lines follow [t <= 10^6]. 
	Each line contains one integer: N [0 <= N <= 10^6]

	Output
	Output given numbers in non decreasing order.
	Example
	Input:

	5
	5
	3
	6
	7
	1
	Output:

	1
	3
	5
	6
	7
*/

#include <iostream>

using namespace std;

int main()
{
	int times = 0;
	int arr[times];
	cin >> times;
	
	for (int i = 0; i < times; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < times-1; i++)
	{
		for (int j = i+1; j < times; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		} 
	}
	
	for (int i = 0; i < times; i++)
	{
		cout << arr[i];
	}
	
}
