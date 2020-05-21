#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void primitive_calculator(int number)
{
    vector<int> counts(number + 1);
    vector<int> predecessor(number + 1);

    for (int i = 2; i <= number; i++)
    {
        counts[i] = counts[i - 1] + 1;
        predecessor[i] = i - 1;
        if (i % 3 == 0)
        {
            if (counts[i / 3] < counts[i])
            {
                counts[i] = counts[i / 3] + 1;
                predecessor[i] = i / 3;
            }
        }
        if (i % 2 == 0)
        {
            if (counts[i / 2] < counts[i])
            {
                counts[i] = counts[i / 2] + 1;
                predecessor[i] = i / 2;
            }
        }
    }
    cout << counts[number] << endl;

    int i = number;

    vector<int> v;

    while (i != 1)
    {
        v.push_back(i);
        i = predecessor[i];
    };

    reverse(v.begin(), v.begin() + v.size());

    cout << 1 << " ";

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    /*
       list<int> sequence;
       for(int i = number;i!=0;i=predecessor[i]){
           sequence.push_front(i);
           */
}

int main()
{
    int number;
    cin >> number;
    primitive_calculator(number);
    return 0;
}