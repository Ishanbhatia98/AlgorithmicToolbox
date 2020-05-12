#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int count(vector<int> &v, int &d, int &m, int c, int x)
{
    if (x + m >= d)
    {
        return c;
    }
    int n = v.size();
    for (int i = n - 1; i > -1; i--)
    {
        if (x + m > v[i])
        {
            return count(v, d, m, c + 1, v[i]);
        }
    }
}

bool check(vector<int> &v, int &d, int &m)
{
    int n = v.size();
    if (d - v[n - 1] > m)
    {
        return false;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > m)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int d, m, n;
    cin >> d;
    cin >> m;
    cin >> n;
    vector<int> v(n);
    while (n--)
    {
        int i;
        cin >> i;
        v.push_back(i);
    };

    if (check(v, d, m))
    {
        cout << count(v, d, m, 0, 0) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}