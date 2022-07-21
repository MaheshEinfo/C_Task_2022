/* Execution of a loop an unknown number of times 
 * Take any number from user and check square useing do while loop*/

#include<stdio.h>
int main()
{
    char another;
    
        int num[10];
	int i=0;
        do
         {
              printf("Enter a number ");
              scanf("%d",&num[i]);
              printf("square of %d is %d\n",num[i],num[i] * num[i]);
              printf("Want to enter another number y/n ");
              fflush(stdin);
	      scanf("%d",&num[i]);
              scanf("%c",&another);
     
         }
         while(another == 'y');

        return 0;

}
