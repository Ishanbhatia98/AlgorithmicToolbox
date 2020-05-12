#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T>
void printv(vector<T> &v){
	if(v.empty()) return;
	for(auto i:v){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	
	vector<long long int> v;
	
	int input = 0;
		
	
	while(i<n){
		int input;
		cin >> input;
		v.push_back(input);
		i++;
	};
	
	
	
	sort(v.begin(), v.end());

	cout << v[n-1]*v[n-2] << endl;
	return 0;
}
