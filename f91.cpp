
#include <iostream>

using namespace std;

int main(){
	long long N;
	while(cin >> N){
		if(N==0) return 0;
		cout << "f91(" << N << ") = " << (N>100 ? N-10 : 91) << endl;
	}
}