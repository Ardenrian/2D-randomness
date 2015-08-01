/*
 * Particle.cpp
 *
 *  Created on: Jul 22, 2015
 *      Author: helene
 */

#include "Particle.h"
#include "Vector.h"

Particle::Particle(Vector position_, Vector speed_, double mass_, std::vector<IInteraction*> interactions_, Vector force_) {
	// TODO Auto-generated constructor stub
	position= position_;
	speed= speed_;
	mass= mass_;
	interactions= interactions_;
	force= force_;
}

Vector Particle::getPosition(){
	return position;
}

void Particle::addForce(Vector vector_){
	force.add(vector_);
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}
