#include <stdio.h>
#include <stdlib.h>



int main ()
{

int a = 0;
int b = 0;

printf("First number to add: \n");
fflush(stdout);
scanf("%d", &a);
fflush(stdout);
printf("Second number to add: \n");
fflush(stdout);
scanf("%d", &b);
printf("Sum of number %d and number %d is: %d", a, b, a + b);

return (0);
}
