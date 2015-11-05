// 445 - Marvelous Mazes

#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

int main(){
	string line;
	int i,stack;
	char a;
	while(getline(cin,line,'\n')){
		stack = 0;
		for(i = 0;line[i]!='\0';i++){
			if((line[i] <= 'Z' && line[i] >= 'A') || line[i] == '*'){
				for(;stack>0;stack--)cout << line[i];
			}
			else if (line[i]=='b') {
				for(;stack>0;stack--)cout << ' ';
			}
			else if (line[i]=='!') {
				cout << endl;
			}
			else {
				a = line[i];
				stack += atoi(&a);
			}
		}
		cout << endl;
	}
	return 0;
}
