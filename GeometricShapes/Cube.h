#pragma once
#include "Point.h"
#include "Line.h"
#include <math.h>
using namespace std;

template <class T>
class Cube :public Line<T>
{
public:
 Cube();
 Cube(Line<T> a, Line<T> b, double _ygol);
 Cube(Cube<T>& other);
 ~Cube();
 ostream& print(ostream& vivod) override;
 Cube& operator =(const Cube& other);
 Line<T> GetStoronaA();
 Line<T> GetStoronaB();
 double GetYgol();
 void SetStoronaA(Line<T> a);
 void SetStoronaB(Line<T> b);
 void SetYgol(double _ygol);
 double Perimetr()override;
 double Area()override;
 double Volume()override;
private:
 Line<T> A;
 Line<T> B;
 double ygol;
};

template<class T>
inline Cube<T>::Cube()
{
 Line<T>a;
 A = a;
 Line<T>b;
 B = b;
 ygol = 0;
}

template<class T>
inline Cube<T>::Cube(Line<T> a, Line<T> b, double _ygol)
{
 A = a;
 B = b;
 ygol = _ygol;
}

template<class T>
inline Cube<T>::Cube(Cube& other)
{
 A = other.A;
 B = other.B;
 ygol = other.ygol;
}

template<class T>
inline Cube<T>::~Cube()
{
}

template<class T>
ostream& Cube<T>::print(ostream& vivod)
{
 vivod << " a= " << (*this).A.Length() << ", b= " << (*this).B.Length() << "  " << (*this).ygol << " ";
 return vivod;
}

template<class T>
inline Cube<T>& Cube<T>::operator=(const Cube<T>& other)
{
 if (this != &other)
 {
  delete A;
  delete B;
  delete ygol;
  A = other.A;
  B = other.B;
  ygol = other.ygol;
 }
 return *this;
}

template<class T>
inline Line<T> Cube<T>::GetStoronaA()
{
 return A;
}

template<class T>
inline Line<T> Cube<T>::GetStoronaB()
{
 return B;
}

template<class T>
inline double Cube<T>::GetYgol()
{
 return ygol;
}

template<class T>
inline void Cube<T>::SetStoronaA(Line<T> a)
{
 A = a;
}

template<class T>
inline void Cube<T>::SetStoronaB(Line<T> b)
{
 B = b;
}

template<class T>
inline void Cube<T>::SetYgol(double _ygol)
{
 ygol = _ygol;
}

template<class T>
inline double Cube<T>::Perimetr()
{
 double p;
 p = (A.Length() + B.Length()) * 2;
 return p;
}

template<class T>
inline double Cube<T>::Area()
{
 double s;
 s = sin(ygol) * A.Length() * B.Length();
 return s;
}

template<class T>
inline double Cube<T>::Volume()
{
 return 0;
}