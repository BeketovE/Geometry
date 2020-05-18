#pragma once
#include "Point.h"
#include "Line.h"
#include <math.h>
using namespace std;

template <class T>
class Triangle :public Line<T>
{
public:
 Triangle();
 Triangle(Line<T> a, Line<T> b, Line<T> c);
 Triangle(Triangle<T>& other);
 ~Triangle();
 ostream& print(ostream& vivod) override;
 Triangle& operator =(const Triangle& other);
 Line<T> GetStoronaA();
 Line<T> GetStoronaB();
 Line<T> GetStoronaC();
 void SetStoronaA(Line<T> a);
 void SetStoronaB(Line<T> b);
 void SetStoronaC(Line<T> c);
 double Perimetr()override;
 double Area()override;
 double Volume()override;
protected:
 Line<T> A;
 Line<T> B;
 Line<T> C;
};

template<class T>
inline Triangle<T>::Triangle()
{
 Line<T>a;
 A = a;
 Line<T>b;
 B = b;
 Line<T>c;
 C = c;
}

template<class T>
inline Triangle<T>::Triangle(Line<T> a, Line<T> b, Line<T> c)
{
 A = a;
 B = b;
 C = c;
}

template<class T>
inline Triangle<T>::Triangle(Triangle& other)
{
 A = other.A;
 B = other.B;
 C = other.C;
}

template<class T>
inline Triangle<T>::~Triangle()
{
}

template<class T>
ostream& Triangle<T>::print(ostream& vivod)
{
 vivod << " a= " << (*this).A.Length() << ", b= " << (*this).B.Length() << ", c= " << (*this).C.Length();
 return vivod;
}

template<class T>
inline Triangle<T>& Triangle<T>::operator=(const Triangle<T>& other)
{
 if (this != &other)
 {
  A = other.A;
  B = other.B;
  C = other.C;
 }
 return *this;
}

template<class T>
inline Line<T> Triangle<T>::GetStoronaA()
{
 return A;
}

template<class T>
inline Line<T> Triangle<T>::GetStoronaB()
{
 return B;
}

template<class T>
inline Line<T> Triangle<T>::GetStoronaC()
{
 return C;
}

template<class T>
inline void Triangle<T>::SetStoronaA(Line<T> a)
{
 A = a;
}

template<class T>
inline void Triangle<T>::SetStoronaB(Line<T> b)
{
 B = b;
}

template<class T>
inline void Triangle<T>::SetStoronaC(Line<T> c)
{
 C = c;
}

template<class T>
inline double Triangle<T>::Perimetr()
{
 double p;
 p = A.Length() + B.Length() + C.Length();
 return p;
}

template<class T>
inline double Triangle<T>::Area()
{
 double s;
 double p;
 p = A.Length() + B.Length() + C.Length();
 s = p(p - A.Length())(p - B.Length())(p - C.Length());
 s = sqrt(s);
 return s;
}

template<class T>
inline double Triangle<T>::Volume()
{
 return 0;
}