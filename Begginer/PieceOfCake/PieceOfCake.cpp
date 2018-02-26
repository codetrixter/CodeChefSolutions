/**

    This is a very easy warm-up problem.

    You are given a string. Your task is to determine whether number of occurrences of some character in the string is equal to the sum of the numbers of
    occurrences of other characters in the string.

    Input
    The first line of the input contains an integer T denoting the number of test cases. Each of the next T lines contains one string S consisting of lowercase latin letters.

    Output
    For each test case, output a single line containing "YES" if the string satisfies the condition given above or "NO" otherwise.

    Constraints
    1 ≤ T ≤ 1000
    1 ≤ length of S ≤ 50
    Subtasks
    Subtask #1[28 points]: S contains no more than 2 different letters.
    Subtask #2[72 points]: No additional conditions

    Example
    Input:
    4
    acab
    zzqzqq
    abc
    kklkwwww
    Output:
    YES
    YES
    NO
    YES

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int times = 0;
    string s = "";
    cin >> times;

    while(times-- != 0)
    {
        cin >> s;
        vector<char> characterStrings (s.begin(), s.end());
        int size = characterStrings.size(), Max = 0;

        for(int j = 0; j < size; j++)
        {
            int count = 1;
            int i = 0;
            for(i = 0; i < size; i++)
            {
                if(j != i)
                {
                    if(characterStrings[j] == characterStrings[i])
                    {
                        count++;
                    }
                }
            }

            if(count > Max)
                Max = count;
        }

        if(Max == (size-Max))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
