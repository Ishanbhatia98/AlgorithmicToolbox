//not working as expected!
#include <iostream>
#include <algorithm>
#include <vector>

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

struct Segment
{
    int start, end;
};

bool cmp(Segment a, Segment b)
{
    return (a.end < b.end);
}

vector<int> optimal_solution(vector<Segment> s, int n)
{
    sort(s.begin(), s.end(), cmp);
    vector<int> points;
    int point = s[0].end;
    points.push_back(point);
    for (int i = 0; i < n; i++)
    {
        if (point > s[i].end || point < s[i].start)
        {
            point = s[i].end;
            points.push_back(point);
        }
    }
    return points;
}

int main()
{
    int n;
    cin >> n;
    int r = n;
    vector<Segment> segment;
    while (r--)
    {
        Segment i;
        cin >> i.start >> i.end;
        segment.push_back(i);
    };
    vector<int> points = optimal_solution(segment, n);
    cout << points.size() << endl;
    printv(points);
    return 0;
}