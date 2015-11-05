// 382	Perfection

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int number;
	int i,j;
	int sum;
	cout << "PERFECTION OUTPUT" << endl;
	while(cin >> number){
		if(number == 0) break;
		if(number > 1){
			for(sum = 1,i=2,j = number;i<j,sum<number;i++){
				if(i<j && number%i==0){
					j = number/i;
					sum += i;
					if(i>=j) break;
					sum += j;
				}
				if(i>=j) break;
			}
		}
		else {
			sum = 0;
		}
		cout << setw(5) << right << number;
		cout << "  ";
		if(sum > number) cout << "ABUNDANT";
		else if(sum < number) cout << "DEFICIENT";
		else cout << "PERFECT";
		cout << endl;
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
}