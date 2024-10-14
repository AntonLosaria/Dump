#include <iostream>
using namespace std;

int main (){
	float gallon, mile, milforgal, average, total;
	int counter=0;
	
	while (gallon!=-1){
		
		cout << "Enter the gallons used (-1 to end): ";
		cin >> gallon;
		
		if(gallon==-1){
			cout << "See you next time!" << endl;
			break;
		} else {
			cout << "Enter the miles driven: ";
			cin >> mile;
			milforgal = mile/gallon;
			cout << "The miles / gallon for this tank was " << milforgal << endl;
			cout << endl;
			cout << endl;
			total += gallon;
			counter++;
		}
	
	}
	if (counter > 0){
	average = total/counter;
	cout << "The overall average miles/gallon was " << average << endl;
	}
	return 0;
}
