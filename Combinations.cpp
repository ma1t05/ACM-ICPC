// 369 Combinations

#include<iostream>

using namespace std;

unsigned long C[5050] = { };

unsigned long combinations(int N,int M);

int main(){
	unsigned int N,M;
	C[0] = 1;
	C[1] = 1;
	C[2] = 1;
	cin >> N >> M;
	while(N > 0 && M > 0){
		cout << N << " things taken " << M << " at a time is " << combinations(N,M) << " exactly." << endl;
		cin >> N >> M;
	}
	return 0;
}

unsigned long combinations(int N,int M){
	if(M < 0 || M > N) return 0;
	int p = (N*(N+1))/2 + M;
	if(C[p] == 0) C[p] = combinations(N - 1,M - 1) + combinations(N - 1,M);
	return C[p];
}