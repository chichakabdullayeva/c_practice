#ifndef MAIN_H
#define MAIN_H
int adding (int a , int b);
int calculate_square (int a);
float avarage (float a, float b);
int remainder_func (int a, int b)
{
int c = a % b;
return (c);
}

int condition (int a ,int b)
{
if (a > b)
{
return a;
}
else
{
return b;
}
}

char * checking ( int a)
{
if ( a % 2 == 0)
{
return ("even");
}
else
{
return ("odd");
}
}
#endif
