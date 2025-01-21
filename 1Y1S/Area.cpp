#include <iostream>
using namespace std;
#define pi 3.14159265358979323846
int main (){
	float rad, length, wid, base, height, side, final;
	int choice, cont;
	
	cout << "(1) Area of circle" << endl;
	cout << "(2) Area of rectangle" << endl;
	cout << "(3) Area of triangle" << endl;
	cout << "(4) Area of square - feet" << endl;
	cout << "Would you like to compute? (-1 to end, any number to continue): ";
	cin >> cont;
	
	while (cont!=-1){
		cout << "What would you like to compute: ";
		cin >> choice;
		cout << endl;
		switch (choice){
			case 1:
				cout << "Area of circle" << endl;
				cout << "Enter the radius: ";
				cin >> rad;
				final = pi*(rad*rad);
	 			break;
			case 2:
				cout << "Area of rectangle" << endl;
				cout << "Enter the length: ";
				cin >> length;
				cout << "Enter the width: ";
				cin >> wid;
				final = length*wid;
				break;
			case 3:
				cout << "Area of triangle" << endl;
				cout << "Enter the base: ";
				cin >> base;
				cout << "Enter the height: ";
				cin >> height;
				final = (0.5)*base*height;
				break;
			case 4:
				cout << "Area of square - feet" << endl;
				cout << "Enter the side: ";
				cin >> side;
				final = side*side;
				break;
			default:
				cout << "You didn't select one of the four conversions.";
				break;
		}
		cout << "Final answer is: " << final << endl << endl;
		cout << "Would you like to compute again? (-1 to end): ";
		cin >> cont;
	}
	return 0;
}
