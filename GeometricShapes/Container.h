#pragma once
#include <iostream>
#include "Circle.h"
#include "Cube.h"
#include "Triangle.h"
#include "Square.h"
#include "Paralelipiped.h"
#include "Line.h"
#include "Point.h"
#include "Figures.h"
using namespace std;

#ifndef _Container_h_
#define _Container_h_
template<class T>
class Container
{
private:
 Figures** arr;
 int size;
public:
 Container();
 void Edit(Figures& other);
 void Delete(Figures& other);
 ~Container();
 int GetKolichestvo();
 Figures* operator[](const int i);
 template<class T>
 friend ostream& operator<<(ostream& vivod, Container<T>& other);

};

template<class T>
inline Container<T>::Container()
{
}

template<class T>
inline void Container<T>::Edit(Figures& other)
{
 Figures** figure = new Figures * [size];
 for (int i = 0; i < size; i++)
 {
  figure[i] = arr[i];
 }
 delete[]arr;
 size = size + 1;
 arr = new Figures * [size];
 for (int i = 0; i < size - 1; i++)
 {
  arr[i] = figure[i];
 }
 arr[size - 1] = (&other);
 delete[]figure;
}

template<class T>
inline void Container<T>::Delete(Figures& other)
{
 Figures** figure = new Figures * [size];
 int j = 0;
 for (int i = 0; i < size; i++)
  figure[i] = NULL;
 for (int i = 0; i < size; i++)
 {
  if (arr[i] != &other)
  {
   figure[j] = arr[i];
   j++;
  }
 }
 delete[] arr;
 if (figure[size - 1] == NULL)
 {
  arr = new Figures * [size - 1];
  size = size - 1;
 }
 else
 {
  arr = new Figures * [size];
 }
 for (int i = 0; i < size; i++)
  arr[i] = figure[i];
 delete figure;
}

template<class T>
inline Container<T>::~Container()
{
 delete[]arr;
}

template<class T>
inline int Container<T>::GetKolichestvo()
{
 return size;
}

template<class T>
inline Figures* Container<T>::operator[](const int i)
{
 if ((i < 0) || (i > size))
  throw length_error("Fighya Poluchilas");
 return (arr[i]);
}

template<class T>
ostream& operator<<(ostream& vivod, Container<T>& other)
{
 for (int i = 0; i < other.GetKolichestvo(); i++)
 {
  vivod << *other[i] << endl;
 }
 return vivod;
}
#endif 