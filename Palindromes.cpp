// 401 Palindromes

#include<iostream>
#include<string>

using namespace std;

int main(){
	string line;
	bool palindrome,mirrored;
	while(cin >> line){
		palindrome = true;
		mirrored = true;
		for(int i = 0, j = line.size() -1;i<=j;i++,j--){
			if(line[i]!=line[j]) palindrome = false;
			switch(line[i]){
				case 'A':
				case 'H':
				case 'I':
				case 'M':
				case 'O':
				case 'T':
				case 'U':
				case 'V':
				case 'W':
				case 'X':
				case 'Y':
				case '1':
				case '8':
					if(line[i]!=line[j]) mirrored = false;
					break;
				case 'E':
					if(line[j]!='3') mirrored = false;
					break;
				case 'J':
					if(line[j]!='L') mirrored = false;
					break;
				case 'L':
					if(line[j]!='J') mirrored = false;
					break;
				case 'S': 
					if(line[j]!='2') mirrored = false;
					break;
				case 'Z': 
					if(line[j]!='5') mirrored = false;
					break;
				case '2': 
					if(line[j]!='S') mirrored = false;
					break;
				case '3': 
					if(line[j]!='E') mirrored = false;
					break;
				case '5':
					if(line[j]!='Z') mirrored = false;
					break;
				case 'B':
				case 'C':
				case 'D':
				case 'F':
				case 'G':
				case 'K':
				case 'N':
				case 'P':
				case 'Q':
				case 'R':
				case '4':
				case '6':
				case '7':
				case '9':
				default:
					mirrored = false;
					break;
			}
		}
		cout << line;
		if(mirrored && palindrome){
			cout << " -- is a mirrored palindrome." << endl;
		}
		else if(mirrored){
			cout << " -- is a mirrored string." << endl;
		}
		else if(palindrome){
			cout << " -- is a regular palindrome." << endl;
		}
		else {
			cout << " -- is not a palindrome." << endl;
		}
		cout << endl;
	}
	return 0;
}

/*
Character	Reverse	Character	Reverse	Character	Reverse
A			A		M			M		Y			Y
B					N					Z			5
C					O			O		1			1
D					P					2			S
E			3		Q					3			E
F					R					4			
G					S			2		5			Z
H			H		T			T		6			
I			I		U			U		7			
J			L		V			V		8			8
K					W			W		9			
L			J		X			X			

*/