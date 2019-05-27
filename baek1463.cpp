// dynamic.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
void dynamic(int* arr, int size);
int minium(int x, int y);
int minium(int x, int y, int z);
int main()
{
	int size = 0;
	cin >> size;

	int* arr = new int[size+2];
	
	arr[1] = 0;



	dynamic(arr, size);

	cout << arr[size] << endl;









}
void dynamic(int *arr,int size) {

	for (int i = 2; i <= size; i++) {
		int tmp;
		if (i % 2 == 0 && i % 3 == 0) {
			tmp = minium(arr[i / 2], arr[i / 3], arr[i - 1]);

		}
		else if (i % 3 == 0) {
			tmp = minium(arr[i / 3],arr[i-1]);
		}
		else if (i % 2 == 0) {
			tmp = minium(arr[i / 2], arr[i - 1]);
		}
		else {
			tmp = arr[i - 1];
		}
		tmp++;
		arr[i] = tmp;
	
	}



}

int minium(int x, int y, int z) {

	int tmp = x;

	if (tmp > y) {
		tmp = y;
	}
	if (tmp > z) {
		tmp = z;
	}

	return tmp;
}
int minium(int x, int y) {

		int tmp = x;

		if (tmp > y) {
			tmp = y;
		}
		

		return tmp;
	}