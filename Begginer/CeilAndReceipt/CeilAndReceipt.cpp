/**
 * Tomya is a girl. She loves Chef Ciel very much.

	Tomya like a positive integer p, and now she wants to get a receipt of Ciel's restaurant whose total price is exactly p. 
	* The current menus of Ciel's restaurant are shown the following table.

	Name of Menu	price
	eel flavored water	1
	deep-fried eel bones	2
	clear soup made with eel livers	4
	grilled eel livers served with grated radish	8
	savory egg custard with eel	16
	eel fried rice (S)	32
	eel fried rice (L)	64
	grilled eel wrapped in cooked egg	128
	eel curry rice	256
	grilled eel over rice	512
	deluxe grilled eel over rice	1024
	eel full-course	2048
	Note that the i-th menu has the price 2i-1 (1 ≤ i ≤ 12).

	Since Tomya is a pretty girl, she cannot eat a lot. So please find the minimum number of menus whose total price is exactly p. Note that 
	* if she orders the same menu twice, then it is considered as two menus are ordered. (See Explanations for details)

	Input
	The first line contains an integer T, the number of test cases. Then T test cases follow. Each test case contains an integer p.

	Output
	For each test case, print the minimum number of menus whose total price is exactly p.

	Constraints
	1 ≤ T ≤ 5
	1 ≤ p ≤ 100000 (105)
	There exists combinations of menus whose total price is exactly p.
	
	Sample Input:
	4
	10
	256
	255
	4096
	 
	Sample Output:
	2
	1
	8
	2
	 
	Explanations:
	
	In the first sample, examples of the menus whose total price is 10 are the following:
	1+1+1+1+1+1+1+1+1+1 = 10 (10 menus)
	1+1+1+1+1+1+1+1+2 = 10 (9 menus)
	2+2+2+2+2 = 10 (5 menus)
	2+4+4 = 10 (3 menus)
	2+8 = 10 (2 menus)
	Here the minimum number of menus is 2.

	In the last sample, the optimal way is 2048+2048=4096 (2 menus). Note that there is no menu whose price is 4096.
*/

#include <iostream>

using namespace std;

int secondLargest(int, int[]);
static int count = 0;
int main()
{
	int p = 0, times = 0, result = 0;
	
	cin >> times;
	//cin >> p;
	int arr[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
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
		for (int i = 0; i < 12; i++)
		{
			if (element < array[i])
			{
				remaining = array[i-1]; 
				
				break;
			}
			if (i == 11)
			{
				remaining = array[i];
			}
		}
		count++;
		secondLargest((element - remaining), array);
	}
}
