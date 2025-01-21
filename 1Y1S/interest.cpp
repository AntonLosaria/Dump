#include<iostream>
#include<cmath>
using namespace std;

int main (){
	
	double inv{1000.00};
	double intrate {1.05};
	double deposit, sub;
	int n {1};
	int lim {10};
	
	for (n; n<=lim ;n++){
		
		deposit = inv*pow(intrate,n);
		
		cout << "The amount on deposit at the end of year " << n << ": " << deposit << endl;
		 
	}
	return 0;
}
