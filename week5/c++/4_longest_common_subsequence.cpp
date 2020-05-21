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

int edit_distance(vector<int> str1, vector<int> str2)
{
    vector<vector<int>> dp(str1.size() + 1, vector<int>(str2.size() + 1));

    for (int i = 0; i <= str1.size(); i++)
    {
        for (int j = 0; j <= str2.size(); j++)
        {
            if (i == 0)
            {
                dp[i][j] = 0;
            }
            else if (j == 0)
            {
                dp[i][j] = 0;
            }

            else if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(max(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
            }
        }
    }
    //printv(dp);
    return dp[str1.size()][str2.size()];
}

int main()
{
    int n;
    vector<int> v1;
    int m;
    vector<int> v2;
    cin >> n;
    while (n--)
    {
        int i;
        cin >> i;
        v1.push_back(i);
    }
    cin >> m;
    while (m--)
    {
        int i;
        cin >> i;
        v2.push_back(i);
    }
    cout << edit_distance(v1, v2) << endl;
    return 0;
}