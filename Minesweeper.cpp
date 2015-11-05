
#include <iostream>

using namespace std;

int main(){
	int n, m, i, j, x=0;
	int field[101][101];
	char a;
	while(cin >> n >> m){
		if (n==0||m==0) return 0;
		if(x > 0) cout << endl;
		cout << "Field #" << ++x << ":" << endl;
		for(i=0;i<n;i++) for(j=0;j<m;j++) field[i][j] = 0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin >> a;
				if (a=='*'){
					field[i][j] = -1;
					if(j>0){
						if(i>0&&field[i-1][j-1]>=0) field[i-1][j-1]++;
						if(field[i][j-1]>=0) field[i][j-1]++;
						if(field[i+1][j-1]>=0) field[i+1][j-1]++;
					}
					if(field[i+1][j]>=0) field[i+1][j]++;
					if(field[i+1][j+1]>=0) field[i+1][j+1]++;
					if(field[i][j+1]>=0) field[i][j+1]++;
					if(i>0){
						if(field[i-1][j+1]>=0) field[i-1][j+1]++;
						if(field[i-1][j]>=0) field[i-1][j]++;
					}
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(field[i][j] < 0) cout << "*";
				else cout << field[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
