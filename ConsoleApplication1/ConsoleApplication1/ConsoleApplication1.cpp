// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <list>     // ���������� ��������� ������
#include <iterator> // ��������� ����������
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	long val;
	list<long> myList; // ��������� ������ ������
	srand(time(NULL));

	for (int i = 0; i < 15; i++) {
		myList.push_back(rand() % 20); // ��������� � ������ ����� ��������
	}

	cout << "������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	
	cin >> val;
	myList.remove(val);
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	system("Pause");
}