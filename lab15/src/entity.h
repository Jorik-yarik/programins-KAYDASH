#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

using std::cout;
using std::string;

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
	bool issug /*Acoustic*/;
	string firm;
	int massa;
	string bow;
	string size;

    public:
	Bowed();
	Bowed(bool issug, string firm, int massa, string bow, string size);
	Bowed(const Bowed &instrument);
	/**
 * Метод show
 * Вивід елементу масиву у консоль
 */
	void show();
	/**
 * Метод getissug
 * Повертає стан поля issug
 */
	bool getissug();
	/**
 * Метод getFirm
 * Повертає стан поля firm
 */
	string getFirm();
	/**
 * Метод getmassa
 * Повертає стан поля massa
 */
	int getmassa();
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
 * Метод setmassa
 * Встановлення значення поля massa
 */
	void setmassa(int _massa);
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
