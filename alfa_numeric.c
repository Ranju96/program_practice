#include <stdio.h>
#include <string.h>
void alfa_numeric(char str[])
{
    
    int i;
     for( i = 0; i < strlen(str); i++)
     {
        if(str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
        else
        {
           if(str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32; 
        }
     }
    
    printf("Uppercase version of the string: %s", str);
    
}

int main() {
    char string[100];
    printf("Enter a string of alphanumeric characters in lowercase: ");
    scanf("%s", string);
    alfa_numeric(string);
   
    return 0;
}

