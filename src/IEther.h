/*
 * IEther.h
 *
 *  Created on: Aug 2, 2015
 *      Author: helene
 */

#ifndef IETHER_H_
#define IETHER_H_


class IEther {
public:
	virtual void tick(double t=0)=0;
	virtual ~IEther();
};

#endif /* IETHER_H_ */
