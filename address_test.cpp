#include <iostream>
using namespace std;

int main(){
	int arrary[3] ={1,2,3};

	int arrary1[2] ={4,5};

	int number=6;

	////////////////////////////////////

	int *arrary_pointer1, *arrary_pointer2, *arrary_pointer3;

	int *arrary_pointer4, *arrary_pointer5;

	int *number_pointer;

	/////////////////////////

	cout << "check check \n";

	arrary_pointer1 = &arrary[0];
	arrary_pointer2 = &arrary[1];
	arrary_pointer3 = &arrary[2];

	cout << "check check \n";

	arrary_pointer4 = &arrary1[0];
	arrary_pointer5 = &arrary1[0];

	cout << "check check \n";

	*number_pointer = number;

	cout << arrary[0] << "\n";
	cout << arrary[1] << "\n";
	cout << arrary[2] << "\n";
	cout << arrary_pointer1 << "\n";
	cout << arrary_pointer2 << "\n";
	cout << arrary_pointer3 << "\n";

	cout << arrary_pointer4 << "\n";
	cout << arrary_pointer5 << "\n";

	cout << number_pointer << "\n";


	return 0;
}