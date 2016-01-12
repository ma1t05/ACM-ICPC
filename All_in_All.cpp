/* 10340 - All in All */
#include <iostream>

using namespace std;

int main(){
  string s,t;
  int i, j;
  bool s_in_t;
  cin >> s >> t;
  do{
    i = 0; j = 0;
    s_in_t = false;
    while(s[i] != '\0' && t[j] != '\0') {
      while (t[j] != '\0') {
	if (s[i] == t[j++]) {
	  i++;
	  break;
	}
      }
      if (s[i] == '\0') {
	s_in_t = true;
	break;
      }
    }
    cout << (s_in_t ? "Yes" : "No") << endl;
    cin >> s >> t;
  if (cin.eof()) return 0;
  }while(1);
}
