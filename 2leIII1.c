#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> /* toupper, isalpha */
void scan_word(int occurences[26]) {
// this function is retrieved from the line 12-16,
    char c;
        while ((c = getchar()) != '\n') {   //loops until all char are taken
            if (isalpha(c)){                //executes if char is an alphabet
            occurences[toupper(c) - 'A']++; //toupper of letter is added for later comparison
            }
        }
}
bool is_anagram(int occurences1[26], int occurences2[26]) {
//this function is retrived from 24-29
        for (int i = 0; i < 26; i++) {       //loops until i=26 (the amount of alphabet)
            if (occurences1[i] != occurences2[i]) {  //checks if the letters are similar
            return false;                   //returns bool false if later are not similar
            }
        }
    return true;    //returns bool true if letters are similar
}

int main(void) {

int letters1[26] = {0},
letters2[26] = {0};

printf("Enter first word: ");
scan_word(letters1);            //initialize the function scan_word for first word entry
printf("Enter second word: ");
scan_word(letters2);            //initialize the function scan_word for second word entry

if (is_anagram(letters1, letters2)) {   //a conditional statement which performs the bool function
    printf("The words are anagrams.\n");//executes if the function is true
}
else {
    printf("The words are not anagrams.\n");//executes if the function is false
}
}
