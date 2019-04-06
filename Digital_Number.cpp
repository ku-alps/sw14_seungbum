#include <iostream>
using namespace std;

int main()
{
	int inputNum ;

	cin >> inputNum;



	while(inputNum/10){
		int sum = 0;

		while(inputNum%10){
		sum += inputNum % 10;
		inputNum /= 10;
		}

	inputNum = sum;
	
	}
	
	
	cout << inputNum << endl;

	return 0;
}