#pragma once
#include <iostream>

using namespace std;

class geometry 
{
protected:
	double R, h, a, b;

public:

	geometry() = default;

	geometry(const double R);

	virtual ~geometry() = default;

	double get_R() const;

	void set_R(const double R);

	double get_h() const;

	void set_h(const double h);

	double get_a() const;

	void set_a(const double a);

	double get_b() const;

	void set_b(const double b);

};

class calculations : public geometry
{
protected:

	double get_num(const double R) const;

private:

	void set_Sball();
	void set_Scylinder();
	void set_Spyramid();
	void set_Vball();
	void set_Vcylinder();
	void set_Vpyramid();

	double Sball;
	double Scylinder;
	double Spyramid;
	double Vball;
	double Vcylinder;
	double Vpyramid;


public:

	calculations() = default;

	calculations(const double R, const double h, const double a, const double b);

	~calculations() = default;

	double get_R() const;

	void set_R(const double R);

	double get_Sball() const;

	double get_Scylinder() const;

	double get_Spyramid() const;

	double get_Vball() const;

	double get_Vcylinder() const;

	double get_Vpyramid() const;

	friend istream& operator>> (istream& in, calculations& f);

	friend ostream& operator<<(ostream& out, calculations& f);

};