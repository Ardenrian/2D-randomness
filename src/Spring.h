/*
 * Spring.h
 *
 *  Created on: Aug 1, 2015
 *      Author: helene
 */

#ifndef SPRING_H_
#define SPRING_H_

#include "IInteraction.h"
#include "IObject.h"

class Spring: IInteraction {
public:
	Spring(double k_, double lRest_, IObject* object1_, IObject* object2_);
	void applyForce();
	virtual ~Spring();

private:
	double k;
	double lRest;
	IObject* object1;
	IObject* object2;
};

#endif /* SPRING_H_ */
