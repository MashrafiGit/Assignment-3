#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char s[])
{
    int length = strlen(s);
    int palindrome = 1;

    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            palindrome = 0;
        }

        i++;
        j--;
    }

    return palindrome;
}

int main()
{
    char s[1001];

    scanf("%s", s);

    int palindrome = is_palindrome(s);

    if (palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}