#include <iostream>
using namespace std;

void GenerateParentheses(char a[],int o,int c,int n,int i){
	// Base case
	if(i ==2*n){
		a[i] = '\0';
		cout<<a<<endl;
		return;
	}
	// Recursive case
	if(o<n){
		// I can add an opening bracket
		a[i]='(';
		GenerateParentheses(a,o+1,c,n,i+1);
	}
	if(c<o){
		// I can add a closing bracket
		a[i]=')';
		GenerateParentheses(a,o,c+1,n,i+1);
	}

}

int main(){
	char a[100];
	int n;

	cin>>n;
	GenerateParentheses(a,0,0,n,0);


	return 0;
}