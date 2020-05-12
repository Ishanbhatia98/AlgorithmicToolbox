//not working as expected!
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void printv(vector<T> &v)
{
    if (v.empty())
        return;
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
    vector<int> a, b;
    int r = n;
    while (r--)
    {
        int i;
        cin >> i;
        a.push_back(i);
    };
    while (n--)
    {
        int i;
        cin >> i;
        b.push_back(i);
    };

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    printv(a);
    printv(b);

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
        cout << total << endl;
        total += (a[i] * b[i]);
    };
    cout << total << endl;
    return 0;
}