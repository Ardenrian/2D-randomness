/*
 * WholeSystem.h
 *
 *  Created on: Aug 2, 2015
 *      Author: helene
 */

#ifndef WHOLESYSTEM_H_
#define WHOLESYSTEM_H_

#include "IObject.h"
#include "IInteraction.h"

#include <vector>

class WholeSystem {
public:
	WholeSystem();
	virtual ~WholeSystem();

private:
	std::vector<IObject*> objects;
	std::vector<IInteraction*> interactions;
};

#endif /* WHOLESYSTEM_H_ */
