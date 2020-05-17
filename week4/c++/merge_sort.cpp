//Segmentation Fault: 11??
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void merge(vector<int> a, int l, int r, int m)
{

    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = a[i + 1];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = a[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = 1;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    };
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    };
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    };
}

void mergesort(vector<int> a, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergesort(a, l, m);
        mergesort(a, m + 1, r);

        merge(a, l, m, r);
    }
}

int main()
{
    size_t n;
    cin >> n;
    int r = n;
    vector<int> a(n);

    while (r--)
    {
        int i;
        cin >> i;
        a.push_back(i);
    };

    mergesort(a, 0, n - 1);

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << " ";
    return 0;
}