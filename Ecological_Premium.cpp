
#include <iostream>

using namespace std;

int main() {
	int n,i,f,j;
	int farmyard,animals,friendliness,ans;
	cin >> n;
	for(i = 0;i<n;i++){
		cin >> f;
		ans = 0;
		for(j=0;j<f;j++){
			cin >> farmyard >> animals >> friendliness;
			ans += farmyard * friendliness;
		}
		cout << ans << endl;
	}
}
