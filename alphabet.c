#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int capital_vowel, dicapital_vowel;
    printf("Enter a letter from the alphabet: ");
    scanf("%c", &a);

    capital_vowel = (a == 'A' || a == 'E' || a == 'I' || a== 'O' || a == 'U');

    dicapital_vowel = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');

    if (capital_vowel || dicapital_vowel)
    {
        printf("%c is a vowel.", a);
    }
    else
    {
        printf("%c is a consonant.", a);
    }
    return 0;
}
