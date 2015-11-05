// 543 - Goldbach's Conjecture

#include<iostream>
#define MAX_N 1000000
using namespace std;

int main(){
	bool is_prime[MAX_N];
	int i,j,n;
	
	for(i=0;i<MAX_N;i++) is_prime[i] = true;
	is_prime[0] = false;
	is_prime[1] = false;
	for(i=2;i<MAX_N;i++){
		if(is_prime[i]){
			for(j=2*i;j<MAX_N;j+=i) 
				is_prime[j] = false;
		}
	}
	
	while((cin >> n) && n > 0){
		for(i=2;i<n;i++){
			if(is_prime[i] && is_prime[n-i]){
				cout << n << " = " << i << " + " << n - i << endl;
				break;
			}
		}
	}
	return 0;
}