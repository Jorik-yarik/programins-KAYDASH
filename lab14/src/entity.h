#ifndef ENTITY_H
#define ENTITY_H

#include <stdio.h>

using std::cout;
using std::string;

/**
 * @file entity.h
 * @brief Файл з сигнатурою методів базового класу
 *
 * @author Kaydash Y.A.
 * @date 15-06-2022
 * @version 1.0
 */

class Dessert {
private:
  bool sugar;
  string name;
  int massa;
  string vkus;
  string ugl;

public:
  Dessert();
  Dessert(bool sugar, string name, int massa, string vkus,
                  string ugl);
  Dessert(const Dessert &instrument);
  /**
 * Метод show
 * Вивід елементу масиву у консоль
 */
  void show();
  /**
 * Метод getAcoustic
 * Повертає стан поля isAcoustic
 */
  bool getAcoustic();
  /**
 * Метод getname
 * Повертає стан поля name
 */
  string getname();
  /**
 * Метод getYear
 * Повертає стан поля year
 */
  int getYear();
  /**
 * Метод getBow
 * Повертає стан поля bow
 */
  string getBow();
  /**
 * Метод getSize
 * Повертає стан поля size
 */
  string getSize();
  /**
 * Метод setAcoustic
 * Встановлення значення поля isAcoustic
 */
  void setAcoustic(bool _sugar);
  /**
 * Метод setname
 * Встановлення значення поля name
 */
  void setname(string _name);
  /**
 * Метод setYear
 * Встановлення значення поля year
 */
  void setYear(int _massa);
  /**
 * Метод setBow
 * Встановлення значення поля bow
 */
  void setBow(string _vkus);
  /**
 * Метод setSize
 * Встановлення значення поля ugl
 */
  void setSize(string _ugl);
  ~Dessert();
};

class List {
private:
  size_t size;
  Dessert **array;

public:
  List();

  /**
 * Метод show
 * Вивід масиву у консоль
 */
  void show();
   /**
 * Метод add
 * Додавання елементу на позицію 
 */
  void add(const Dessert &instrument, size_t pos);
    /**
 * Метод remove
 * Видалення елемента з позиції
 */
  void remove(size_t pos);
    /**
 * Метод getElement
 * Отримання елемента на позиції
 */
  Dessert &getElement(size_t pos);
    /**
 * Метод findOldest
 * 
 */
  Dessert &findOldest(string name);
  ~List();
};


#endif
