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
	if(ave >= 90 && ave <=100){
		cout << "Grade Level: A";
	}else if (ave >= 80 && ave <80){
		cout << "Grade Level: B";
	}else if (ave >= 70 && ave <80){
		cout << "Grade Level: C";
	}else if (ave >= 60 && ave <70){
		cout << "Grade Level: D";
	}else if (ave >= 40 && ave <60){
		cout << "Grade Level: E";
	}else if (ave >= 0 && ave <40){
		cout << "Grade Level: F";
	}else{
		cout << "Average is not within 1-100";
	}
	return 0;
}
