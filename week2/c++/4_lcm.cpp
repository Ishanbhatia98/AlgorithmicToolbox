

#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{

	long long int a, b;
	cin >> a >> b;

	cout << (a * b) / gcd(a, b) << endl;

	return 0;
}
