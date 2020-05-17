#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void printv(vector<T> v)
{
    if (v.empty())
    {
        return;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
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
    }
    sort(v.begin(), v.end());
    printv(v);
    return 0;
}