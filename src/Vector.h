/*
 * Vector.h
 *
 *  Created on: Jul 22, 2015
 *      Author: helene
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {
public:
	Vector();
	Vector(double x_, double y_);
	Vector add(Vector vector_);
	Vector multiply(double k_);
	double distanceTo(Vector vector2_);
	Vector directionTo(Vector vector2_);
	double get_x() const;
	double get_y() const;
	virtual ~Vector();
private:
	double x;
	double y;
};

#endif /* VECTOR_H_ */
