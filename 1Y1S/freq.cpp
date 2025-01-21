#include<iostream>
using namespace std;

int freq(int responses[], int size, int target){
	int tot;
	for(int i = 0; i < size; i++){
		if(target == responses[i]){
			tot++;
		}
	}
	return tot;
}


int main(){
	int responses[] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 
		10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 
		6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
		
	int size = sizeof(responses)/sizeof(responses[0]);
	int target;
	
	cout << "Frequency counter from this table" << endl << endl;
	cout << "1, 2, 6, 4, 8, 5, 9, 7, 8, 10" << endl; 
	cout << "1, 6, 3, 8, 6, 10, 3, 8, 2, 7" << endl;
	cout << "6, 5, 7, 6, 8, 6, 7, 5, 6, 6" << endl;
	cout << "5, 6, 7, 5, 6, 4, 8, 6, 8, 10" << endl << endl;
	

	
	for(int i = 1; i <= 10; i++){
		cout << "The frequency of " << i << " is: " << freq(responses, size, i) << endl;
	}
	return 0;
}
