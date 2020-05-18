#pragma once
#include "Figures.h"
#include "Point.h"
#include <exception>
using namespace std;

template <class T>
class Line :public Point<T>
{
public:
 Line();
 Line(Point<T> a, Point<T> b);
 Line(Line<T>& other);
 ~Line();
 ostream& print(ostream& vivod) override;
 Line& operator =(const Line& other);
 Point<T> GetPointA();
 Point<T> GetPointB();
 void SetPointA(Point<T> a);
 void SetPointB(Point<T> b);
 double Length();
 double Perimetr()override;
 double Area()override;
 double Volume()override;
private:
 Point<T> A;
 Point<T> B;
};

template<class T>
inline Line<T>::Line()
{
 Point<T>a;
 A = a;
 Point<T>b;
 B = b;
}

template<class T>
inline Line<T>::Line(Point<T> a, Point<T> b)
{
 A = a;
 B = b;
}

template<class T>
inline Line<T>::Line(Line& other)
{
 A = other.A;
 B = other.B;
}

template<class T>
inline Line<T>::~Line()
{
}

template<class T>
ostream& Line<T>::print(ostream& vivod)
{
 vivod << "Nachalo Coordinat A=(" << (*this).A.GetX() << ", " << (*this).A.GetY() << ", " << (*this).A.GetZ() << ")";
 vivod << "Konets Coordinat B=(" << (*this).B.GetX() << ", " << (*this).B.GetY() << ", " << (*this).B.GetZ() << ")";
 return vivod;
}

template<class T>
inline Line<T>& Line<T>::operator=(const Line<T>& other)
{
 if (this != &other)
 {
  A = other.A;
  B = other.B;
 }
 return *this;
}

template<class T>
inline Point<T> Line<T>::GetPointA()
{
 return A;
}

template<class T>
inline Point<T> Line<T>::GetPointB()
{
 return B;
}

template<class T>
inline void Line<T>::SetPointA(Point<T> a)
{
 A = a;
}

template<class T>
inline void Line<T>::SetPointB(Point<T> b)
{
 B = b;
}

template<class T>
inline double Line<T>::Length()
{
 double l = 0;
 l += (A.GetX() - B.GetX()) * (A.GetX() - B.GetX());
 l += (A.GetY() - B.GetY()) * (A.GetY() - B.GetY());
 l += (A.GetZ() - B.GetZ()) * (A.GetZ() - B.GetZ());
 l = sqrt(l);
 return l;
}

template<class T>
inline double Line<T>::Volume()
{
 return 0;
}

template<class T>
inline double Line<T>::Perimetr()
{
 return 0;
}

template<class T>
inline double Line<T>::Area()
{
 return 0;
}