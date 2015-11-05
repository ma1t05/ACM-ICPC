// 10327 Flip Sort

#include <iostream>

using namespace std;

int main(){
	int N, flips, i,j, set[1000];
	while(cin >> N){
		for(i = 0;i < N;i++) cin >> set[i];
		flips = 0;
		for(i = 1;i < N;i++) for(j = 0;j < i;j++) if(set[j] > set[i]) flips++;
		cout << "Minimum exchange operations : " << flips << endl;
	}
	return 0;
}