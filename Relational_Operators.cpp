
#include <iostream>

using namespace std;

int main(){
	int T,a,b,i;
	cin >> T;
	for(i=0;i<T;i++){
		cin >> a >> b;
		cout << (a>b ? ">" : (a<b ? "<" : "=")) << endl;
	}
}