#include <iostream>
#include <cstdlib>
#include <cstdio>

void max_of_four(){

	int num;
	int max = 0;

	for (int i = 0; i < 4; ++i)
	{
		
		scanf("%d",&num);

		if(num > max){

			max = num;

		}
	};


	std::cout << max << std::endl;

};

int main(){

	max_of_four();
	system("PAUSE");
	return 0;

}