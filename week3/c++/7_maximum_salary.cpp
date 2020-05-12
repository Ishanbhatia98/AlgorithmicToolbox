#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool cmp(int a, int b)
{
    string c = to_string(a);
    string d = to_string(b);
    return (stoi(c + d) > stoi(d + c));
}

string conv(vector<int> v)
{
    string s = "";
    for (auto i : v)
    {
        string t = to_string(i);
        s += t;
    }
    return s;
}

string getMax(vector<int> v)
{
    sort(v.begin(), v.end(), cmp);
    return conv(v);
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
    cout << getMax(v) << endl;
    return 0;
}