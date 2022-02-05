#include <stdio.h>
int main()
{
    char str[20];
    char *p;
    printf("Enter any string: ");
    scanf("%s",&str);
    p=str; //assign the base adress of 'str' into 'p'
    printf("The input string is: ");
    while(*p!='\0')   //'\0' signifies end of the string
    {
      printf("%c",*p++);
    }
return 0;
}
