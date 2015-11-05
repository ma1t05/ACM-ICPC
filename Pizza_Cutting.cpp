//10079 Pizza Citting

#include<iostream>

using namespace std;

int main(){
  long long N;
  while(cin >> N){
    if(N<0) return 0;
    if(N&1) cout << (N * ((N+1)>>1) + 1) << endl;
    else cout << ((N>>1)*(N+1) + 1) << endl; 
  }
}
