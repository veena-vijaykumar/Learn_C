/*
  6 *  1 =  6
  6 *  2 = 12
  6 *  3 = 18
  6 *  4 = 24
  6 *  5 = 30
  6 *  6 = 36
  6 *  7 = 42
  6 *  8 = 48
  6 *  9 = 54
  6 * 10 = 60
  
  printf( " your string and  numbers ( %d for integers, %f for floats, %s for string etc ) go here ", integr, flot, strng );
    
  output: 6 *  3 = 18
  
*/

# include <stdio.h>

int i = 1;
int a = 6;
int ans = 1;
int main ()
{
   for (i=1;i<=10;i++)
   {		ans = (a * i);     //6 12 18 24 30 ... 60
   
   printf(" %2d, %2d \n",i,ans);
   }
}

/*  Syntax of For loop:
for (initial; condition; updation)              for (initial; condition; updation) 
{													//body;
	//body;										remaining;
}
remaining;



*/
