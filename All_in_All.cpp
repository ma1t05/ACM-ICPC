
#include <iostream>

using namespace std;

int main(){
	string s,t;
	int i, j;
	bool s_in_t;
	do{
		cin >> s >> t;
		for(i = 0,j = 0;s[i]!='\0';i++){
			s_in_t = false;
			for(;t[j]!='\0';j++){
				if(t[j]==s[i]) {
					s_in_t = true;
					break;
				}
			}
			if(s.size() - i > t.size() - j){
				s_in_t = false;
				break;
			}
			j++;
		}
		cout << (s_in_t ? "Yes" : "No");
		if (cin.eof()) return 0;
		cout << endl;
	}while(1);
}
