#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <iomanip>

using namespace std;

class Item
{
public:
    int value, weight;
    Item(int v, int w) : value(v), weight(w){};
    /*Item(int v, int w)
    {
        value = v;
        weight = w;
    }*/
    Item(){};
};

bool cmp(Item a, Item b)
{
    return (double)(a.value / a.weight) > (double)(b.value / b.weight);
}

double get_optimal_value(int capacity, vector<Item> items)
{
    int weight = 0;
    int value = 0;

    sort(items.begin(), items.end(), cmp);

    for (int i = 0; i < items.size(); ++i)
    {
        if (items[i].weight + weight <= capacity)
        {
            weight += items[i].weight;
            value += items[i].value;
        }
        else
        {
            int r = capacity - weight;
            value += items[i].value * ((float)r / items[i].weight);
            break;
        }
    }
    return value;
}

int main()
{
    int n;
    int capacity;
    cin >> n >> capacity;
    vector<Item> items;
    items.resize(n);
    for (int i = 0; i < n; i++)
    {
        int v, w;
        cin >> v >> w;
        items[i] = Item(v, w);
    }

    double optimal_value = get_optimal_value(capacity, items);

    cout << fixed;
    cout << setprecision(4);
    cout << optimal_value << endl;

    return 0;
}