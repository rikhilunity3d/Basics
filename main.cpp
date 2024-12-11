#include <iostream>

class Base{
  public:
   virtual void run()  
  {
    std::cout<<"Base Class run\n";
  }
  virtual void add(){}
};

class Derived: public Base{
  public:
  void run()
  {
    std::cout<<"Derived Class run\n";
  }

  void add(){
    std::cout<<"Derived Class add\n";
  }
};

int main() {
  std::cout << "Virtual functions\n";

  Base *basePointer;
  Base base;
  base.run();
  basePointer = &base;
  basePointer->run();
  basePointer->add();
  base.add();

  Derived derived;
  basePointer = &derived;
  basePointer->run();
  derived.run();
  basePointer->add();
} 