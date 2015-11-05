// 10812 Beat the Spread

#include<iostream>

using namespace std;

int main(){
	int n,s,d;
	int a,b;
	cin >> n;
	for(;n>0;n--){
		cin >> s >> d;
		a=s+d;
		if(s >= d &&
		  a%2==0)
		{
			a /= 2;
			b = s - a;
			cout << a << " " << b << endl;
		}
		else cout << "impossible" << endl;
	}
	return 0;
}