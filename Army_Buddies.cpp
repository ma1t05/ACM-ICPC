/* 12356 - Army Buddies */
#include <iostream>
using namespace std;

int main () {
  bool buddie[100000];
  int S,B;
  int L,R;
  int i,j;
  cin >> S >> B;
  do {
    for (i = 0;i < S;i++) buddie[i] = true;
    for (j = 0;j < B;j++) {
      cin >> L >> R;
      for (i = L-1;i < R;i++) buddie[i] = false;
      while (L > 0 && !buddie[L-1]) L--;
      while (R < S && !buddie[R]) R++;

      if (L > 0)
	cout << L;
      else 
	cout << "*";
      cout << " ";
      if (R < S)
	cout << R+1;
      else 
	cout << "*";
      cout << endl;
    } 
    cout << '-' << endl;
    cin >> S >> B;
  } while (S != 0 && B != 0);
  return 0;
}
