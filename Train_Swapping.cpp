
#include <iostream>

using namespace std;

int main(){
	int N,L,i,j,train[50],swaps;
	cin >> N;
	for(int count = 0;count<N;count++){
		cin >> L;
		for(i=0;i<L;i++)cin >> train[i];
		swaps = 0;
		for(i=0;i<L;i++){
			for(j=i;j<L;j++)if(train[j]==i+1) break;
			swaps+=j-i;
			for(;j>i;j--)train[j]=train[j-1];
		}
		cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
	}
	return 0;
}