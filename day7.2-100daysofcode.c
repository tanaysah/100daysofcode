//day 7.2- 100 days of code
//wap to input a character and cehkc wheter its a vowel or consotnant

#include <stdio.h>

int main() 
{
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    printf("VOWEL");
    else
    printf("CONSONANT");
}
