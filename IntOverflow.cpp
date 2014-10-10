#include <iostream>

int main()
{
	for(short int a=0 ; a != -1; a ++)
		{
			if(a % (1 << 12) == 0)
				std::cout << ".";
		}
	std::cout << std :: endl;

	return 0;

}
