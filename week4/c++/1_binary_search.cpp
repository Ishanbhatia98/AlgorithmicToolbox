#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int bs(vector<int> v, int l, int h, int k)
{
    if (l > h)
    {
        return -1;
    }
    int m = ceil(l + (h - l) / 2);
    if (k == v[m])
    {
        return m;
    }
    else if (k < v[m])
    {
        return bs(v, l, m - 1, k);
    }
    else
    {
        return bs(v, m + 1, h, k);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    while (n--)
    {
        int i;
        cin >> i;
        a.push_back(i);
    };

    int r;
    cin >> r;
    vector<int> q;
    while (r--)
    {
        int i = 0;
        cin >> i;
        q.push_back(i);
    };

    for (auto i : q)
    {
        int x = bs(a, 0, a.size() - 1, i);
        cout << x << " ";
    }
    cout << endl;
    return 0;
}