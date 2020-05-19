
#include <iostream>
#include "PBalance.h"


int main()
{
	PBalance balance;


	std::cout << "|KEY| " << std::endl;
	std::cout << "[+] True: " << true << std::endl;
	std::cout << "[+] False: " << false << std::endl << std::endl;

	std::cout << balance.check("Test") << std::endl;

	std::cout << balance.check("{}") << std::endl;

	std::cout << balance.check("{()(}") << std::endl;

	std::cout << balance.check("}") << std::endl;

	std::cout << balance.check("[()]{()  ()[]}") << std::endl;

	std::cout << balance.check("(x + 5) =  [25/2]") << std::endl;

	std::cout << balance.check("[(x + 5)/2] =  {([25/2] * 25)}/[23-{2/3}]") << std::endl;
};