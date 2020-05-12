#include<iostream>

using namespace std;

int main(){
	int n;
	cin >>n;
	int t = 0;
	if(n%10!=n){
		t+=n/10;
		n%=10;
	}
	if(n%5!=n){
		t+=n/5;
		n%=5;
	}
	if(n!=0){
		t+=n;
	}
	cout << t << endl;
	return 0;
}
