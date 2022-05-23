#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h> /* bool */

// declares functions
void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);


int main(void) {

    // arrays that keep track of the value of each letter from the 1st and 2nd word
    int first_word[26] = {0}, second_word[26] = {0};

    printf("Enter first word: ");
    // calls function scan_word
    scan_word(first_word);
    printf("Enter second word: ");
    scan_word(second_word);

    // calls function is_anagram
    if (is_anagram(first_word,second_word)) {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}

void scan_word(int occurrences[26]){
    char c;

    // points to base address of array
    int *p = occurrences;

    while ((c = getchar()) != '\n'){
        // adds value to the array/s
        // if the letter inputed is C.  'C' - 'A' = 2
        // then the value at occurences[2] will be added

        if (isalpha(c)){
            // p == &occurrences[...]
            p[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int occurrences1[26], int occurrences2[26]){

    // points to base addresses of arrays
    int *p1 = occurrences1, *p2 = occurrences2;

    for (int i = 0; i < 26; i++){

        // checks if both arrays have the same values throughout all its elements
        // returns false if values are not equal
        if (p1[i] != p2[i]){
            return false;
        }
    }
    return true;
}

