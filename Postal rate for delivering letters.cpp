#include <iostream>
using namespace std;

int main() {

	double length, width, thickness;
	int Dimension = 0;


	cout << "enter your length" << endl;
	cin >> length;
	cout << "enter your width" << endl;
	cin >> width;
	cout << "enter your thickness" << endl;
	cin >> thickness;

	Dimension = length * width * thickness;

	if (Dimension <= 141000) {


		cout << "R2.50";
	}


	else if (Dimension > 141000 && Dimension <= 440000) {

		cout << "R5.00";

	}
	else if (Dimension > 440000 && Dimension <= 2647500) {

		cout << "R6.25";

	}
	else if (Dimension > 2647500) {
		cout << "This is a parcel";
	}




	return 0;




}
