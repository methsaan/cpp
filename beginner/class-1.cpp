// define a class, create an object of that class, and use it
#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;

// define the class before the main function
class car {
     // functions in a class are always set to public, but can be set to private
     public:
          void drive() {
               cout << "function of Driving the " << color << " car." << endl;
          }
          // setting the variable color to input from main
          // note the return type is void since it is only setting and not returning
          void setcolor(string col) {
               color = col;
          }
          // return the color variable set above - note the return type
          string getcolor() {
               return color;
          }
     // variables are by default set to private, to be accessed via the function of the class
     private:
          string color;
};

int main(int argc, char* argv[])
{
     car carobject;
     carobject.setcolor("orange");
     carobject.drive();
}
