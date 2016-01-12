/* 11340 - Newspaper */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
  int M,N,K;
  int paid[256];
  char c;
  int i,value;
  char b[10000];
  long long int money;
  cin >> N;
  while (N-- > 0) {
    cin >> K;
    for (i = 0;i < 256;i++) 
      paid[i] = 0;
    while (K-- > 0) {
      cin >> c >> value;
      paid[c+128] = value;
    }
    cin >> M;
    money = 0;
    while (M-- >= 0) {
      cin.getline(b,10000);
      for (i = 0;b[i];i++)
	money += paid[b[i]+128];
    }
    cout << money/100 << "." << setfill('0') << setw(2) << money%100 << "$" << endl;
  }
  return 0;
}
