// url : https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen

#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > a && c > b && c > d)
    {
        return c;
    }
    else if (d > a && d > b && d > c)
    {
        return d;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    return 0;
}