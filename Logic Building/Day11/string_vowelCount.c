#include<stdio.h>
#include<string.h>

int main(){

    int count=0;
    char vowel[90];

    printf("Enter a String: ");
    fgets(vowel, sizeof(vowel), stdin);

    for (int i = 0; i < strlen(vowel) ; i++)
    {
        if ( vowel[i] =='a' || vowel[i]=='e' || vowel[i]=='i' || vowel[i]=='o' || vowel[i]=='u' ||
             vowel[i]=='A'  || vowel[i]=='E' || vowel[i]=='I' || vowel[i]=='O' || vowel[i]=='U')
        {
            count++;
        } 
    }
    printf("Vowel Count in String is: %d", count);
}