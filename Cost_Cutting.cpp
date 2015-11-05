// 11727 Cost Cutting

#include<iostream>

using namespace std;

int main(){
	int T,a,b,c,x;
	cin >> T;
	for(int i = 1;i <= T;i++){
		cin >> a >> b >> c;
		if(a > b) {
			x = a;
			a = b;
			b = x;
		}
		if(b > c){
			x = b;
			b = c;
			c = x;
		}
		if(b < a){
			x = a;
			a = b;
			b = x;
		}
		cout << "Case " << i << ": " << b << endl;
	}
	return 0;
}