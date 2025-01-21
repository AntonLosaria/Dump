#include<iostream>
using namespace std;

int main (){
	
	float phy, chem, bio, math, comp;
	int ave;
	int count{5};
	cout << "Enter grade for the following subjects:" << endl;
	cout << "Physics      :";
	cin >> phy;
	cout << "Biology      :";
	cin >> bio;
	cout << "Mathematics  :";
	cin >> math;
	cout << "Computer     :";
	cin >> comp;
	cout << "Chemistry    :";
	cin >> chem;
	
	cout << "----------------------" << endl;
	
	ave = (phy+chem+bio+math+comp)/count;
	
	cout << "Average is: " << ave << endl;
	
	switch(ave){
		case 90 ... 100:
			cout << "Grade Level: A";
			break;
		case 80 ... 89:
			cout << "Grade Level: B";
			break;
		case 70 ... 79:
			cout << "Grade Level: C";		
			break;
		case 60 ... 69:
			cout << "Grade Level: D";		
			break;
		case 40 ... 59:
			cout << "Grade Level: E";		
			break;
		case 1 ... 39:
			cout << "Grade Level: F";		
			break;
		default:
			cout << "Average is not within 1-100";
			break;
	}
	return 0;
}
