/*
 * ClassicEther.h
 *
 *  Created on: Aug 2, 2015
 *      Author: helene
 */

#ifndef CLASSICETHER_H_
#define CLASSICETHER_H_

#include "IMethod.h"
#include "IEther.h"

class ClassicEther: IEther{
public:
	ClassicEther(IMethod method_);
	void tick(double t);
	virtual ~ClassicEther(){};

private:
	IMethod method;
};

#endif /* CLASSICETHER_H_ */
