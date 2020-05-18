#pragma once
#include "Point.h"
#include "Line.h"
using namespace std;

template <class T>
class Square :public Line<T>
{
public:
 Square();
 Square(Line<T> a, Line<T> b);
 Square(Square<T>& other);
 ~Square();
 ostream& print(ostream& vivod) override;
 Square& operator =(const Square& other);
 Line<T> GetStoronaA();
 Line<T> GetStoronaB();
 void SetStoronaA(Line<T> a);
 void SetStoronaB(Line<T> b);
 double Perimetr()override;
 double Area()override;
 double Volume()override;
private:
 Line<T> A;
 Line<T> B;
};

template<class T>
inline Square<T>::Square()
{
 Line<T>a;
 A = a;
 Line<T>b;
 B = b;
}

template<class T>
inline Square<T>::Square(Line<T> a, Line<T> b)
{
 A = a;
 B = b;
}

template<class T>
inline Square<T>::Square(Square& other)
{
 A = other.A;
 B = other.B;
}

template<class T>
inline Square<T>::~Square()
{
}

template<class T>
ostream& Square<T>::print(ostream& vivod)
{
 vivod << " a= " << (*this).A.Length() << ", b= " << (*this).B.Length();
 return vivod;
}

template<class T>
inline Square<T>& Square<T>::operator=(const Square<T>& other)
{
 if (this != &other)
 {
  delete A;
  delete B;
  A = other.A;
  B = other.B;
 }
 return *this;
}

template<class T>
inline Line<T> Square<T>::GetStoronaA()
{
 return A;
}

template<class T>
inline Line<T> Square<T>::GetStoronaB()
{
 return B;
}

template<class T>
inline void Square<T>::SetStoronaA(Line<T> a)
{
 A = a;
}

template<class T>
inline void Square<T>::SetStoronaB(Line<T> b)
{
 B = b;
}

template<class T>
inline double Square <T>::Perimetr()
{
 double p;
 p = (A.Length() + B.Length()) * 2;
 return p;
}

template<class T>
inline double Square<T>::Area()
{
 double s;
 s = 3.14 * A.Length() * B.Length();
 return s;
}

template<class T>
inline double Square<T>::Volume()
{
 return 0;
}