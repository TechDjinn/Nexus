/*
CATAGORIZE CHARACTER
Categorize if the character is a digit, a alphabetic-,  or a special-character.

Created:        2025-02-09
Last modified:  2025-02-09
Author:         Christofer Sundström
*/

#include <stdio.h>

void catagorize_character(char character);

int main(void)
{
    // Test: Letters
    catagorize_character('A');
    catagorize_character('H');
    catagorize_character('Z');
    catagorize_character('a');
    catagorize_character('j');
    catagorize_character('z');
    printf("\n");

    // Test: Digits
    catagorize_character('1');
    catagorize_character('2');
    catagorize_character('5');
    catagorize_character('7');
    catagorize_character('9');
    catagorize_character('0');
    printf("\n");

    // Test: Special characters
    catagorize_character('&');
    catagorize_character('/');
    catagorize_character('#');
    catagorize_character('@');
    printf("\n");

    return 0;
}

void catagorize_character(char c) 
{
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
        printf("%c is an alphabetic character.\n", c);
    } 
    else if ( c >= '0' && c <= '9' ) {
        printf("%c is a digit.\n", c);
    } 
    else {
        printf("%c is a special character.\n", c);
    }
}