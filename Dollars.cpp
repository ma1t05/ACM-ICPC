// 147	Dollars

#include <iostream>
#define MAX_CURRENCY 11
using namespace std;

double currency[MAX_CURRENCY]={100,50,20,10,5,2,1,0.5,0.2,0.1,0.05};
int change[MAX_CURRENCY];

int main(){
	int i;
	double amount;
	int ways;
	while(cin >> amount){
		if(amount == 0.0) return 0;
		for(i=0;i<MAX_CURRENCY;i++)change[i]=0;
		
		cout << N << " " << C << ":";
		for(i=a;i<=b;i++)cout << " " << prime_list[i];
		cout << endl;
		cout << endl;
		if(cin.eof())return 0;
	}
}