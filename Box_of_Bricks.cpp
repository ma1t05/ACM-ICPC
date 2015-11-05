
#include <iostream>

using namespace std;

int main(){
	int n,i,H,heights[50],ans,Set=0;
	while(cin >> n){
		if(n==0) return 0;
		H = 0;
		for(i=0;i<n;i++){
			cin >> heights[i];
			H+= heights[i];
		}
		H/=n;
		ans=0;
		for(i=0;i<n;i++)if(heights[i]<H)ans+=H-heights[i];
		cout << "Set #" << ++Set << endl;
		cout << "The minimum number of moves is " << ans << "." << endl << endl;
	}
}