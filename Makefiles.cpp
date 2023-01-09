// hello.h
  #ifndef _HELLO_H
  #define _HELLO_H

  void print();

  #endif
  
  
// hello.cpp
  #include"hello.h"
  #include<iostream>
  using namespace std;

  void print()
  {
      cout << "Hello world!" << endl;
  }
  
  
// main.cpp
  #include<iostream>
  #include"hello.h"
  using namespace std;

  int main()
  {
      print();
  }


USING COMMAND LINE:
> g++ main.cpp hello.cpp -o main
> ./main


CREATE MAKEFILE:
// Makefile
main:   // label
	g++ main.cpp hello.cpp -o main

in command line:
> mingw32-make.exe
> ./main

