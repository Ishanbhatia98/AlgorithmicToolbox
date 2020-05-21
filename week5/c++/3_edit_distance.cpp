#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printv(vector<vector<int>> v)
{
    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int edit_distance(string str1, string str2)
{
    vector<vector<int>> dp(str1.size() + 1, vector<int>(str2.size() + 1));

    for (int i = 0; i <= str1.size(); i++)
    {
        for (int j = 0; j <= str2.size(); j++)
        {
            if (i == 0)
            {
                dp[i][j] = j;
            }
            else if (j == 0)
            {
                dp[i][j] = i;
            }

            else if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
            }
        }
    }
    //printv(dp);
    return dp[str1.size()][str2.size()];
}

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    cout << edit_distance(str1, str2) << endl;
    return 0;
}