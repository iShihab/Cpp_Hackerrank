#include <iostream>

using namespace std;

struct Point
{
    int x, y;
};

int main(int argc, char const *argv[])
{
    struct Point p1 = {0, 1};
    cout << p1.x << " " << p1.y;
    return 0;
}
