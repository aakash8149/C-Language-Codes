//Write a program to input a word from the user and count the number of vowels and consonant in it.

#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int vowels = 0, consonants = 0, i;
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    for (i = 0; i < strlen(word); i++) {
        
        printf("s[%d]= '%c'\n",i,word[i]);
        
        
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            vowels++;
        } else 
        {
            consonants++;
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}

