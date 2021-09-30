#include <iostream>
#include <cmath>
#include <iomanip>
#include "geometry.h"

using namespace std;

const double PI =3.1415 ;

geometry::geometry(const double R) 
	: R(R){}

double geometry::get_R() const {
	return this->R;
}

void geometry::set_R(double R) {
	this->R = R;
}

double geometry::get_h() const {
	return this->h;
}

void geometry::set_h(double h) {
	this->h = h;
}

double geometry::get_a() const {
	return this->a;
}

void geometry::set_a(double a) {
	this->a = a;
}

double geometry::get_b() const {
	return this->b;
}

void geometry::set_b(double b) {
	this->b = b;
}


double calculations::get_num(const double R) const {
	return get_R();
}

calculations::calculations(const double R, const double h, const double a, const double b) {
	set_R(R);
	set_Sball();
	set_Scylinder();
	set_Spyramid();
	set_Vball();
	set_Vcylinder();
	set_Vpyramid();
}

double calculations::get_R() const {
	return this->R;
}

void calculations::set_R(const double R)
{
	this->R = R;
}


void calculations::set_Sball()
{
	this->Sball = 4*PI*(pow(double(get_R()),2));
}

void calculations::set_Scylinder()
{
	this->Scylinder = 2 * PI * (get_R()) * (get_h()) + 2 * PI * (pow(double(get_R()), 2));
}

void calculations::set_Spyramid()
{
	this-> Spyramid = ((pow(double(get_a()),2))+2*(get_a())*(get_b()));
}

void calculations::set_Vball()
{
	this->Vball = (4*PI*(pow(double(get_R()),3)))/3.0;
}

void calculations::set_Vcylinder()
{
	this->Vcylinder = PI*(pow(double(get_R()),2))*(get_h());
}

void calculations::set_Vpyramid()
{
	this->Vpyramid = (((pow(double(get_a()), 2)) * (get_h()))/3.0);
}

double calculations::get_Sball() const
{
	return this->Sball;
}

double calculations::get_Scylinder() const
{
	return this->Scylinder;
}

double calculations::get_Spyramid() const
{
	return this->Spyramid;
}

double calculations::get_Vball() const
{
	return this->Vball;
}

double calculations::get_Vcylinder() const
{
	return this->Vcylinder;
}

double calculations::get_Vpyramid() const
{
	return this->Vpyramid;
}


istream& operator>>(istream& number, calculations& input)
{
	double x;
	number >> x;
	input = calculations();
	return number;
}

ostream& operator<<(ostream& out, const calculations& show)
{
	
	out << "S ball = "   << show.get_Sball() << endl
		<< "V ball'= " << show.get_Vball() << endl
		<< "S cylinder = " << show.get_Scylinder() << endl
		<< "V cylinder = " << show.get_Vcylinder() << endl
		<< "S pyramid = " << show.get_Spyramid() << endl
		<< "V pyramid = " << show.get_Vpyramid() << endl;
	return out;
}

