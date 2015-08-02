/*
 * WholeSystem.cpp
 *
 *  Created on: Aug 2, 2015
 *      Author: helene
 */

#include "WholeSystem.h"


WholeSystem::WholeSystem(): objects(0), interactions(0) {}

WholeSystem::~WholeSystem() {
	for(std::vector<IObject*>::iterator it= objects.begin(); it!= objects.end(); ++it){
		delete (*it);
	}

	for(std::vector<IInteraction*>::iterator it= interactions.begin(); it!= interactions.end(); ++it){
		delete (*it);
	}
}

