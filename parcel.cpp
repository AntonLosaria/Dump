#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int parcelrndup; 
	int base{300};
	float parcelg, total;
	float basecost{5.00};
	cout << "Enter the weight of your SMALL parcel: ";
	cin >> parcelg;
	parcelrndup = round(parcelg);
	
	if(parcelrndup<=base && parcelrndup > 0 ){
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << basecost << endl;
	} else if (parcelrndup <= base+100 && parcelrndup > base){
		total = basecost + 2.00;
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << total << endl;
	} else if (parcelrndup <= base+200 && parcelrndup > base+100){
		total = basecost + 4.00;
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << total << endl;
	}else if (parcelrndup <= base+300 && parcelrndup > base+200){
		total = basecost + 6.00;
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << total << endl;
	}else if (parcelrndup <= base+400 && parcelrndup > base+300){
		total = basecost + 8.00;
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << total << endl;
	}else if (parcelrndup <= base+500 && parcelrndup > base+400){
		total = basecost + 10.00;
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << total << endl;
	}else if (parcelrndup <= base+600 && parcelrndup > base+500){
		total = basecost + 12.00;
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << total << endl;
	}else if (parcelrndup <= base+700 && parcelrndup > base+600){
		total = basecost + 14.00;
		cout << "The cost of sending your " << parcelrndup << "g(" << parcelg << "g) will be P" << total << endl;
	} else {
		cout << "Weight exceeding the maximum weight. The maximum weight is 1000g" << endl;
	}
	return 0;
}
