// chp2ex5triangle.cpp
#include <iostream>
#include <string>

//ǥ�� ���̺귯������ �����ͼ� ����� �̸��� ���
using std::cin;		using std::cout;
using std::endl;	using std::string;

int main() {

	int i, j;
	int size;
	cout << "����� �Է��Ͻÿ�.\n";
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