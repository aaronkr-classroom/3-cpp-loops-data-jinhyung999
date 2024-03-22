// chp2ex5triangle.cpp
#include <iostream>
#include <string>

//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin;		using std::cout;
using std::endl;	using std::string;

int main() {

	int i, j;
	int size;
	cout << "사이즈를 입력하시오.\n";
	cin >> size;
	for (i = 0; i < size; i++) {

		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout<<"*";
		}
		cout << endl;
	}
}//main end 