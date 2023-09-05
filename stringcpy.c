//W.A.P to copy string from one string to another string using user defined function.


#include<stdio.h>

void mystrcpy(char str1[30], char str2[30]);   // Function prototype 


int main()    //main function
{
 char str1[30], str2[30];
 int i;

 printf("Enter string:\n");
 gets(str1);
 
 mystrcpy(str2, str1);
 
 printf("Copied string is: %s", str2);
 
 return 0;
}


void mystrcpy(char str2[30], char str1[30])   //function definition
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
}
