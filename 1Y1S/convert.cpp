#include<iostream>
using namespace std;

int main(){
	char low[]{'p', 'P', '5','!'};
	char up[]{'D', 'd', '8', '&'};
	char con[]{'u', '7', '$', 'L'};
	int sizelow = sizeof(low)/sizeof(low[0]);
	int sizeup= sizeof(up)/sizeof(up[0]);
	int sizecon= sizeof(con)/sizeof(con[0]);
	char result, convert;
	
	cout << "According to islower:" << endl;
	for(int i=0; i<sizelow; i++){
		if(islower(low[i])){
			cout << low[i] << " is a lowercase letter" << endl;
		}else{
			cout << low[i] << " is not a lowercase letter" << endl;
		}	
	}
	cout << endl;
	cout << "According to isupper:" << endl;
	for(int i=0; i<sizeup; i++){
		if(isupper(up[i])){
			cout << up[i] << " is an uppercase letter" << endl;
		}else{
			cout << up[i] << " is not an uppercase letter" << endl;
		}
	}
	cout << endl;
	for(int i=0; i<sizecon; i++){
		if(isupper(con[i])){
			convert = tolower(con[i]);
			cout << con[i] << " converted to lowercase is " << convert << endl;
		}else{
			convert = toupper(con[i]);
			cout << con[i] << " converted to uppercase is " << convert << endl;
		}
	}
	return 0;
}
