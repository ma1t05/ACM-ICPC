// - The Collatz Sequence

#include<iostream>

using namespace std;

int main(){
	int c,A,L,terms,a,l;
	c = 1;
	while((cin >> A >> L) && A > 0){
		l=(L-1)/3;
		terms = 1;
		a = A;
		do{
			terms++;
			a = (a&1) ? 3 * a + 1 : a >> 1;
		}while(a > 1 && a <= l);
		cout <<  "Case " << c++ << ": A = " << A << ", limit = " << L << ", number of terms = " << terms << endl;
	}
	return 0;
}