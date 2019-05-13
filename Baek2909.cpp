#include <iostream>
#include <math.h>
using namespace std;

int main()
{

	int zero;
	int price;
	int roundPrice = 0;
	int scale;

	//cout << "Price : ";
	cin >> price;
	//cout << "Zero : ";
	cin >> zero;

	scale = (int)pow(10.0, (double)zero);

	if (price % scale > 4 * (scale / 10)) {
		roundPrice = (price / scale) * scale;
		roundPrice += scale;
		//	cout <<"올림";

	}
	else if ((price % scale) < 5 * (scale / 10)) {
		roundPrice = (price / scale) * scale;

		//	cout << "버림";
	}

	cout << roundPrice;


}