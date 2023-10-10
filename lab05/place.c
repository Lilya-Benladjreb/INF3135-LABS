#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define POSTAL_CODE_SIZE 20
#define NAME_LENGTH 180
#define ADMIN_CODE_SIZE 20
#define MAX_SIZE 2000
#define BUFFER_SIZE 300

// Word Geodesic System coordinate
// See https://en.wikipedia.org/wiki/World_Geodetic_System#WGS84
typedef float wgs84;

struct place {                          // A geographical place
    char postal_code[POSTAL_CODE_SIZE]; // The postal code
    char name[NAME_LENGTH];             // The name of the place
    char admin_code[ADMIN_CODE_SIZE];   // The country code
    wgs84 latitude;                     // The latitude
    wgs84 longitude;                    // The longitude
};

struct list {                      // A list of geographical places
    struct place places[MAX_SIZE]; // The places
    unsigned int size;             // The current size of the list
};

/**
 * Initialize a list of places
 *
 * @param list  The list to initialize
 */
void initialize_list(struct list *list) {
    list->size = 0;
}

/**
 * Load a list of places from stdin
 *
 * @param list  The list to populate
 */
void load_list(struct list *list) {
    // À compléter
}

/**
 * Prints a list to stdout
 *
 * @param list  The list to print
 */
void print_list(const struct list *list) {
    // À compléter
}

/**
 * Sorts the given list by postal code
 *
 * @param list  The list to sort
 */
void sort_by_postal_code(struct list *list) {
    // À compléter
}

/**
 * Sorts the given list by latitude
 *
 * @param list  The list to sort
 */
void sort_by_latitude(struct list *list) {
    // À compléter
}

/**
 * Prints statistics about list on stdout
 *
 * @param list  The list
 */
void print_statistics(const struct list *list) {
    // À compléter
}
/**
 * Tests loading and printing of list
 */
void test_load_and_print(void) {
    struct list list;
    initialize_list(&list);
    load_list(&list);
    print_list(&list);
}

/**
 * Tests sorting by postal code
 */
void test_sorting_by_postal_code(void) {
    struct list list;
    initialize_list(&list);
    load_list(&list);
    sort_by_postal_code(&list);
    print_list(&list);
}

/**
 * Tests sorting by latitude
 */
void test_sorting_by_latitude(void) {
    struct list list;
    initialize_list(&list);
    load_list(&list);
    sort_by_latitude(&list);
    print_list(&list);
}

/**
 * Tests statistics
 */
void test_statistics(void) {
    struct list list;
    initialize_list(&list);
    load_list(&list);
    print_statistics(&list);
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        if (strcmp(argv[1], "load-and-print") == 0)
            test_load_and_print();
        else if (strcmp(argv[1], "by-postal-code") == 0)
            test_sorting_by_postal_code();
        else if (strcmp(argv[1], "by-latitude") == 0)
            test_sorting_by_latitude();
        else if (strcmp(argv[1], "statistics") == 0)
            test_statistics();
    }
    return 0;
}
