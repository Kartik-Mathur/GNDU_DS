#include <iostream>
using namespace std;

int fact(int n){
	// Base case
	if(n == 0){
		return 1;
	}

	// Recursive case
	int ChotiProblem = fact(n-1); // Pure Assumption

	// Find the solution
	int BadiProblem = n*ChotiProblem;
	return BadiProblem;	
}

int fibo(int n){
	// Base case
	if(n==0 || n==1){
		return n;
	}
	// Recursive case
	int ChotiProblem1 = fibo(n-1); // Assumptions
	int ChotiProblem2 = fibo(n-2); // Assumptions

	// Find the solution
	int BadiProblem = ChotiProblem1 + ChotiProblem2;
	return BadiProblem;
}



bool isSorted(int a[],int n){
	// Base case
	if(n==0||n==1){
		return true;
	}
	// Recursive case
	bool KyaChotaSortedHai = isSorted(a+1,n-1);
	// Find Solution
	bool KyaBadaSortedHai;
	if(a[0]<a[1] && KyaChotaSortedHai==true){
		KyaBadaSortedHai = true;
	}
	else{
		KyaBadaSortedHai = false;
	}
	return KyaBadaSortedHai;
}







int main(){
	int a[]={1,3,4,5,6,7,8,0};
	int n=8;

	if(isSorted(a,n) == true){
		cout<<"Sorted Array Hai!"<<endl;
	}
	else{
		cout<<"Sorted Array Nahi Hai!"<<endl;

	}










	return 0;
}