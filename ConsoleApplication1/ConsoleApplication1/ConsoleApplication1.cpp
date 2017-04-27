// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <list>     
#include <iterator> 
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	list<long> myList; // объявляем пустой список 1
	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		myList.push_back(rand() % 20); // добавляем в список новые элементы
	}
	cout << "List 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));//вывод списка 1
	cout << "\n";

	int val;
	cout << "\nВведите номер удаляемого элемента: ";
	cin >> val;
	std::list<long>::iterator range = myList.begin();
	std::advance(range, val - 1);
	myList.erase(range);

	cout << "\nList 1 с удаленным элементом: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));



	list<long> myList2; // объявляем пустой список 2
	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		myList2.push_back(rand() % 20); // добавляем в список 2 новые элементы
	}
	cout << "\nList 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	//////////////////////////////////////////////////////////////////////
	int n;
	cout << "\nВведите номер элемента с которого будем удалять из List 1: \n";
	cin >> n;
	cout << "\nВведите количество удаляемых элементов из List 1\n";
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		std::list<long>::iterator range = myList.begin();
		std::advance(range, n);
		myList.erase(range);
	}

	cout << "\nList 1 с удаленными элементами: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	//////////////////////////////////////////////////////////////////////

	myList.sort();
	myList2.sort();
	myList.merge(myList2);
	cout << "\nОбъединили List 2 в list 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\nЧто осталось в  list 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	system("pause");

}