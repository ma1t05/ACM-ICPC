
#include <iostream>

using namespace std;

int main() {
	string line;
	bool open = true;
	int i;
	while(getline(cin,line)){
		if(cin.eof())return 0;
		for(i=0;line[i]!='\0';i++){
			if(line[i]=='"') {
				if(open) cout << "``";
				else cout << "''";
				open = !open;
			}
			else cout << line[i];
		}
		cout << endl;
	}
}
