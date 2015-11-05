
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int C,N,people[1000],i,j,k;
	double above,average,total;
	cin >> C;
	cout << setprecision(3) << fixed;
	for(i=0;i<C;i++){
		cin >> N;
		for(j=0;j<N;j++)cin >> people[j];
		total=0.0;
		for(j=0;j<N;j++)total+=people[j];
		average=total/N;
		k=0;
		for(j=0;j<N;j++)if(people[j]>average)k++;
		above=100.0*k/N;
		cout << above << "%" << endl;
	}
	return 0;
}
