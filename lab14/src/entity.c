#include "entity.h"

Dessert::Dessert() {
  this->sugar = true;
  this->name = "сахарное печенье";
  this->massa = 190;
  this->vkus = "сливочный";

  this->ugl/*size*/ = "25";
}

Dessert::Dessert(bool _sugar, string _name, int _massa,
                                 string _vkus, string _ugl) {
  this->sugar = _sugar;
  this->name = _name;
  this->massa = _massa;
  this->vkus = _vkus;
  this->ugl = _ugl;
}

Dessert::Dessert(const Dessert &instrument) {
  this->sugar = instrument.sugar;
  this->name = instrument.name;
  this->massa = instrument.massa;
  this->vkus = instrument.vkus;
  this->ugl = instrument.ugl;
}

void Dessert::show() {
  printf("%s\n", name.c_str());
  printf("Масса: %u\n", this->massa);
  sugar ? printf("Глюкокозосодержащий\n")
             : printf("Не Глюкокозосодержащий\n");
  printf("Вкус : %s\n", this->vkus.c_str());
  printf("Size: %s\n\n", this->ugl.c_str());
}

bool Dessert::getAcoustic() { return this->sugar; }

string Dessert::getname() { return this->name; }

int Dessert::getYear() { return this->massa; }

string Dessert::getBow() { return this->vkus; }

string Dessert::getSize() { return this->ugl; }

void Dessert::setAcoustic(bool _sugar) {
  this->sugar = _sugar;
}

void Dessert::setname(string _name) { this->name = _name; }

void Dessert::setYear(int _massa) { this->year = _massa; }

void Dessert::setBow(string _vkus) { this->bow = _vkus; }

void Dessert::setSize(string _ugl) { this->size = _ugl; }

Dessert::~Dessert() {}
  

  /////////////

 List::List() {
  this->array = NULL;
  this->size = 0;
}
void List::show() {
  for (size_t i = 0; i < size; i++) {
    array[i][0].show();
  }
}
void List::add(const Dessert &instrument, size_t pos) {
  Dessert **temp = new Dessert *[size + 1];
  if (pos > size)
    pos = size;
  for (size_t i = 0; i < pos; i++) {
    temp[i] = array[i];
  }
  temp[pos] = new Dessert(instrument);
  for (size_t i = pos; i < size; i++) {
    temp[i + 1] = array[i];
  }
  delete[] array;
  array = temp;
  size++;
}
void List::remove(size_t pos) {
  if (size == 0)
    return;
  Dessert **temp = new Dessert *[size - 1];
  if (pos >= size)
    pos = size - 1;
  for (size_t i = 0; i < pos; i++) {
    temp[i] = array[i];
  }
  for (size_t i = pos; i < size - 1; i++) {
    temp[i] = array[i + 1];
  }
  delete array[pos];
  delete[] array;
  array = temp;
  size--;
}
Dessert &List::getElement(size_t pos) {
  if (pos >= 0 && pos < size)
    return array[pos][0];
  return array[0][0];
}
Dessert &List::findOldest(string name) {
  Dessert current;
  size_t counter;
  for (size_t i = 0; i < size; i++) {
    if (array[i][0].getFirm() == name) {
      current = array[i][0];
      break;
    }
  }
  for (size_t i = 0; i < size; i++) {
    if (array[i][0].getYear() < current.getYear() &&
        array[i][0].getFirm() == name) {
      current = array[i][0];
      counter = i;
    }
  }
  return array[counter][0];
}

List::~List() { delete[] array; } 
