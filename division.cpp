#include <iostream>
#include <stdio.h>

int main()
{
	int a,b;
	std::cout << -5/-2 << std::endl;

	std::cout << "Give me 2 numbers I dare you: " << std::endl;

	scanf("%d %d", &a, &b);

	std::cout << ((a/b)*b + (a%b)) << " should be equal to " <<  a <<std::endl;
	return 0;
}
