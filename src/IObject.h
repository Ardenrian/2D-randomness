/*
 * IObject.h
 *
 *  Created on: Jul 22, 2015
 *      Author: helene
 */

#ifndef IOBJECT_H_
#define IOBJECT_H_

#include "Vector.h"


class IObject {
public:
	virtual Vector getPosition()=0;
	virtual void addForce(Vector vector_)=0;
	virtual ~IObject(){};
};

#endif /* IOBJECT_H_ */
