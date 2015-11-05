// 264	 Count on Cantor

#include <iostream>

using namespace std;

int main(){
	int n;
	int a, b, i;
	while(cin >> n){
		i = 0;
		a = 0;
		do{
			a++;
			i+=a;
		}while(n>i);
		if(a&1){
			b = a;
			a = 1;
			i=n-i;
		}
		else { 
			b = 1;
			i-=n;
		}
		cout << "TERM " << n << " IS " << a-i << "/" << b+i;
		if (cin.eof()) return 0;
		cout << endl;
	}
}