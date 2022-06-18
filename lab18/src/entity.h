#ifndef ENTITY_H
#define ENTITY_H

#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::ofstream;
using std::string;
using std::stringstream;

/**
 * @file entity.h
 * @brief Файл з сигнатурою методів базового класу
 *
 * @author Kaidash Y.A.
 * @date 17-06-2022
 * @version 1.0
 */

class Bowed {
    private:
	bool issug;
	string firm;
	int year;
	string bow;
	string size;

    public:
	Bowed();
	Bowed(bool issug, string firm, int year, string bow, string size);
	Bowed(const Bowed &instrument);
	Bowed(string str);
	/**
   * Метод toString
   * Створює строку, що містить дані про елемент масиву
   */
	string toString();
	/**
   * Метод writeToFile
   * Записує дані елемента масиву у файл
   */
	void writeToFile(string &filename);
	/**
   * Метод getissug
   * Повертає значення поля issug
   */
	bool getissug();
	/**
   * Метод getFirm
   * Повертає стан поля firm
   */
	string getFirm();
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
   * Встановлення значення поля issug
   */
	void setAcoustic(bool _issug);
	/**
   * Метод setFirm
   * Встановлення значення поля firm
   */
	void setFirm(string _firm);
	/**
   * Метод setYear
   * Встановлення значення поля year
   */
	void setYear(int _year);
	/**
   * Метод setBow
   * Встановлення значення поля bow
   */
	void setBow(string _bow);
	/**
   * Метод setSize
   * Встановлення значення поля size
   */
	void setSize(string _size);
	~Bowed();
};

#endif
