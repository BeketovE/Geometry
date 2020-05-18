#pragma once
#include <string>
#include <iostream>
using namespace std;

class Figures
{
public:
 virtual double Area() = 0;
 virtual double Perimetr() = 0;
 virtual double Volume() = 0;
 virtual ostream& print(ostream& vivod) = 0;
 friend ostream& operator<<(ostream& vivod, Figures& other)
 {
  return other.print(vivod);
 }
 ~Figures(){}
};