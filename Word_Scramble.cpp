//483	Word Scramble

#include <iostream>

using namespace std;

int main(){
	int i, j;
	string line;
	while(getline(cin,line)){
		if(line=="")return 0;
		for(i=0;line[i]!='\0';i++){
			if(line[i]==' '){
				for(j=i-1;j>=0&&line[j]!=' ';j--)cout << line[j];
				cout << " ";
			}
		}
		for(j=i-1;j>=0&&line[j]!=' ';j--)cout << line[j];
		cout << endl;
	}
}
