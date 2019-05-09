// Baek2909.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

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

	if (price % scale > 4){ 
		roundPrice = (price / scale)*scale;
		roundPrice += scale;
	//	cout <<"올림";

	}
	else if ((price % scale) < 5) {
		roundPrice = (price / scale)*scale;
		
	//	cout << "버림";
	}

	cout << roundPrice;


}

