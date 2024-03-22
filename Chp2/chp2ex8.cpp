// chp2ex8.cpp
#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

int main() {
	int i,sum;
	sum = 1;
	for (i = 1; i < 10; i++)
	{
		sum *= i;
	}
	cout << sum;
	return 0;
}//main end 