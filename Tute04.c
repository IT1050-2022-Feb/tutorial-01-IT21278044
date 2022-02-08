/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1,int n2);
int maximum(int n1,int n2);
int multiply(int n1,int n2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int n1,int n2)
{	int c;
	if(n1>n2){
		c=n2;
	}
	else{
		c=n1;
	}
	return c;
}
int maximum(int n1,int n2)
{	int c;
	if(n1>n2){
		c=n1;
	}
	else{
		c=n2;
	}
	return c;
}
int multiply(int n1,int n2)
{	int c;
	c=n1*n2;
	return c;
}
