#ifndef MAIN_H
#define MAIN_H
 /*Function to Add Two Numbers*/
int adding (int a , int b)
{
int adding (int a, int b)
{
int c = a + b ;
return c;
}
/* Function to calculate square of a number*/
int calculate_square (int a)
{
int c = a * a;
return (c) ;

/*Function to calculate average of two numbers*/
float avarage (float a , float b)
{
float c = (a + b) / 2;
return (c);
}

/*Function to Find the Remainder of Two Numbers (use %) */
int remainder_func (int a, int b)
{
int c = a % b;
return (c);
}
/*Function to Find the Remainder of Two Numbers (use %)*/
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

/*Function to Check if a Number is Even or Odd*/
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

/*Function to print some word N times*/

void loop1 (char * a )
{
int i;
for(i=0 ; i < a; i++)
{
printf ("%s",a);
}
}

/* Function to Print Numbers from 1 to N*/
void loop2 (char * a )
{
int i;
for(i=1 ; i < a; i++)
{
printf ("%s",i);
}
}

/* Function to Calculate the Sum of the First N Natural Numbers*/
/* Function to Print Numbers from 1 to N*/
int loop3 (int N )
{
int i;
for(i=0 ; i < n; i++)
{
int sum = sum + i;
}
printf ("%d",sum);
}
