#include<iostream>
#include <iomanip>
#include "geometry.h"

using namespace std;

int main() 
{
	double R, h, a, b;
	cin >> R >> h >> a >> b;

	calculations figure(R, h, a, b);

	cout << "select a shape: 1-ball, 2-cylinder, 3-pyramid" << endl;
	int num;
	cin >> num;

	if (num == 1) {
		setprecision(5);
		cout << figure.get_Sball() << endl;
		
		cout << figure.get_Vball() << endl;
	}
	else if (num == 2) {
		setprecision(5);
		cout << figure.get_Scylinder() << endl;
		cout << figure.get_Vcylinder() << endl;
	}
	else if (num == 3) {
		setprecision(5);
		cout << figure.get_Spyramid() << endl;
		cout << figure.get_Vpyramid() << endl;
	}
	else
		cout << "mistake" << endl;


}