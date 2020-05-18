#pragma once
#include "Figures.h"
#include "Point.h"
#include "Line.h"
using namespace std;

template <class T>
class Circle :public Line<T>
{
public:
 Circle();
 Circle(Line<T> r);
 Circle(Circle<T>& other);
 ~Circle();
 ostream& print(ostream& vivod) override;
 Circle& operator =(const Circle& other);
 Line<T> GetRadius();
 void SetRadius(Line<T> r);
 double Perimetr()override;
 double Area()override;
 double Volume()override;
private:

 Line<T> R;
};

template<class T>
inline Circle<T>::Circle()
{

 Line<T>r;
 R = r;
}

template<class T>
inline Circle<T>::Circle(Line<T> r)
{

 R = r;
}

template<class T>
inline Circle<T>::Circle(Circle& other)
{

 R = other.R;
}

template<class T>
inline Circle<T>::~Circle()
{
}

template<class T>
ostream& Circle<T>::print(ostream& vivod)
{
 vivod << "Radius okruzhnosti r= " << (*this).R.Length();
 return vivod;
}

template<class T>
inline Circle<T>& Circle<T>::operator=(const Circle<T>& other)
{
 if (this != &other)
 {
  delete R;
  R = other.R;
 }
 return *this;
}

template<class T>
inline Line<T> Circle<T>::GetRadius()
{
 return R;
}

template<class T>
inline void Circle<T>::SetRadius(Line<T> r)
{
 R = r;
}

template<class T>
inline double Circle<T>::Perimetr()
{
 double p;
 p = 2 * 3.14 * R.Length();
 return p;
}

template<class T>
inline double Circle<T>::Area()
{
 double s;
 s = 3.14 * R.Length() * R.Length();
 return s;
}

template<class T>
inline double Circle<T>::Volume()
{
 return 0;
}