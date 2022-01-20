// ProiecITSchoolBank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ContBancar.h"

int main()
{
	std::cout << "Alege una din urmatoarele optiuni:\n";
	std::cout << "1 -> Numar Conturi\n";
	std::cout << "2 -> Creare Cont\n";
	std::cout << "3 -> Modificare Cont\n";
	std::cout << "4 -> Stergere Cont\n";
	std::cout << "5 -> Eliberare/Depunere\n";
	std::cout << "6 -> Detalii Cont\n";
	int optiune;
	std::cout << "Introduceti operatia pe care o doriti\n";
	std::cin >> optiune;
	switch (optiune)
	{
	case 1:
		std::cout << "Ati ales optiunea 1\n";
		break;
	case 2:
		std::cout << "Ati ales optiunea 2\n";
		break;
	case 3:
		std::cout << "Ati ales optiunea 3\n";
		break;
	case 4:
		std::cout << "Ati ales optiunea 4\n";
		break;
	case 5:
		std::cout << "Ati ales optiunea 5\n";
		break;
	case 6:
		std::cout << "Ati ales optiunea 6\n";
		break;
	default:
		std::cout << "Optiune invalida\n";
		break;
	}
}
