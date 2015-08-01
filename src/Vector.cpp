/*
 * Vector.cpp
 *
 *  Created on: Jul 22, 2015
 *      Author: helene
 */

#include "Vector.h"

#include <cmath>

Vector::Vector() {
	// TODO Auto-generated constructor stub
	x=0;
	y=0;
}

Vector::Vector(double x_, double y_){
	x= x_;
	y= y_;
}

double Vector::distanceTo(Vector vector2_){
	double dx= x-vector2_.get_x();
	double dy= y-vector2_.get_y();
	return sqrt(dx*dx+dy*dy);
}

Vector Vector::multiply(double k_){
	return Vector(k_*x, k_*y);
}

Vector Vector::directionTo(Vector vector2_){
	double x_= vector2_.get_x()- x;
	double y_= vector2_.get_y()- y;
	double coef= 1/(this->distanceTo(vector2_));
	return (Vector(x_, y_).multiply(coef));
}

double Vector::get_x() const{
	return x;
}

double Vector::get_y() const{
	return y;
}

Vector Vector::add(Vector vector_){
	double x_= x+ vector_.get_x();
	double y_= y+ vector_.get_y();
	return Vector(x_, y_);
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}
