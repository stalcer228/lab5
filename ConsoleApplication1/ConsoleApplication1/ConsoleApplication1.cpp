// ConsoleApplication1.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <list>     // подключаем заголовок списка
#include <iterator> // заголовок итераторов
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	long val;
	list<long> myList; // объ€вл€ем пустой список
	srand(time(NULL));

	for (int i = 0; i < 15; i++) {
		myList.push_back(rand() % 20); // добавл€ем в список новые элементы
	}

	cout << "—писок: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	
	cin >> val;
	myList.remove(val);
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	system("Pause");
}