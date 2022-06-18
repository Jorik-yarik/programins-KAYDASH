#ifndef LIST_H
#define LIST_H

#include "entity.h"

/**
 * @file list.h
 * @brief Файл з сигнатурою методів класу, що містить динамічний масив базового класу  
 *
 * @author Kaydash Y.A.
 * @date 18-06-2022
 * @version 1.0
 */

class List {
private:
  size_t size;
  Bowed **array;

public:
  List();
 /**
   * Метод writeToFile
   * Запис масиву у файл
   */
  void writeToFile(string filename);
  /**
   * Метод readFromFile
   * Запис масиву з файлу
   */
  void readFromFile(string filename);
  /**
   * Метод add
   * Додавання елементу на позицію
   */
  void add(const Bowed &instrument, size_t pos);
  /**
   * Метод remove
   * Видалення елемента з позиції
   */
  void remove(size_t pos);
  /**
   * Метод getElement
   * Отримання елемента на позиції
   */
  Bowed &getElement(size_t pos);
  /**
   * Метод findOldest 
   * 
   */
  Bowed &findOldest(string firm);
  
  /**
   * Перевантажений оператор [] 
   * Повертає елемент масиву за позицією
   */
  Bowed &operator[](size_t pos) const;
  /**
   * Перевантажений оператор >> 
   * Вивід даних про масив у консоль чи запис у файл
   */
  friend ostream &operator<<(ostream &os, const List &list);
  /**
   * Перевантажений оператор << 
   * Запис даних про масив з консоль чи читання з файлу
   */  
  friend istream &operator>>(istream &is, List &list);
  ~List();
};

#endif
