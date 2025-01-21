#include <iostream>
using namespace std;

int main (){
	double startbalance, balance, credlim, totcred, totchar;
	int accno=0;
	
	while (accno!=-1){
		cout << "Enter accounter number (-1 to end): ";
		cin >> accno;
		if (accno==-1){
			cout << "Thank you for using our services!" << endl;
			return 0;
		} else {
			cout << "Enter beginning balance: ";
			cin >> startbalance;
			cout << "Enter total charges: ";
			cin >> totchar;
			cout << "Enter total credits: ";
			cin >> totcred;
			cout << "Enter credit limit: ";
			cin >> credlim;
			cout << endl;
		
			balance = startbalance + totchar - totcred;
			
			if (balance > credlim){
				cout << "Account: " << accno << endl;
				cout << "Credit Limit: " << credlim << endl;
				cout << "Balance: " << balance << endl;
				cout << "Credit Limit Exceeded." << endl;
				cout << endl;
				cout << endl;
			}	
		}
	}
	return 0;
}
