/**
 * @file player.c
 * @brief Functions for storing and updating player information.
 *
 * @author Sione F
 * @date 2026-11-04
 */

#include "player.h"
#include <stdio.h>
#include <string.h>


void print_player(const struct Player *p) {
    // Textbook Chapter 6 - Structure pointers
    // Check whether the player pointer is NULL
    if (p == NULL) {
        return;
    }

    // Print the player's name using ->
    printf("Name: %s\n", p->name);

    // Print the jersey number
    printf("Jersey: %d\n", p->jersey);

    // Print the player's points
    printf("Points: %d\n", p->points);
}


void init_player(struct Player *p, const char name[], int jersey, int points) {
    // Textbook Chapter 6 - Structure initialization
    // Return if the player pointer is NULL
    if (p == NULL) {
        return;
    }

    // Check whether the name is NULL
    if (name == NULL) {

        // If NULL, make the name empty
        p->name[0] = '\0';

    } else {

        // Otherwise, copy the name with a size limit
        strncpy(p->name, name, sizeof(p->name) - 1);

        // Make sure the name ends with '\0'
        p->name[sizeof(p->name) - 1] = '\0';
    }

    // Set the jersey number
    p->jersey = jersey;

    // Set the player's points
    p->points = points;
}


int get_points(const struct Player *p) {
    // Textbook Chapter 6 - Accessing members
    // Return zero if the pointer is NULL
    if (p == NULL) {
        return 0;
    }

    // Return the player's points
    return p->points;
}


void add_points(struct Player *p, int more) {
    // Textbook Chapter 6 - Updating members
    // Return if the player pointer is NULL
    if (p == NULL) {
        return;
    }

    // Add more points to the existing score
    p->points += more;
}


int same_jersey(const struct Player *a, const struct Player *b) {
    // Textbook Chapter 6 - Comparing members
    // Return zero if either pointer is NULL
    if (a == NULL || b == NULL) {
        return 0;
    }

    // Compare the jersey numbers
    if (a->jersey == b->jersey) {
        return 1;
    }

    // Otherwise, return zero
    return 0;
}