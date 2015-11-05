
#include <iostream>
#include <cmath>

using namespace std;

long long pow_n(long long k,int n){
	if(n==1) return k;
	return k * pow_n(k,n-1);
}

int main(){
	int n;
	double p;
	long long ans;
	while(cin >> n >> p){
		ans = round(pow(p,1.0/n));
		if(pow_n(ans,n)<p)ans++;
		else if(pow_n(ans-1,n)==p)ans--;
		cout <<  ans << endl;
	}
	return 0;
}