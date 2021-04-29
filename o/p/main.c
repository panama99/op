#include <stdio.h>

int Calculation(int a, int b)
{
if(a > b)
return a - b;
else
return b - a;
}

int main()
{
int a = 9;
int b = 3;
int c;
if(a > b)
c = a - b;
else
c = b - a;
printf("Result: %d\n", c);
return 0;
}
