#include "Circle.h"
#include "Cube.h"
#include "Triangle.h"
#include "Square.h"
#include "Paralelipiped.h"
#include "Line.h"
#include "Point.h"
#include "Figures.h"
#include "Container.h"
#include <iostream>
using namespace std;

int main()
{
 Point<int>t1;
 Point<int>t2(7, 6, 4);
 Point<int>t3(1, 2, 3);
 Point<int>t4(t3);
 Line<int>l1(t1, t3);
 Circle<int>c1(l1);
 Container<int>F;
 F.Edit(t1);
 F.Edit(t2);
 F.Edit(l1);
 F.Edit(c1);
 cout << F << endl;
 F.Delete(l1);
 return 0;
}