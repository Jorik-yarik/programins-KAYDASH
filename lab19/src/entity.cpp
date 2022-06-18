#include "entity.h"

Bowed::Bowed() {
  this->issugar = true;
  this->firm = "желе";
  this->year = 100;
  this->bow = "кофейный";
  this->size = "25";
}

Bowed::Bowed(bool _issugar, string _firm, int _year,
                                 string _bow, string _size) {
  this->issugar = _issugar;
  this->firm = _firm;
  this->year = _year;
  this->bow = _bow;
  this->size = _size;
}

Bowed::Bowed(const Bowed &instrument) {
  this->issugar = instrument.issugar;
  this->firm = instrument.firm;
  this->year = instrument.year;
  this->bow = instrument.bow;
  this->size = instrument.size;
}

Bowed::Bowed(string str) {
  string parsed[5];
  size_t j = 0;
  size_t a = 0;
  for (size_t i = 0; i < str.size(); i++) {
    if (str[i] != ' ' && (str[i + 1] == ' ' || !str[i + 1])) {
      parsed[j] = str.substr(a, i + 1 - a);
      a = i + 2;
      j++;
    }
  }
  this->firm = parsed[0];
  this->year = atoi(parsed[1].c_str());
  this->issugar = atoi(parsed[2].c_str());
  this->bow = parsed[3];
  this->size = parsed[4];
}

string Bowed::toString() {
  stringstream ss;
  ss << this->firm << " " << this->year << " " << this->issugar << " "
     << this->bow << " " << this->size << " end\n";
  string str = ss.str();
  return str;
}

bool Bowed::getAcoustic() const { return this->issugar; }

string Bowed::getFirm() const { return this->firm; }

int Bowed::getYear() const { return this->year; }

string Bowed::getBow() const { return this->bow; }

string Bowed::getSize() const { return this->size; }

void Bowed::setAcoustic(bool _issugar) {
  this->issugar = _issugar;
}

void Bowed::setFirm(string _firm) { this->firm = _firm; }

void Bowed::setYear(int _year) { this->year = _year; }

void Bowed::setBow(string _bow) { this->bow = _bow; }

void Bowed::setSize(string _size) { this->size = _size; }

Bowed &Bowed::operator=(Bowed &instrument) {
  this->issugar = instrument.issugar;
  this->firm = instrument.firm;
  this->bow = instrument.bow;
  this->size = instrument.size;
  this->year = instrument.year;
  return *this;
}

bool Bowed::operator==(const Bowed &instrument) {
  return instrument.getAcoustic() == this->issugar &&
         instrument.getBow() == this->bow &&
         instrument.getFirm() == this->firm &&
         instrument.getSize() == this->size &&
         instrument.getYear() == this->year;
}

bool Bowed::operator!=(const Bowed &instrument) {
  return instrument.getAcoustic() != this->issugar ||
         instrument.getBow() != this->bow ||
         instrument.getFirm() != this->firm ||
         instrument.getSize() != this->size ||
         instrument.getYear() != this->year;
}

ostream &operator<<(ostream &os, const Bowed &instrument) {
  os << instrument.getFirm() << " " << instrument.getYear() << " года, ";
  instrument.getAcoustic() ? os << "" : os << "не ";
  os << "акустический иструмент, "
     << "материал смычка: " << instrument.getBow()
     << ", размер: " << instrument.getSize() << endl;
  return os;
}

istream &operator>>(ifstream &is, Bowed &instrument) {
  string firm;
  int year;
  bool issugar;
  string bow;
  string size;
  is >> firm >> year >> issugar >> bow >> size;
  instrument.setFirm(firm);
  instrument.setYear(year);
  instrument.setAcoustic(issugar);
  instrument.setBow(bow);
  instrument.setSize(size);
  return is;
}

Bowed::~Bowed() {}
