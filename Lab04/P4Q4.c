#include <stdio.h>
int main(){
    char letter;
    printf("Enter a vowel letter: ");
    scanf("%c", &letter);

    switch(letter){
        case 'a': printf("'a' is a vowel letter");break;
        case 'e': printf("'e' is e vowel letter");break;
        case 'i': printf("'i' is i vowel letter");break;
        case 'o': printf("'o' is o vowel letter");break;
        case 'u': printf("'u' is u vowel letter");break;
        default:printf("'%c' is not a vowel letter", letter);
    }
}
