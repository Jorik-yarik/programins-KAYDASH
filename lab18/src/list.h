#ifndef LIST_H
#define LIST_H

#include "entity.h"

/**
 * @file list.h
 * @brief Файл з сигнатурою методів класу, що містить динамічний масив базового класу  
 *
 * @author Kaidash Y.A.
 * @date 17-06-2022
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
   * Знайти найстаріший інструмент обраної фірми
   */
	Bowed &findOldest(string firm);
	~List();
};

#endif
