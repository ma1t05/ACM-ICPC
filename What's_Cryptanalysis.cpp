
#include <iostream>
#include <cstdlib>

using namespace std;

struct letter{
	char a;
	int frequency;
};

int compare(const void * a,const void * b){
	const letter *letter_a = static_cast<const letter*>(a);
	const letter *letter_b = static_cast<const letter*>(b);
	if (letter_a->frequency == letter_b->frequency) return letter_a->a - letter_b->a;
	return letter_b->frequency - letter_a->frequency;
}

int main(){
	long long N;
	int i,j;
	letter letters[25];
	string line;
	for(i=0;i<25;i++){
		letters[i].a=i+65;
		letters[i].frequency=0;
	}
	cin >> N;
	for(i=0;i<=N;i++){
		getline(cin,line);
		for(j=0;line[j]!='\0';j++){
			if(line[j]>='A'&&line[j]<='Z') letters[line[j]-65].frequency++;
			else if(line[j]>='a'&&line[j]<='z') letters[line[j]-97].frequency++;
		}
	}
	qsort(letters,25,sizeof(letter),compare);
	for(j=0;j<25;j++) if(letters[j].frequency) cout << letters[j].a << " " << letters[j].frequency << endl;
	return 0;
}