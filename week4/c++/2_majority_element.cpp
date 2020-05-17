//Not working as expected

#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

set<int> convert(vector<int> v)
{
    set<int> s;

    for (auto i : v)
    {
        s.insert(i);
    }
    return s;
}

int count(vector<int> v, set<int> s)
{
    int n = ceil(v.size() / 2);
    for (auto i : s)
    {
        if (count(v.begin(), v.end(), i) > n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int i;
        cin >> i;
        v.push_back(i);
    };

    set<int> s = convert(v);

    int a = count(v, s);
    cout << a << endl;
    return 0;
}
