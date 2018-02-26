/**

    Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which all dolls have paired.One day while going through
    his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

    Help chef find which type of doll is missing..

    Input
    The first line contains the number of test cases.
    Second line of the input contains the number of elements in the array.
    The next n lines are the types of each doll that is left.
    Output
    Find the type of doll that doesn't have a pair

    Constraints
    1<=T<=10
    1<=N<=100000 (10^5)
    1<=ti<=100000
    Input:
    1
    3
    1
    2
    1


    Output:
    2


    Input:
    1
    5
    1
    1
    2
    2
    3
    Output:
    3

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int times = 0, position = 0, count = 0, size = 0;

    cin >> times;

    while(times-- != 0)
    {
        cin >> size;
        vector<int> array(size);

        for(int i = 0; i < size; i++)
        {
            cin >> array[i];
        }

        for(int j = 0; j < size; j++)
        {
            count = 0;
            int i = 0;
            for(i = 0; i < size; i++)
            {
                if(j != i)
                {
                    if(array[j] == array[i])
                    {
                        count++;
                        break;
                    }
                }
            }

            if(count == 0 && i == size)
            {
                position = j;
                cout << array[position] << endl;
            }
        }
    }
    return 0;
}
