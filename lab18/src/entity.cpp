#include "entity.h"

Bowed::Bowed()
{
	this->issug = false;
	this->firm = "д/печенье";
	this->year = 150;
	this->bow = "сладкий";
	this->size = "17";
}

Bowed::Bowed(bool _issug, string _firm, int _year, string _bow, string _size)
{
	this->issug = _issug;
	this->firm = _firm;
	this->year = _year;
	this->bow = _bow;
	this->size = _size;
}

Bowed::Bowed(const Bowed &instrument)
{
	this->issug = instrument.issug;
	this->firm = instrument.firm;
	this->year = instrument.year;
	this->bow = instrument.bow;
	this->size = instrument.size;
}

Bowed::Bowed(string str)
{
	string parsed[5];
	size_t j = 0;
	size_t a = 0;
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			parsed[j] = str.substr(a, i - a);
			a = i + 1;
			j++;
		}
	}
	this->firm = parsed[0];
	this->year = atoi(parsed[1].c_str());
	this->issug = atoi(parsed[2].c_str());
	this->bow = parsed[3];
	this->size = parsed[4];
}

string Bowed::toString()
{
	stringstream ss;
	ss << this->firm << " " << this->year << " " << this->issug << " " << this->bow << " " << this->size << " end\n";
	string str = ss.str();
	return str;
}

bool Bowed::getissug()
{
	return this->issug;
}

string Bowed::getFirm()
{
	return this->firm;
}

int Bowed::getYear()
{
	return this->year;
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

void Bowed::setYear(int _year)
{
	this->year = _year;
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
