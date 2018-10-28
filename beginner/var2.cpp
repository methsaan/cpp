#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    float weigth;
    int day;
    cout << "Enter weigth (float, up to 6 decimals, followed by day(integer)" <<endl;
    scanf("%f%d", &weigth, &day);
    cout << "Weigth: " << weigth << endl;
    cout << "Day: " << day << endl;
}
