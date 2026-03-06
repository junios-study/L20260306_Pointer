#include <iostream>

using namespace std;

//call by value이용한 포인터 참조 연산
void Swap(int* PA, int* PB)
{
	int Temp = *PA;
	*PA = *PB;
	*PB = Temp;
}

//C++ 참조자
//call by reference
//void Swap(int& PA, int& PB)
//{
//	int Temp = PA;
//	PA = PB;
//	PB = Temp;
//}

int main()
{
	int* PA = 0;
	int A = 10;
	int B = 20;

	cout << &A << endl;
	cout << &B << endl;


	Swap(&A, &B);

	cout << A << endl;
	cout << B << endl;


	return 0;
}


