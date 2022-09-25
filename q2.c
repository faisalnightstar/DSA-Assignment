#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[50], se[100];
    scanf("%c\n%s\n%[^\n]s", &ch,&s,&se);
    printf("%c\n%s\n%s", ch,s,se);
    
    return 0;
}