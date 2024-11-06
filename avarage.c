#include <stdio.h>
#include "main.h"

float avarage (float a , float b)
{
float c = (a + b) / 2;
return (c);
}

int main() {
float d = avarage (9 , 6);
printf( "%f", d);
}
