
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	string line;
	int Hour,Minute,i;
	double angle;
	cout << setprecision(3) << fixed;
	while(getline(cin,line)){
		if(line[0]=='0') return 0;
		Hour = line[0]-48;
		i=1;
		if(line[1]!=':'){
			i++;
			Hour=10*Hour+line[1]-48;
		}
		Minute=(line[++i]-48)*10+line[++i]-48;
		angle = (30.0*(Hour%12) > 5.5*Minute ? 30.0*(Hour%12) - 5.5*Minute : 5.5*Minute - 30.0*(Hour%12));
		cout << (angle > 180 ? 360.0 - angle : angle) << endl;
	}
}