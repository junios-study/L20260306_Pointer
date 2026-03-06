#include <iostream>

using namespace std;


void Swap(int A, int B)
{
	int Temp = 0;

	Temp = A;
	A = B;
	B = Temp;
}


int main()
{
	int A = 10;
	int B = 20;
	int Temp = 0;

	int* PA = nullptr;
	PA = &A;

	cout << *PA << endl;


	return 0;



	Swap(A, B);


	cout << A << endl;
	cout << B << endl;


	return 0;
}


