#include <stdio.h>
#include "main.h"

int adding (int a, int b)
{
int c = a + b ;
return c;
}
int main (){
int result = adding (6, 5);
printf ("%d", result);
return 0;
}
