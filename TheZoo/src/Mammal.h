/*
 * Mammal.h
 *
 *  Created on: Apr 11, 2020
 *      Author: 1715254_snhu
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_

#include "Animal.h"

class Mammal : public Animal {
public:
	Mammal(int t_TrackNum, string t_name, string t_type, string t_subType, int t_Nurse);
	virtual ~Mammal();
	int Nurse;
};

#endif /* MAMMAL_H_ */
