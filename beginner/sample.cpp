//
// this is a comment in cpp
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main (int nNumberofArgs, char* pszArgs[])
{
    // your c++ code starts here
    // wait until user is ready before terminating program
    // to allow the user to see the program results

    cout<< "Press Enter to continue..." <<endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
