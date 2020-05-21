#include <iostream>
#include <vector>

using namespace std;

int DPchange(int money, vector<int> coins)
{
    vector<int> minnumcoins(money + 1);
    minnumcoins[0] = 0;
    for (int m = 1; m <= money; m++)
    {
        minnumcoins[m] = 10000;
        for (auto c : coins)
        {
            if (m >= c)
            {
                /*int numcoins = minnumcoins[m - c] + 1;
                if (numcoins < minnumcoins[m])
                {
                    minnumcoins[m] = numcoins;
                }
                */
                minnumcoins[m] = min(minnumcoins[m], minnumcoins[m - c] + 1);
            }
        }
    }
    return minnumcoins[money];
}

int main()
{
    int n;
    cin >> n;

    vector<int> v{1, 3, 4};
    cout << DPchange(n, v) << endl;
    return 0;
}