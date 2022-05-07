//Write three functions swap_v(int,int), swap_r(int&,int&), and swap_cr(const int&, const int&). Each should
//have the body
//{ int temp; temp = a, a=b; b=temp; }
//where a and b are the names of the arguments.


//Main-solution



#include "std_lib_facilities.h"

void swap_v(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swap_r(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void swap_cr(const int& a, const int& b)
{
	int t = a;
	a = b;
	b = t;

}
int main()
{
	int x = 7;
	int y = 9;
	swap_v(x, y);
	cout << x << "  " << y << endl;
	swap_r(x, y);
	cout << x << "  " << y << endl;
	const int cx = 7;
	const int cy = 9;

	swap_cr(cx, cy);
	cout << cx << "  " << cy << endl;
	swap_v(7.7, 9.9);
	
	double dx = 7.7;
	double dy = 9.9;
	swap_r(dx, dy);
	cout << dx << "  " << dy << endl;
	return 0;
}
