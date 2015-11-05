
#include <iostream>

using namespace std;

int main(){
	int v, t;
	while (cin >> v >> t) {
		if (cin.eof()) return 0;
		cout << 2 * v * t << endl;
	};
};
