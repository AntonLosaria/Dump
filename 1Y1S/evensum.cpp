#include<iostream>
using namespace std;

int main (){
	int i {1};
	int lim {100};
	int sum {0};
	int check,counter;
	for (i;i<=100;i++){
		
		check = i%2;
		if (check == 0){
			sum+=i;
		}
		
	}
	cout << "The sum of all even numbers between 2-100 is: " << sum << endl;
	return 0;
}
