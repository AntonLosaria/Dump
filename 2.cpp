#include<iostream>
using namespace std;

int main (){
	char in, tolow, toup;
	cout << "Enter a character: ";
	cin >> in;
	
	cout << in << (islower(in) != 0 ? " is a " : " is not a ") << "lowercase character." << endl;
	cout << in << (isupper(in) != 0 ? " is a " : " is not a ") << "uppercase character." << endl;
	
	tolow = tolower(in);
	toup = toupper(in);
	
	cout << in << " converted into lowercase is " << tolow << endl;
	cout << in << " converted into uppercase is " << toup << endl;
	cout << in << (isblank(in) != 0 ? " is a " : " is not a ") << "blank character." << endl;
	cout << in << (isdigit(in) != 0 ? " is a " : " is not a ") << "digit character." << endl;
	cout << in << (isalpha(in) != 0 ? " is a " : " is not a ") << "alpha character." << endl;
	cout << in << (isalnum(in) != 0 ? " is a " : " is not a ") << "digit or letter character." << endl;
	cout << in << (isxdigit(in) != 0 ? " is a " : " is not a ") << "hexadecimaldigit character." << endl;
	cout << in << (isspace(in) != 0 ? " is a " : " is not a ") << "whitespace character." << endl;
	cout << in << (isgraph(in) != 0 ? " is a " : " is not a ") << "printing character other than a space." << endl;
	cout << in << (iscntrl(in) != 0 ? " is a " : " is not a ") << "control character." << endl;
	cout << in << (isprint(in) != 0 ? " is a " : " is not a ") << "printing character including a space." << endl;
	cout << in << (ispunct(in) != 0 ? " is a " : " is not a ") << "printing character other than a digit, a space, a letter." << endl;

	return 0;
}
