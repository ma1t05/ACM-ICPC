// 374 Big Mod

#include<iostream>

using namespace std;

int main(){
	int B,b,P,M;
	while(cin >> B >> P >> M){
		B = B % M;
		b = 1;
		while(P>0){
			if(P&1) b = (B * b) % M;
			B = (B * B) % M;
			P=P>>1;
		}
		cout << b << endl;
	}
	return 0;
}