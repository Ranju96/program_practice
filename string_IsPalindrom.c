#include <stdio.h>
#include <string.h>

void   string_IsPalindrom(char str[]){
    
    int i, len, flag = 0;
    len = strlen(str);

    for(i=0; i<len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("%s is a palindrome", str);
    }
    else
    {
        printf("%s is not a palindrome", str);
    }

}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
      string_IsPalindrom(str);
    
    return 0;
}

