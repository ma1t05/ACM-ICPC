
#include <iostream>

using namespace std;

int main() {
	long long a,b;
	int c;
	int carry;
	while(cin >> a >> b){
		if(a==0&&b==0)return 0;
		carry = 0;
		c = 0;
		do{
			if(a%10+b%10+c>9){
				c = 1;
				carry++;
			}
			else c = 0;
			a/=10;
			b/=10;
		}while(a>0||b>0);
		if (carry == 0) cout << "No carry operation." << endl;
		else if (carry > 1) cout << carry << " carry operations." << endl;
		else cout <<  "1 carry operation." << endl;
	}
}
