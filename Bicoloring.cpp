
#include <iostream>

#define LENGTH 200
#define UNASSIGNED 0
#define BLACK -1
#define RED 1

using namespace std;

bool graph[LENGTH][LENGTH];
int node[LENGTH];
bool print_red(int a,int n);
bool print_black(int a,int n);


int main(){
	int n,l,i,j;
	int a,b;
	bool BICOLORABLE;
	while(cin >> n){
		if (n==0) return 0;
		for(i=0;i<n;i++)for(j=0;j<n;j++)graph[i][j]=false;
		for(i=0;i<n;i++)node[i]=UNASSIGNED;
		cin >> l;
		for(i=0;i<l;i++){
			cin >> a >> b;
			graph[a][b]=true;
			graph[b][a]=true;
		}
		BICOLORABLE = print_black(0,n);
		cout << (BICOLORABLE ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
	}
	return 0;
}

bool print_red(int a,int n){
	if(node[a]==BLACK){
		//cout << "node " << a << " already is Black" << endl;
		return false;
	}
	if(node[a]==UNASSIGNED) node[a]=RED;
	//cout << "node " << a << " is Red " << endl;
	//cout << "node: " << a << endl;
	for(int i=a+1;i<n;i++){
		if(graph[a][i]){
			if(!print_black(i,n))return false;
		}
	}
	//cout << "node end: " << a << endl;
	return true;
}

bool print_black(int a,int n){
	if(node[a]==RED){
		//cout << "node " << a << " already is Red" << endl;
		return false;
	}
	if(node[a]==UNASSIGNED) node[a]=BLACK;
	//cout << "node " << a << " of " << n << " nodes is Black" << endl;
	//cout << "node: " << a << endl;
	for(int i=a+1;i<n;i++){
		if(graph[a][i]){
			if(!print_red(i,n))return false;
		}
	}
	//cout << "node end: " << a << endl;
	return true;
}