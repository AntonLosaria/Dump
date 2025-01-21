#include<iostream>
using namespace std;

int output(int arr[], int size){
	int wid {5};
	for(int i = 0; i < size; i++){
		cout << i << "	" << arr[i] << "	" << string(arr[i],'*') << endl;
	}
}

int main(){
	int arr[] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Element" << "	" << "Value" << "	" << "Histogram" << endl;
	output(arr, size);
	
	return 0;
}
