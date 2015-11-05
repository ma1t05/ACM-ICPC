#include <iostream>
using namespace std;

int fib_table[100];

int fib_memo(int n){
  if( !n || n == 1) return n;
  if(!fib_table[n]) fib_table[n] = fib_memo(n-2) + fib_memo(n-1);
  return fib_table[n];
}

int main(){
  for(int i = 30; i>= 0; i--) cout << fib_memo(i) << " ";
  cout << endl;
  return 0;
}
