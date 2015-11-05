
#include <iostream>

using namespace std;

int main() {
	string line;
	char b;
	int i;
	while(cin >> line){		
		if(cin.eof()) return 0;
		for(i = 0;line[i]!='\0';i++){
			b = line[i] - 7;
			cout << b;
		}
		cout << endl;
	}
}
