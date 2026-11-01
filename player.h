#ifndef PLAYER_H
#define PLAYER_H

// Textbook Chapter 6 - Structures
// Store a player's name, jersey number, and points
struct Player {
    char name[32];
    int jersey;
    int points;
};

// Textbook Chapter 6 - Structure pointers
// Print all the player's information
void print_player(const struct Player *p);

// Textbook Chapter 6 - Structure initialization
// Set the player's name, jersey, and points
void init_player(struct Player *p, const char name[], int jersey, int points);

// Textbook Chapter 6 - Accessing members
// Return the player's points
int get_points(const struct Player *p);

// Textbook Chapter 6 - Updating members
// Add points to the player's score
void add_points(struct Player *p, int more);

// Textbook Chapter 6 - Comparing members
// Check whether two players have the same jersey number
int same_jersey(const struct Player *a, const struct Player *b);

#endif