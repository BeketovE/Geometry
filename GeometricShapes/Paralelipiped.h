#pragma once
#include "Point.h"
#include "Line.h"
using namespace std;

template <class T>
class Paralelipiped :public Square<T>
{
public:
 Paralelipiped();
 Paralelipiped(Line<T> a, Line<T> b, Line<T> c);
 Paralelipiped(Paralelipiped<T>& other);
 ~Paralelipiped();
 ostream& print(ostream& vivod) override;
 Paralelipiped& operator =(const Paralelipiped& other);
 Line<T> GetStoronaA();
 Line<T> GetStoronaB();
 Line<T> GetStoronaC();
 void SetStoronaA(Line<T> a);
 void SetStoronaB(Line<T> b);
 void SetStoronaC(Line<T> c);
 double Perimetr()override;
 double Area()override;
 double Volume()override;
private:
 Line<T> A;
 Line<T> B;
 Line<T> C;
};

template<class T>
inline Paralelipiped<T>::Paralelipiped()
{
 Line<T>a;
 A = a;
 Line<T>b;
 B = b;
 Line<T>c;
 C = c;
}

template<class T>
inline Paralelipiped<T>::Paralelipiped(Line<T> a, Line<T> b, Line<T> c)
{
 A = a;
 B = b;
 C = c;
}

template<class T>
inline Paralelipiped<T>::Paralelipiped(Paralelipiped& other)
{
 A = other.A;
 B = other.B;
 C = other.C;
}

template<class T>
inline Paralelipiped<T>::~Paralelipiped()
{
}

template<class T>
ostream& Paralelipiped<T>::print(ostream& vivod)
{
 vivod << " a= " << (*this).A.Length() << ", b= " << (*this).B.Length() << ", c= " << (*this).C.Length();
 return vivod;
}

template<class T>
inline Paralelipiped<T>& Paralelipiped<T>::operator=(const Paralelipiped<T>& other)
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
inline Line<T> Paralelipiped<T>::GetStoronaA()
{
 return A;
}

template<class T>
inline Line<T> Paralelipiped<T>::GetStoronaB()
{
 return B;
}

template<class T>
inline Line<T> Paralelipiped<T>::GetStoronaC()
{
 return C;
}

template<class T>
inline void Paralelipiped<T>::SetStoronaA(Line<T> a)
{
 A = a;
}

template<class T>
inline void Paralelipiped<T>::SetStoronaB(Line<T> b)
{
 B = b;
}

template<class T>
inline void Paralelipiped<T>::SetStoronaC(Line<T> c)
{
 C = c;
}

template<class T>
inline double Paralelipiped<T>::Perimetr()
{
 double p;
 p = A.Length() * 4 + B.Length() * 4 + C.Length() * 4;
 return p;
}

template<class T>
inline double Paralelipiped<T>::Area()
{
 double s;
 s = 2 * A.Length() * B.Length() + 2 * C.Length() * B.Length() + 2 * A.Length() * C.Length();
 return s;
}

template<class T>
inline double Paralelipiped<T>::Volume()
{
 double v;
 v = A.Length() * B.Length() * C.Length();
 return v;
}