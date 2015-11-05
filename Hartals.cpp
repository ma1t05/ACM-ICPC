// 10050 - Hartals

#include <iostream>

using namespace std;

int main(){
	int T,N,P, i, j, h, Hartals;
	bool simulation[3650];
	cin >> T;
	do{
		cin >> N >> P;
		for(i=0;i<N;i++) simulation[i] = false;
		for(j=0;j<P;j++){
			cin >> h;
			for(i=h-1;i<N;i+=h) simulation[i] = true;
		}
		for(i=5;i<N;i+=7) simulation[i] = false;
		for(i=6;i<N;i+=7) simulation[i] = false;
		Hartals = 0;
		for(i=0;i<N;i++) if(simulation[i]) Hartals++;
		cout << Hartals << endl;
	}while(--T>0);
	return 0;
}