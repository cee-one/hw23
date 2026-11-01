/**
 * @file main.c
 * @brief  main program
 *
 * @author Sione F
 * @date 2026-11-04
 */

#include <stdio.h>
#include "player.h"

int main(void) {
    // Textbook Chapter 6 - Structure initialization
    // Create two Player structures
    struct Player player1;
    struct Player player2;


    // Give each player a name, jersey, and points
    // Both players have different jersey numbers
    init_player(&player1, "Sione", 12, 25);
    init_player(&player2, "Alex", 7, 18);


    // Textbook Chapter 6 - Structure members
    // Print both players using print_player
    printf("Player 1:\n");
    print_player(&player1);

    printf("\nPlayer 2:\n");
    print_player(&player2);


    // Textbook Chapter 6 - Accessing members
    // Display the first player's points
    printf("\nPoints before: %d\n", get_points(&player1));


    // Textbook Chapter 6 - Updating through pointers
    // Add 10 points to the first player
    add_points(&player1, 10);

    // Print the updated points and player information
    printf("Points after: %d\n", get_points(&player1));

    printf("\nUpdated Player 1:\n");
    print_player(&player1);


    // Textbook Chapter 6 - Comparing structure members
    // Create another player with the same jersey as player1
    struct Player player3;

    init_player(&player3, "Jordan", 12, 15);

    // Compare two players with the same jersey
    printf("\nSame jersey: %d\n", same_jersey(&player1, &player3));

    // Compare two players with different jerseys
    printf("Different jersey: %d\n", same_jersey(&player1, &player2));


    // Textbook Chapter 6 - NULL handling
    // Test a NULL pointer without crashing
    printf("\nTesting NULL player:\n");
    print_player(NULL);

    printf("NULL points: %d\n", get_points(NULL));

    return 0;
}