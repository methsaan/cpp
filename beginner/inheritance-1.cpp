/* inheritence
inherits only public and protected properties and methods
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class parentClass {
      public:
          int parentMethodOne() {
              return x*y;
          }
          int returnParentProperties()[] {
              int parentPropertyArray[] = {x,y};
              return parentPropertyArray;
          }
      private:
          int x = 10;
          int y = 20;
};

class childClass : public parentClass {
      public:
           double childMethodOne() {
                cout << "Child a: " << a << endl;
                cout << "Child b: " << b << endl;
                cout << "Call parentMethodOne() * a + b is \n" << parentMethodOne() << endl;
                return parentMethodOne() * a + b;
           }
           double* returnChildProperties()[] {
                double childPropertyArray[] = {a,b};
                return childPropertyArray;
           }
      private:
            double a = 1.2;
            double b = 3.4;
};

int main(int argc, char *argv[]){
      childClass childOne;
      parentClass parentOne;
      cout << "Get parent properties: \n";
      for (int i=0; i<3; i++) {
            cout << childOne.returnChildProperties()[i];
      }
      cout << "Call childOne.childMethodOne() is \n" << childOne.childMethodOne() << endl;
      cout << "Call inherited parentMethodOne from childClass, childOne.parentMethodOne() is \n" << childOne.parentMethodOne() << endl;
}
