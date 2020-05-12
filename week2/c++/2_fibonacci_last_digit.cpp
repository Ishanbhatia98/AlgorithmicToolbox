#include <iostream>

using namespace std;
int main()
{
	long long int n;
	cin >> n;

	int previous = 0;
	int current = 1;
	for (int i = 2; i <= n; i++)
	{
		int temp = current;
		current = (previous + current) % 10;
		previous = temp;
	};

	cout << current % 10 << endl;
	return 0;
}
