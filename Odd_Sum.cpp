
#include <iostream>

using namespace std;

int main(){
	int T,a,b,i;
	cin >> T;
	for(i=0;i<T;i++){
		cin >> a >> b;
		a=(a&1 ? a-1 : a)>>1;
		b=(b&1 ? b+1 : b)>>1;
		cout << "Case " << i+1 << ": " << b * b - a * a << endl;
	}
}