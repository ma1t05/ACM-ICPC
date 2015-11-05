
#include <iostream>

using namespace std;

int main(){
	string line;
	int i,j;
	long long skew,k;
	while(getline(cin,line)){
		if(line[0]=='0') return 0;
		skew = 0; k = 0;
		for(i=0;line[i]!='\0';i++){
			j = line[i]%48;
			k+=j;
			skew=(skew<<1)+j;
		}
		skew=(skew<<1)-k;
		cout << skew << endl;
	}
}