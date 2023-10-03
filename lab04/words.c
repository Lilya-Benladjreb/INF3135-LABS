#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(const char s[]) {
    unsigned int i = 0, n = strlen(s);
    while (i < n / 2) {
        if (s[i] != s[n - i - 1]) return false;
        ++i;
    }
    return true;
}

bool has_double(const char s[]) {
    if (s[0] == '\0') return false;
    for (unsigned int i = 1; s[i] != '\0'; ++i)
        if (s[i - 1] == s[i]) return true;
    return false;
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        printf("Analyzing the argument '%s'\n", argv[1]);
        printf("Is palindrome? %s\n",
               is_palindrome(argv[1]) ? "yes" : "no");
        printf("Has double? %s\n",
               has_double(argv[1]) ? "yes" : "no");
    } else {
        fprintf(stderr, "Error: wrong number of arguments\n");
    }
    return 0;
}
