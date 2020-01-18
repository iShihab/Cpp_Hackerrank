#include <iostream>
#include <cstdio>
#include <iomanip> //to set precision

//int, long, char, float, and double
using namespace std;
int main()
{
    int a;
    //long b;
    char c;
    float d;  //floating point value should be correct up to 3 decimal places
    double e; //the double to 9 decimal places.
    // scanf("%d,%ld,%ch,%f,%lf", a, b, c, d, e);
    cin >> a;
    // cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    cout << a << endl;
    // cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;

    return 0;
}
