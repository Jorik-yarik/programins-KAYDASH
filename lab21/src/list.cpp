#include "list.h"

List::List() {
  this->array = NULL;
  this->size = 0;
}
void List::writeToFile(string filename) {
  ofstream file(filename);
  if (file.is_open()) {
    file << this;
  }
  file.close();
}

void List::readFromFile(string filename) {
  ifstream file(filename);
  string str;
  size_t j = 0;
  size_t _size = this->size;
  if (file.is_open()) {
    for (size_t i = 0; i < _size; i++)
      remove(i);
    file >> *this;
  }
  file.close();
}

void List::add(const Bowed &instrument, size_t pos) {
  Bowed **temp = new Bowed *[size + 1];
  if (pos > size)
    pos = size;
  for (size_t i = 0; i < pos; i++) {
    temp[i] = array[i];
  }
  temp[pos] = new Bowed(instrument);
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
  Bowed **temp = new Bowed *[size - 1];
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
size_t List::getSize() { return size; }
Bowed &List::getElement(size_t pos) {
  if (pos >= 0 && pos < size)
    return array[pos][0];
  return array[0][0];
}
Bowed &List::findOldest(string firm) {
  Bowed current;
  size_t counter;
  for (size_t i = 0; i < size; i++) {
    if (array[i][0].getFirm() == firm) {
      current = array[i][0];
      break;
    }
  }
  for (size_t i = 0; i < size; i++) {
    if (array[i][0].getYear() < current.getYear() &&
        array[i][0].getFirm() == firm) {
      current = array[i][0];
      counter = i;
    }
  }
  return array[counter][0];
}

Bowed &List::operator[](size_t pos) const { return *array[pos]; }

ostream &operator<<(ostream &os, const List &list) {
  for (size_t i = 0; i < list.size; i++) {
    os << list[i];
  }
  return os;
}

istream &operator>>(istream &is, List &list) {
  string str;
  size_t i = 0;
  while (getline(is, str)) {
    Bowed temp = str;
    list.add(temp, i);
    i++;
  }

  return is;
}

List::~List() { delete[] array; }