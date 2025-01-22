#include<iostream>
//#include<stdlib.h>
#include <cstdlib>
using namespace std;

int main(){
	
	char in[0], in2[0], in3[0], in4[0];
	
	cout << "(1)Enter a numbered string: ";
	cin >> in;
	cout << "(2)Enter a numbered string: ";
	cin >> in2;
	cout << "(3)Enter a numbered string: ";
	cin >> in3;
	cout << "(4)Enter a numbered string: ";
	cin >> in4;
	
	
	
	int result = atoi(in) + atoi(in2) + atoi(in3) + atoi(in4);
	
	cout << "The total of the strings converted into integers is: " << result << endl;
	
	return 0;
}
