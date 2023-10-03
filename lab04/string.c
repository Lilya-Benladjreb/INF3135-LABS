#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * Returns the first repeated character in the string
 *
 * If no character is repeated, returns `'\0'`.
 */
char first_repeated(const char *s) {
    bool seen[256];
    for(unsigned int i = 0; i < 256; i++){
        seen[i] = false;
    }
    for(unsigned int i = 0; s[i] != '\0'; i++){
        unsigned int encodage = (unsigned int)s[i];
        if(seen[encodage]){
            return s[i];
        }else{
            seen[encodage] = true;
        }
    }
    return '\0';
}

/**
 * Returns the number of times the string t appears in another string s
 */
unsigned int num_occurrences(const char *s, const char *t) {
    unsigned int n = 0;
    char * o = strstr(s, t);
    while(o != NULL){
        n++;
        o = strstr(o+1, t);
    }
    return n;
}

void test_first_repeated(void) {
    printf("The first repeated character in \"%s\" is '%c'\n",
            "abracadabra", first_repeated("abracadabra"));
    printf("The first repeated character in \"%s\" is '%c'\n",
            "Linux Mint", first_repeated("Linux Mint"));
    printf("The first repeated character in \"%s\" is '%c'\n",
            "Ubuntu", first_repeated("Ubuntu"));
}

void test_num_occurrences(void) {
    unsigned int n;
    n = num_occurrences("abracadabra", "abr");
    printf("\"%s\" occurs %d times in \"%s\"\n",
            "abr", n, "abracadabra");
    n = num_occurrences("abracadabra", "a");
    printf("\"%s\" occurs %d times in \"%s\"\n",
            "a", n, "abracadabra");
    n = num_occurrences("ananas", "ana");
    printf("\"%s\" occurs %d times in \"%s\"\n",
            "ana", n, "ananas");
}

int main(int argc, char *argv[]) {
    char * s = "abracadara";
    char * needle = "a";

    if (argc == 2) {
        if (strcmp(argv[1], "fr") == 0)
            test_first_repeated();
        else if (strcmp(argv[1], "no") == 0)
            test_num_occurrences();
    }
    return 0;
}
