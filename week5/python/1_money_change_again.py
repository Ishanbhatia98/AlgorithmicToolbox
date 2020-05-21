'''
def DPchange(money, coins):
    minnumcoins = dict()
    minnumcoins[0] = 0
    for m in range(1, money+1):
        minnumcoins[m] = 10**4
        for i in range(len(coins)):
            if m >= coins[i]:
                numcoins = minnumcoins[m-coins[i]] + 1
                if numcoins < minnumcoins[m]:
                    minnumcoins[m] = numcoins
    return minnumcoins[money]
'''


def DPchange(money, coins):
    minnumcoins = dict()
    minnumcoins[0] = 0
    for m in range(1, money+1):
        minnumcoins[m] = 10**4
        for c in coins:
            if m >= c:
                minnumcoins[m] = min(minnumcoins[m], minnumcoins[m-c]+1)
    return minnumcoins[money]


print(DPchange(int(input()), [1, 3, 4]))
