#include <iostream>
using namespace std;

int main(){
	int arrary[3] ={1,2,3};

	int arrary1[2] ={4,5};

	int number=6;

	int arrary2[1] = {7};

	////////////////////////////////////

	int *arrary_pointer1, *arrary_pointer2, *arrary_pointer3;

	int *arrary_pointer4, *arrary_pointer5;

	int *number_pointer;

	int *arrary_pointer6[1];

	/////////////////////////

	cout << "check check \n";

	arrary_pointer1 = &arrary[0];
	arrary_pointer2 = &arrary[1];
	arrary_pointer3 = &arrary[2];

	cout << arrary[0] << "\n";
	cout << arrary[1] << "\n";
	cout << arrary[2] << "\n";
	cout << arrary_pointer1 << "\n";
	cout << arrary_pointer2 << "\n";
	cout << arrary_pointer3 << "\n";

	cout << "check check \n";

	arrary_pointer4 = &arrary1[0];
	arrary_pointer5 = &arrary1[0];

	cout << arrary_pointer4 << "\n";
	cout << arrary_pointer5 << "\n";

	cout << "check check \n";

	*number_pointer = number;

	cout << number_pointer << "\n";

	cout << "check check \n";

	*arrary_pointer6 = arrary2;

	cout << arrary_pointer6 << "\n";

	////////////////
	int array3[2] = {8,9};
	int *tester1[1];//, *tester2[1];
	int *tester2[1];

	cout << "check check 3\n";

	*tester1[0] = array3[1];
	//*tester1[1] = array3[0];
	*tester2[0] = *tester1[0];

	cout << "check check \n";

	cout << tester1[0] << "\n";
	cout << tester2[0] << "\n";
	

	return 0;
}