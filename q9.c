#include <stdio.h>
#include <conio.h>


void displayGrid(char grid[5][5], int itemsCollected) {
    system("cls");
	printf("Grid:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\nItems collected: %d\n\n", itemsCollected);
}

void movePlayer(char grid[5][5], int *playerRow, int *playerCol, char direction) {
    int newRow = *playerRow;
    int newCol = *playerCol;

    switch (direction) {
        case 'W': case 'w': newRow--; break;
        case 'S': case 's': newRow++; break;
        case 'A': case 'a': newCol--; break;
        case 'D': case 'd': newCol++; break;
        default:
            return;
    }


    if (newRow >= 0 && newRow < 5 && newCol >= 0 && newCol < 5 && grid[newRow][newCol] != 'X') {
        *playerRow = newRow;
        *playerCol = newCol;
    }
}





void main() {
    char grid[5][5] = {
        {' ', ' ', ' ', 'T', 'X'},
        {' ', ' ', 'X', ' ', ' '},
        {' ', 'T', ' ', ' ', 'X'},
        {' ', ' ', ' ', ' ', ' '},
        {'X', ' ', 'X', ' ', 'P'}
    };

    int playerRow = 4, playerCol = 4;
    int itemsCollected = 0;
    char input;

    while (1) {
        displayGrid(grid, itemsCollected);
        printf("Move Instructions ft.Izaan <3 \nWASD KEYs\n");
        printf("(W: up, S: down, A: left, D: right, Q:quit)\n");
        input = getch();
        
        if (input == 'Q' || input == 'q') {
            printf("Game Over! You collected %d items.\n", itemsCollected);
            break;
        }

        int prevRow = playerRow;
        int prevCol = playerCol;

        movePlayer(grid, &playerRow, &playerCol, input);

		if (grid[playerRow][playerCol] == 'T') {
            printf("Item collected!\n");
            itemsCollected++;
            grid[playerRow][playerCol] = ' ';
        }

        grid[prevRow][prevCol] = ' ';
        grid[playerRow][playerCol] = 'P';
    }
}
