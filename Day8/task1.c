/* Vowel Counts */

#include<stdio.h>
#include<string.h>

int main(){
    char string[34], i=0, count=0;

    printf("Enter Your String: ");
    gets(string);
    // scanf(" %s", &string);

    
    while (string[i] != '\0')
    {
        if (string[i]=='A'|| string[i]=='E'|| string[i]=='I'|| string[i]=='O'|| string[i]=='U'|| 
            string[i]=='a'|| string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u')
            {
                count++;
            }
        i++;
    }
    printf("Count of Vowels: %d", count);
    
}