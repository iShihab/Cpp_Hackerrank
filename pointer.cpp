//url: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <cstdlib> //To use abs

void update(int *a, int *b)
{
    // Complete this function
    int sum, sub;
    sum = *a + *b;
    sub = *a - *b;
    *a = sum;
    *b = abs(sub);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}