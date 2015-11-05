//424	Integer Inquiry

#include <iostream>
#define LENGHT 102
using namespace std;

int main(){
	int Inquiry[LENGHT];
	int a, b, i, j;
	string line;
	for(i=0;i<LENGHT;i++)Inquiry[i]=0;
	while(getline(cin,line)){
		if(line=="0") {
			for(i=LENGHT-1;i>=0;i--) if (Inquiry[i]!=0) break;
			for(j=i;j>=0;j--) cout << Inquiry[j];
			cout << endl;
			return 0;
		}
		j=0; a=0;
		for(i=line.length()-1;i>=0;i--,j++){
			switch(line[i]){
				case '9': b=9; break;
				case '8': b=8; break;
				case '7': b=7; break;
				case '6': b=6; break;
				case '5': b=5; break;
				case '4': b=4; break;
				case '3': b=3; break;
				case '2': b=2; break;
				case '1': b=1; break;
				case '0': b=0; break;
			}
			if(Inquiry[j]+a+b>9){
				Inquiry[j]=Inquiry[j]+a+b-10;
				a=1;
			}
			else {
				Inquiry[j]=Inquiry[j]+a+b;
				a=0;
			}
		}
	}
}
