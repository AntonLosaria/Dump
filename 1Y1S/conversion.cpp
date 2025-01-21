#include <iostream>
using namespace std;
int main (){
	float conv, final;
	int choice, cont;
	cout << "(1) cm - inches" << endl;
	cout << "(2) inches - cm" << endl;
	cout << "(3) feet - meter" << endl;
	cout << "(4) meter - feet" << endl;
	cout << "Would you like to convert? (-1 to end, any number to continue): ";
	cin >> cont;
	while (cont!=-1){
		cout << "Enter your desired conversion: ";
		cin >> choice;
		cout << endl;
		switch (choice){
			case 1:
				cout << "cm - inches" << endl;
				cout << "Enter what you want to convert: ";
				cin >> conv;
				final = conv * 0.393701;
	 			break;
			case 2:
				cout << "inches - cm" << endl;
				cout << "Enter what you want to convert: ";
				cin >> conv;
				final = conv * 2.54;
				break;
			case 3:
				cout << "feet - meter" << endl;
				cout << "Enter what you want to convert: ";
				cin >> conv;
				final = conv * 0.3048;
				break;
			case 4:
				cout << "meter - feet" << endl;
				cout << "Enter what you want to convert: ";
				cin >> conv;
				final = conv * 3.28084;
				break;
			default:
				cout << "You didn't select one of the four conversions.";
				break;
		}
		cout << "Final answer is: " << final << endl << endl;
		cout << "Would you like to convert again? (-1 to end): ";
		cin >> cont;
	}
	return 0;
}
