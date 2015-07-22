/*
 * Particle.h
 *
 *  Created on: Jul 22, 2015
 *      Author: helene
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "Vector.h"
#include "IObject.h"
#include "IInteraction.h"
#include <vector>

class Particle: IObject {
public:
	Particle();
	virtual ~Particle();

private:
	Vector position;
	Vector speed;
	double mass;
	std::vector<IInteraction*> interactions;
	Vector force;
};

#endif /* PARTICLE_H_ */
