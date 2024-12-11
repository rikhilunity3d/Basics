#include <iostream>

class Shape{
  public:
  virtual void calculateArea()=0;
};

class Rectangle: public Shape
{
  int l=10;
  int b=20;
  public:
  void calculateArea(){
    int area = l*b;
    std::cout<<"Rectangle Area = "<<area<<"\n";
  }
};

class Square:public Shape
{
  int l=15;
  public:
  void calculateArea(){
    int area = l*l;
    std::cout<<"Square Area = "<<area<<"\n";
  }
};
int main() 
{
  std::cout << "Pure Abstract Class means Interface, Here Shape is Interface\n";

  Shape *shape;
  //Shape shape; error because base class contians pure virtual function and that cannot be instantiated. as it became abstract class a pure abstract class know as Interface.
  Rectangle rectangle;
  shape = &rectangle;
  shape->calculateArea();

  Square square;
  shape = &square;  
  shape->calculateArea();
} 