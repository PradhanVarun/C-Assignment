// W.A.P to check the number is palindrome or not.
#include <stdio.h>
int main()
{
    int n, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
 
    int num= n;  //To store the original number in the variable num
 
    
    while (n > 0)   //Reverse the number and store it in variable rev
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
 
    if (num == rev)  // check if original number is same as reversed number or not
    {
        printf("%d is a palindrome number.", num);
    }
    else
    {
        printf("%d is not a palindrome number.", num);
    }
 
    return 0;
}
