#include "ManagerConturi.h"
//Adaptati metoda createIban pentru a genera Ibanuri unice
std::string ManagerConturi::CreateIBAN()
{
	return std::string();
}
	void ManagerConturi::adaugareCont()
	{
		std::string nume, prenume, iban;
		std::cout << "Introduceti numele persoanei: \n";
		std::cin >> nume;
		std::cout << "Introduceti prenumele persoanei: \n";
		std::cin >> prenume;
		//TODO: replace with createIban()
		iban = "TestIban";
		//iban=CreateIban();

		ContBancar* cont = new ContBancar(nume, prenume, iban);
		m_listaConturi.push_back(cont);

		system("cls");

	}
