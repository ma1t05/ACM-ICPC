
#include <iostream>

using namespace std;

int main(){
	int N,i,j,array[100][100],a[100],b[100],maximum_sum,a1,a2,b1,b2,sum;
	while(cin >> N){
		if(cin.eof()) return 0;
		maximum_sum=0;
		for(i=0;i<N;i++){
			a[i]=0;
			b[i]=0;
		}
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				cin >> array[i][j];
				maximum_sum+=array[i][j];
				a[i]+=array[i][j];
				b[j]+=array[i][j];
			}
		}
		for(a1=0;a1<N;a1++)
			for(a2=a1;a2<N;a2++)
				for(b1=0;b1<N;b1++)
					for(b2=b1;b2<N;b2++){
						sum=0;
						for(i=a1;i<=a2;i++)for(j=b1;j<=b2;j++)sum+=array[i][j];
						if(sum>maximum_sum)maximum_sum=sum;
					}
		cout << maximum_sum << endl;
	}
}