// Baek1924.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//using namespace std;
int main()
{
	//std::cout << " 백준 1924번 문제" << std::endl;
	//	1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28
	int days[12 + 1] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };		// 배열에 날짜를 입력해둔다.
	unsigned int month, day;
	int totalday = 0;
	std::cin >> month >> day;
	
	for (int i = 1; i < month; i++) {
		totalday += days[i];
	}
	totalday += day;


	if (totalday % 7 == 0) {
		std::cout << "SUN";
	}
	else if (totalday % 7 == 1) {
		std::cout << "MON";
	}
	else if (totalday % 7 == 2) {
		std::cout << "TUE";
	}
	else if (totalday % 7 == 3) {
		std::cout << "WED";
	}
	else if (totalday % 7 == 4) {
		std::cout << "THU";
	}
	else if (totalday % 7 == 5) {
		std::cout << "FRI";
	}
	else if (totalday % 7 == 6) {
		std::cout << "SAT";
	}
	
	


	
}
