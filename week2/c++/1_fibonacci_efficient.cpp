#include<iostream>
#include<vector>

using namespace std;

template<typename T>
void printv(vector<T> &v){
	if (v.empty()) return;
	for (auto i:v){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cin  >> n;
	vector<int> v;
	v.push_back(0);
	v.push_back(1);

	for(int i=2; i<=n; i++){
		int l = v[i-1]+v[i-2];
		v.push_back(l);
	
	};
	//printv(v);
	cout << v[n] << endl;
	return 0;
}
