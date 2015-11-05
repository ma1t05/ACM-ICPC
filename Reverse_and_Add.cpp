
#include <iostream>

using namespace std;

long long reverse(long long P){
	int i;
	long long ans = 0;
	for(i=0;i<10;i++){
		ans = 10 * ans + P%10;
		P = P/10;
		if(P == 0) break;
	}
	return ans;
}

int main(){
	int N,i,count;
	long long P, reverse_of_P;
	cin >> N;
	for(i = 0; i < N; i++){
		cin >> P;
		reverse_of_P = reverse(P);
		count = 0;
		while(P!=reverse_of_P){
			count++;
			P += reverse_of_P;
			reverse_of_P = reverse(P);
		};
		cout << count << " " << P << endl;
	}
	return 0;
};

