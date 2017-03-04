#include <iostream>
#include <cstdlib>
#include <cstdio>


//get 2 values in seperated lines a and b

/*
	1.get the vale a and b
	1.1 create pointers that have these values 
	1.2 use tat pointers to do the next tasks
	2. a² = a+b \n
	3. b² = a-b
*/

/*
	sample input 
	4
	5

	output
	9
	1
*/


void update(){

	//get values from the user
	int a = 0;
	int b = 0;

	scanf("%d\n", &a);
	scanf("%d",&b);

	int *APointer = &a;
	int *BPointer = &b;

	int Ados = *APointer + *BPointer;
	int Bdos;

	if(*APointer > *BPointer)
		Bdos = *APointer - *BPointer;
	else
		Bdos = *BPointer - *APointer;
	

	std::cout << Ados << std::endl;
	std::cout << Bdos << std::endl;
}

int main(){

	update();
	system("PAUSE");
	return 0;
}