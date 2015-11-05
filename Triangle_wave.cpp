//488	 Triangle Wave

#include <iostream>

using namespace std;

int main(){
	int n;
	int a, b, i, j, k;
	cin >> n;
	while(n>0){
		n--;
		cin >> a >> b;
		for(i=0;i<b;i++){
			for(j=1;j<a;j++){
				for(k=0;k<j;k++) cout << j;
				cout << endl;
			}
			for(k=0;k<j;k++) cout << j;
			cout << endl;
			for(j=a-1;j>0;j--){
				for(k=0;k<j;k++) cout << j;
				cout << endl;
			}
			if(i<b-1) cout << endl;
		}
		if(n>0) cout << endl;
	}
	return 0;
}
