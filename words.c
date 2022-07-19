/* Write a program to find the number of words in a file or string? */
#include<stdio.h>
#include <string.h>
 
int main()
{
    char str[1000];  
    int i,words=0;
 
    printf("Enter  the string : ");
    scanf("%[^\n]%*c", str);
     
    for(i=0;str[i];i++)  
    {
    	if(str[i]==32) /* 32 is ASCII value of space */

    	 words++;
 
 	}
 	if(i>0)
 	 words++;
     
    printf("no of words in string = %d\n",words);
    
    return 0;
}
