#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "This is a float ? or a double ?: " << 4.3545453 << endl;
    cout << "float/float or double/double: " << 4.3545453/2.123 << endl;
    cout << "Any values with less 15 and more than 6 decimal points is a double" << endl;
    cout << "float/double give .... " << 4.55/2.12345678912345678 << endl;
    cout << "double/double give .... " << 4.123456789012345678/2.12345678912345678 << endl;
}
