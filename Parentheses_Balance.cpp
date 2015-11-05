
#include <iostream>
#include <string>

using namespace std;

bool is_correct(string& A);
char stack[128];

int main(){
	int i;
	string line;
	cin >> i;
	getline(cin,line,'\n');
	for(;i>0;i--){
		getline(cin,line,'\n');
		if(is_correct(line))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		//if(i>1) cout << endl;
	}
}

bool is_correct(string& A){
	int i,j;
	for(i=0, j=0;A[j]!='\0';j++){
		if(A[j] == ')' || A[j] == ']'){
			if(i > 0) {
				if((A[j] == ')' && stack[i-1] == '(') || (A[j] == ']' && stack[i-1] == '[')) 
					i--;
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
		else {
			stack[i++] = A[j];
			if(2*i > A.size()+1) {
				return false;
			}
		}
	}
	return (i == 0);
}