#include <iostream>
using namespace std;

bool prime(int n){
  if( n <= 0) return 0;
  int a = n;
  for(int i = 2; i <= a; i++){
    if(!(n%i)) return 0;
    a = (a / i) + 1;
  }
  return 1;
}

class node{
  int soha;
  int tara;
  node** list;
};

int main(){
  int T;
  cin >> T;
  int N,k;
  int* A; 
  int S;
  int cases;
  bool* L,R;
  for(; T > 0; T--){
    cin >> N >> k;
    A = new int[N];
    L = new bool[N];
    R = new bool[N];
    for(int i = 0; i < N; i++) cin >> A[i];
    cases = 0;
    S = 0;
    for(int i = 1; i < N; i++){
      L[i] = 0;
      S += A[i];
      if(prime(S)){
	cases++;
	L[i] = 1;
      }
    }
    S = 0;
    for(int i = N - 1; i > 0; i--){
      R[i] = 0;
      S += A[i];
      if(prime(S)){
	cases++;
	R[i] = 1;
      }
    }
    



    delete A;
  }
  return 0;
}
