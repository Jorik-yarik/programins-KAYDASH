#include "entity.h"

Bowed::Bowed()
{
	this->issug = true;
	this->firm = "воздух";
	this->massa = 1;
	this->bow = "стекловолокно)";

	this->size = "0";
}

Bowed::Bowed(bool _issug, string _firm, int _massa, string _bow, string _size)
{
	this->issug = _issug;
	this->firm = _firm;
	this->massa = _massa;
	this->bow = _bow;
	this->size = _size;
}

Bowed::Bowed(const Bowed &instrument)
{
	this->issug = instrument.issug;
	this->firm = instrument.firm;
	this->massa = instrument.massa;
	this->bow = instrument.bow;
	this->size = instrument.size;
}

void Bowed::show()
{
	printf("%s\n", firm.c_str());
	printf("Масса : %u\n", this->massa);
	issug ? printf("Глюкозосодержащие\n") : printf("Не глюкозосодержащие\n");
	printf("вкус: %s\n", this->bow.c_str());
	printf("Содержание сахаров: %s\n\n", this->size.c_str());
}

bool Bowed::getissug()
{
	return this->issug;
}

string Bowed::getFirm()
{
	return this->firm;
}

int Bowed::getmassa()
{
	return this->massa;
}

string Bowed::getBow()
{
	return this->bow;
}

string Bowed::getSize()
{
	return this->size;
}

void Bowed::setAcoustic(bool _issug)
{
	this->issug = _issug;
}

void Bowed::setFirm(string _firm)
{
	this->firm = _firm;
}

void Bowed::setmassa(int _massa)
{
	this->massa = _massa;
}

void Bowed::setBow(string _bow)
{
	this->bow = _bow;
}

void Bowed::setSize(string _size)
{
	this->size = _size;
}

Bowed::~Bowed()
{
}
