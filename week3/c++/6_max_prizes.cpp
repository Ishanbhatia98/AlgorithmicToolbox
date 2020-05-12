#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void printv(vector<T> &v)
{
    if (v.empty())
        return;
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

void optimal_solution(int n)
{
    vector<int> ans;
    int k = n;
    for (int i = 1; i < n; i++)
    {
        if (k <= 2 * i)
        {
            ans.push_back(k);
            printv(ans);
            break;
        }
        else
        {
            ans.push_back(i);
            k -= i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl
             << 1 << endl;
    }
    else
    {
        optimal_solution(n);
    }
    return 0;
}