#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
	double deltaRight = min(a.x + a.w, b.x + b.w);
	double deltaLeft = max(a.x, b.x);
	double deltaUp = min(a.y, b.y);
	double deltaDown = max(a.y - a.h, b.y - b.h);
	double area = (deltaRight - deltaLeft) * (deltaUp - deltaDown);
	if (area > 0)
	{
		return (deltaRight - deltaLeft) * (deltaUp - deltaDown);
	}
	else
	{
		return 0;
	}
}

int main()
{
Rect a = {-1,2,6.9,9.6};
Rect b = {0,0,1.2,2.5};	
cout << overlap(a,b);	
}