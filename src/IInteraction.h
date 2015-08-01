/*
 * IInteraction.h
 *
 *  Created on: Jul 22, 2015
 *      Author: helene
 */

#ifndef IINTERACTION_H_
#define IINTERACTION_H_

class IInteraction {
public:
	IInteraction();
	virtual void applyForce()=0;
	virtual ~IInteraction();
};

#endif /* IINTERACTION_H_ */
