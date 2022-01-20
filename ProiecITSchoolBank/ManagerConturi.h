#pragma once
#include"ContBancar.h"
#include<vector>
#include <iostream>
class ManagerConturi
{
private:
	std::vector<ContBancar*>m_listaConturi;
	//todo: metoda create IBAN trebuie sa generezze un iban unic care sa fie folosit pentru a crea conturi
	std::string CreateIBAN();

public:
	void adaugareCont();
};

