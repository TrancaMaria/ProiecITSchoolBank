// ProiecITSchoolBank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ManagerConturi.h"

int main()
{
	ManagerConturi manager;
	int optiune;

	do
	{
		std::cout << "Alege una din urmatoarele optiuni:\n";
		std::cout << "1 -> Numar Conturi\n";
		std::cout << "2 -> Creare Cont\n";
		std::cout << "3 -> Modificare Cont\n";
		std::cout << "4 -> Stergere Cont\n";
		std::cout << "5 -> Eliberare/Depunere\n";
		std::cout << "6 -> Detalii Cont\n";
		std::cout << "0->EXIT \n";
		std::cout << "Introduceti operatia pe care o doriti\n";
		std::cin >> optiune;

		switch (optiune)
		{
		case 1:
			std::cout << "Ati ales optiunea 1\n";
			std::cout << "Numarul total de conturi este: "
				<< manager.GetNumarConturi() << std::endl;
			break;
		case 2:
			std::cout << "Ati ales optiunea 2\n";
			system("cls");
			manager.adaugareCont();
			break;
		case 3:
			std::cout << "Ati ales optiunea 3\n";
			break;
		case 4:
			std::cout << "Ati ales optiunea 4\n";
			manager.EraseAccount();
			break;
		case 5:
			std::cout << "Ati ales optiunea 5\n";
			manager.Eliberare_Depunere();
			break;
		case 6:
			std::cout << "Ati ales optiunea 6\n";
			system("cls");
			//Vreti sa cautati un anumit cont? -> apasati tasta 1
			// O metoda prin care cereti detalii despre contul pe care vrem sa il gasim si 
			// desigur sa il cautam iar dupa aceea sa il printam.
			//Vreti sa le accesati pe toate? -> apasati tasta 2
			manager.printAllCounturi();
			break;
		case 0:
				std::cout << "Multumim, la revedere\n";
				break;
		default:
			std::cout << "Optiune invalida\n";
			break;
		}
	} while (optiune != 0);
}
