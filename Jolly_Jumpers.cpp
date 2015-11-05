
#include <iostream>

using namespace std;

int main(){
	int n, i;
	long long a, b;
	int c;
	bool Jolly,jumpers[3000];
	while(cin >> n){
		if (cin.eof()) return 0;
		for(i=1;i<n;i++) jumpers[i-1] = false;
		Jolly = true;
		cin >> a;
		for(i=1;i<n;i++){
			cin >> b;
			c = (a > b ? a - b : b - a)-1;
			if (c<0||c>=n-1||jumpers[c]) {
				Jolly = false;
				while(++i<n) cin >> b;
				break;
			}
			jumpers[c] = true;
			a = b;
		}
		cout << (Jolly ? "Jolly" : "Not jolly") << endl;
	}
	return 0;
}
