// chp2ex9.cpp
#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

int main() {
	int i, j;
	cout << "�μ��� �Է��Ͻÿ�.\n";
	cin >> i >> j;
	if (i > j)
		cout << i;
	else if (i < j)
		cout << j;

	return 0;
}//main end 