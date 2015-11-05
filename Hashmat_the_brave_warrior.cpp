
#include <iostream>

using namespace std;

int main(){
	long long Hashmat, opponent;
	while (cin >> Hashmat >> opponent) {
		if (cin.eof()) return 0;
		cout << ((Hashmat > opponent) ? (Hashmat - opponent) : (opponent - Hashmat)) << endl;
	};
};
