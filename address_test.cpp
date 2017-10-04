#include <iostream>
using namespace std;

int main(){
	int arrary[3] ={1,2,3};

	int arrary1[2] ={4,5};

	int* arrary_pointer1, *arrary_pointer2, *arrary_pointer3;

	int *arrary_pointer4, *arrary_pointer5;

	cout << "check check \n";

	arrary_pointer1 = &arrary[0];
	arrary_pointer2 = &arrary[1];
	arrary_pointer3 = &arrary[2];

	arrary_pointer4 = &arrary1[0];
	arrary_pointer5 = &arrary1[1];

	cout << arrary[0] << "\n";
	cout << arrary[1] << "\n";
	cout << arrary[2] << "\n";
	cout << arrary_pointer1 << "\n";
	cout << arrary_pointer2 << "\n";
	cout << arrary_pointer3 << "\n";

	cout << arrary_pointer4 << "\n";
	cout << arrary_pointer5 << "\n";

	return 0;
}