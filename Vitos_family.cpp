//10041	Vito's family

#include <iostream>
using namespace std;

int main(){
	int n;
	int i, j, k;
	int r, s[500];
	int distance, minimum, l;
	cin >> n;
	while(n>0){
		n--;
		distance=0;
		cin >> r;
		for(i=0;i<r;i++){
			cin >> s[i];
			distance+=s[i];
		}
		j=(distance/r);
		k=j;
		l=0;
		distance=0;
		for(i=0;i<r;i++){
			//distance+=(s[i]>j ? s[i]-j : j-s[i]);
			if (s[i]<j) {
				distance+=j-s[i];
				l++;
			} else distance+=s[i]-j;
		}
		minimum=distance;
		do{
			j--;
			distance=0; l=0;
			//for(i=0;i<r;i++) distance+=(s[i]>j ? s[i]-j : j-s[i]);
			for(i=0;i<r;i++){
				if (s[i]<j) {
					distance+=j-s[i];
					l++;
				} else distance+=s[i]-j;
			}
			if(minimum>distance) minimum=distance;
			else break;
		}while(2*l>r);
		j=k;
		do{
			j++;
			distance = 0;
			//for(i=0;i<r;i++) distance+=(s[i]>j ? s[i]-j : j-s[i]);
			for(i=0;i<r;i++){
				if (s[i]>j) {
					distance+=s[i]-j;
					l++;
				} else distance+=j-s[i];
			}
			if(minimum>distance) minimum=distance;
			else break;
		}while(2*l>r);
		cout << minimum << endl;
	}
	return 0;
}
