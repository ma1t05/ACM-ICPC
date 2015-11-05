
#include <iostream>

using namespace std;

int main(){
	long long brown[3], green[3], clear[3];
	string bin = "BCG";
	long long movements, total;
	int i;
	while (1){
		for(i = 0; i < 3; i++)
			cin >> brown[i] >> green[i] >> clear[i];		
		if (cin.eof()) return 0;
		movements = brown[0] + clear[1] + green[2];
		bin = "BCG";
		if(movements < brown[0] + green[1] + clear[2]) {
			movements = brown[0] + green[1] + clear[2];
			bin = "BGC";
		}
		if(movements < clear[0] + brown[1] + green[2]) {
			movements = clear[0] + brown[1] + green[2];
			bin = "CBG";
		}
		if(movements < clear[0] + green[1] + brown[2]) {
			movements = clear[0] + green[1] + brown[2];
			bin = "CGB";
		}
		if(movements < green[0] + brown[1] + clear[2]) {
			movements = green[0] + brown[1] + clear[2];
			bin = "GBC";
		}
		if(movements < green[0] + clear[1] + brown[2]) {
			movements = green[0] + clear[1] + brown[2];
			bin = "GCB";
		}
		total = -movements;
		for(i = 0; i < 3; i ++){
			cout << bin[i];
			total += brown[i] + green[i] + clear[i];
		};
		cout << " " << total << endl;
	};	
};
