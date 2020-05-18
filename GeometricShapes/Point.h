#pragma once
#include "Figures.h"
#include <exception>
#include <iostream>
using namespace std;

template <class T>
class Point :public Figures
{
public:
 Point();
 Point(T x_, T y_, T z_);
 Point(Point<T>& other);
 ~Point();
 ostream& print(ostream& vivod);
 Point& operator =(const Point& other);
 T GetX();
 T GetY();
 T GetZ();
 void SetX(T x_);
 void SetY(T y_);
 void SetZ(T z_);
 double Perimetr() override;
 double Area()override;
 double Volume()override;
private:
 T x;
 T y;
 T z;
};

template<class T>
inline Point<T>::Point()
{
 x = 0;
 y = 0;
 z = 0;
}

template<class T>
inline Point<T>::Point(T x_, T y_, T z_)
{
 x = x_;
 y = y_;
 z = z_;
}

template<class T>
inline Point<T>::Point(Point& other)
{
 x = other.x;
 y = other.y;
 z = other.z;
}

template<class T>
inline Point<T>::~Point()
{
}

template<class T>
ostream& Point<T>::print(ostream& vivod)
{
 vivod << " x=" << x << ", y=" << y << ", z=" << z;
 vivod << endl;
 return vivod;
}

template<class T>
inline Point<T>& Point<T>::operator=(const Point<T>& other)
{
 if (this != &other)
 {

  x = other.x;
  y = other.y;
  z = other.z;
 }
 return *this;

}

template<class T>
inline T Point<T>::GetX()
{
 return x;
}

template<class T>
inline T Point<T>::GetY()
{
 return y;
}

template<class T>
inline T Point<T>::GetZ()
{
 return z;
}

template<class T>
inline void Point<T>::SetX(T x_)
{
 x = x_;
}

template<class T>
inline void Point<T>::SetY(T y_)
{
 y = y_;
}

template<class T>
inline void Point<T>::SetZ(T z_)
{
 z = z_;
}

template<class T>
inline double Point<T>::Perimetr()
{
 return 0;
}

template<class T>
inline double Point<T>::Area()
{
 return 0;
}

template<class T>
inline double Point<T>::Volume()
{
 return 0;
}