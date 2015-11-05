
#include <iostream>

using namespace std;

int main(){
	string line;
	int i, words;
	bool begin;
	do{
		getline(cin,line);
		words = 0;
		begin = true;
		for(i = 0;line[i]!='\0';i++){
			if ((line[i] >= 'A' && line[i] <= 'Z') ||
				(line[i] >= 'a' && line[i] <= 'z')) {
				if (begin) {
					begin = false;
					words++;
				}
			}
			else begin = true;
		}
		cout << words << endl;
		if (cin.eof()) return 0;
	}while(1);
}
