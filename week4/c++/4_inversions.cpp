#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int> a, vector<int> t, int l, int m, int r)
{
    int i, j, k;
    int inv = 0;

    i = l;
    j = m;
    k = l;

    while ((i < m) & (j <= r))
    {
        if (a[i] <= a[j])
        {
            t[k++] = a[i++];
        }
        else
        {
            t[k++] = a[j++];
            //inversions
            inv += (m - i);
        }
    }
    while (i < m)
    {
        t[k++] = a[i++];
    }
    while (j < m)
    {
        t[k++] = a[j++];
    }
    /*
    for (i = l; i <= r; i++)
    {
        a[i] = t[i];
    }*/
    return inv;
}

long long mergesort(vector<int> a, vector<int> t, int l, int r)
{
    int m;
    long long inv = 0;
    if (r > l)
    {
        m = (l + r) / 2;

        inv += mergesort(a, t, l, m);
        inv += mergesort(a, t, m + 1, r);

        inv += merge(a, t, l, m + 1, r);
    }
    return inv;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << mergesort(v, t, 0, v.size() - 1) << endl;
    return 0;
}