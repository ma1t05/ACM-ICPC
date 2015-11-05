// 10346 Peter's Smokes

#include<iostream>

using namespace std;

int main(){
	int n,k,smokes;
	while(cin >> n >> k){
		smokes = 0;
		do{
			smokes += n - n%k;
			n = n/k + n%k;
		}while(n >= k);
		smokes += n;
		cout << smokes << endl;
	}
}