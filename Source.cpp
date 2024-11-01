#include <iostream>
#include <cmath>
using namespace std;
struct point
{
	float x;
	float y;
};
struct lineSegment
{
	point a;
	point b;
};
struct triangle
{
	point A;
	point B;
	point C;
	float s1;
	float s2;
	float s3;
};
struct point myPoint;
struct lineSegment myLineSegment;
struct triangle triangle_1;
struct triangle triangle_2;
float magnitude(point p, point q)
{
	return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
float Mag(lineSegment g)
{
	return magnitude(g.a, g.b);
}
float Heron(point r, point o, point t)
{
	float S = (magnitude(r, o) + magnitude(o, t) + magnitude(t, r)) / 2.0;
	return sqrt(S * (S - magnitude(r, o)) * (S - magnitude(o, t)) * (S - magnitude(t, r)));
}
float triangleArea(triangle m)
{
	return Heron(m.A, m.B, m.C);
}
float heron(triangle n)
{
	float s = (abs(n.s1) + abs(n.s2) + abs(n.s3)) / 2.0;
	return sqrt(s * (s - n.s1) * (s - n.s2) * (s - n.s3));
}
int main()
{
	myPoint.x = 5;
	myPoint.y = 8;
	myLineSegment.a.x = 0;
	myLineSegment.a.y = 1;
	myLineSegment.b.x = 3;
	myLineSegment.b.y = 5;
	triangle_1.A.x = 1;
	triangle_1.A.y = 1;
	triangle_1.B.x = 5;
	triangle_1.B.y = 1;
	triangle_1.C.x = 1;
	triangle_1.C.y = 4;
	triangle_2.s1 = 4;
	triangle_2.s2 = 3;
	triangle_2.s3 = 5;

	cout << "The length of myLineSegment is " << magnitude(myLineSegment.a, myLineSegment.b) << ".\n" << "The length of myLineSegment is " << Mag(myLineSegment) << ".\n" << "The area of triangle_1 is " << Heron(triangle_1.A, triangle_1.B, triangle_1.C) << ".\n" << "The area of triangle_2 is " << heron(triangle_2) << ".\n";
	return 0;
}