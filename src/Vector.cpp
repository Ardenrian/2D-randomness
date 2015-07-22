/*
 * Vector.cpp
 *
 *  Created on: Jul 22, 2015
 *      Author: helene
 */

#include "Vector.h"

Vector::Vector() {
	// TODO Auto-generated constructor stub
	x=0;
	y=0;
}

Vector::Vector(double x_, double y_){
	x= x_;
	y= y_;
}

double Vector::get_x() const{
	return x;
}

double Vector::get_y() const{
	return y;
}

void Vector::add(Vector vector_){
	x+= vector_.get_x();
	y+= vector_.get_y();
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}
