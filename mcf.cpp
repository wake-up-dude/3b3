#include <iostream>
using namespace std;
void p_matrix(int* a);

int main(){
	int number=1;
	int* pointer;
	*pointer = number;
	p_matrix(pointer);
	return 0;
}

void p_matrix(int* a){
	cout << *a << "\n";
	return;
}