// Baek5000.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void flip(int* arr, int index);
void rflip(int* targetarr, int arrsize, int* breadarr);
int searchIndex(int target, int* arr,int arrsize);
int trial(int* targetarr, int* breadarr, int arrsize);

int main()
{
	//std::cout << " 백준 5000번 문제" << std::endl;;
    int breadnum;
	std::cin >> breadnum;
	int* breadarr = new int[breadnum];
	int* targetarr = new int[breadnum];

	for (int i = 0; i < breadnum; i++) {
		std::cin >> breadarr[i];
	}

	for (int i = 0; i < breadnum; i++) {
		std::cin >> targetarr[i];
	}

	if (trial(targetarr, breadarr, breadnum) == -1)
		std::cout << "Impossible";
	else
		std::cout << "Possible";


}
int trial(int *targetarr, int* breadarr, int arrsize) {
	
	
	rflip(targetarr, arrsize, breadarr);



	if ( arrsize == 3) {
		if (targetarr[0] == breadarr[0] && targetarr[1] == breadarr[1] && targetarr[2] == breadarr[2]) {
			return 1;
		}
		else if (targetarr[0] == breadarr[2] && targetarr[1] == breadarr[0] && targetarr[2] == breadarr[1]) {
			return 1;
		}
		else if (targetarr[0] == breadarr[1] && targetarr[1] == breadarr[2] && targetarr[2] == breadarr[0]) {
			return 1;
		}
		else
			return -1;


	}
	else if(arrsize>3)
	{
		return trial(targetarr, breadarr, arrsize - 1);

	}

	

}
int searchIndex(int target, int* arr,int arrsize) {
	
	for (int i = 0; i < arrsize; i++) {
		
		if (arr[i] == target) {
			return i;
		}

	}
	return -1;
}


void rflip(int* targetarr, int arrsize, int* breadarr) {

	int index = searchIndex(breadarr[arrsize - 1], targetarr,arrsize);

	if (arrsize - 1 == index) {
	//	std::cout << "일치" << std::endl;
		return;
	}
	else if (arrsize - 1 - index > 2) {

		//std::cout << "멀리 잇음" << std::endl;
		flip(targetarr, index);
		return rflip(targetarr, arrsize, breadarr );

	}
	else if (arrsize - 1 - index < 3) {

		//std::cout << "0,1,2 중 하나" << std::endl;

		flip(targetarr, arrsize-3);
		return rflip(targetarr, arrsize, breadarr );

	}


	
}
void flip(int* arr,int index) {
	
	//std::cout << arr[index ] << arr[index + 1] << arr[index + 2] << std::endl;

	int tmp = arr[index+2];
	arr[index + 2] = arr[index + 1];
	arr[index + 1] = arr[index];
	arr[index] = tmp;


	//std::cout << arr[index] << arr[index + 1] << arr[index + 2] << std::endl;

}

