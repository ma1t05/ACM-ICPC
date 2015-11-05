
#include <iostream>

using namespace std;

int main(){
	char wertyu[] = "234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
	char qwerty[] = "1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
	string line;
	int i,j,n;
	while(getline(cin,line)){
		for(i=0;line[i]!='\0';i++){
			if(line[i]==' ') cout << " ";
			else for(j=0;wertyu[j]!='\0';j++){
					if(line[i]==wertyu[j]){
						cout << qwerty[j];
						break;
					}
				}
		}
		cout << endl;
	}
	return 0;
}