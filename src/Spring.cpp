/*
 * Spring.cpp
 *
 *  Created on: Aug 1, 2015
 *      Author: helene
 */

#include "Spring.h"

#include "Vector.h"
#include "IObject.h"

Spring::Spring(double k_, double lRest_, IObject* object1_, IObject* object2_) {
	k= k_;
	lRest= lRest_;
	object1= object1_;
	object2= object2_;
}

void Spring::applyForce(){
	double elongation= (object1->getPosition()).distanceTo(object2->getPosition())-lRest;
	Vector forceOn1= (object1->getPosition()).directionTo(object2->getPosition()).multiply(k*elongation);
	object1->addForce(forceOn1);
	object2->addForce(forceOn1.multiply(-1));
}

Spring::~Spring() {
	// TODO Auto-generated destructor stub
}

