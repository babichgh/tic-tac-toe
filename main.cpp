#include <iostream>

bool isTheGameOver(char field[3][3]) {
    if ((
        (field[0][0] == 'x' && field[0][1] == 'x' && field[0][2] == 'x') ||
        (field[1][0] == 'x' && field[1][1] == 'x' && field[1][2] == 'x') ||
        (field[2][0] == 'x' && field[2][1] == 'x' && field[2][2] == 'x')
        ) ||
        (
        (field[0][0] == 'x' && field[1][0] == 'x' && field[2][0] == 'x') ||
        (field[0][1] == 'x' && field[1][1] == 'x' && field[2][1] == 'x') ||
        (field[0][2] == 'x' && field[1][2] == 'x' && field[2][2] == 'x')
        ) ||
        (
        (field[0][0] == 'x' && field[1][1] == 'x' && field[2][2] == 'x') ||
        (field[0][2] == 'x' && field[1][1] == 'x' && field[2][0] == 'x')
        )) {
        std::cout << "x win!" << std::endl;
        return true;
    } else if ((
        (field[0][0] == 'o' && field[0][1] == 'o' && field[0][2] == 'o') ||
        (field[1][0] == 'o' && field[1][1] == 'o' && field[1][2] == 'o') ||
        (field[2][0] == 'o' && field[2][1] == 'o' && field[2][2] == 'o')
        ) ||
        (
        (field[0][0] == 'o' && field[1][0] == 'o' && field[2][0] == 'o') ||
        (field[0][1] == 'o' && field[1][1] == 'o' && field[2][1] == 'o') ||
        (field[0][2] == 'o' && field[1][2] == 'o' && field[2][2] == 'o')
        ) ||
        (
        (field[0][0] == 'o' && field[1][1] == 'o' && field[2][2] == 'o') ||
        (field[0][2] == 'o' && field[1][1] == 'o' && field[2][0] == 'o')
        )) {
        std::cout << "o win!\n" << std::endl;
        return true;
    } else {
        return false;
    }
}

int main() {
    char field[3][3];
    char player = 'x';
    while (true) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                field[i][j] = ' ';
            }
        }
        while (!isTheGameOver(field)) {
            int playerRow, playerCol;
            std::cout << "   1 2 3\n";
            for (int i = 0; i < 3; i++) {
                std::cout << i + 1 << " |";
                for (int j = 0; j < 3; j++) {
                    std::cout << field[i][j] << "|";
                }
                std::cout << "\n";
            }
            std::cout << "Player " << player << ": choose the row and the column:" << std::endl;
            std::cin >> playerRow >> playerCol;
            field[playerRow - 1][playerCol - 1] = player;

            if (player == 'x') {
                player = 'o';
            } else {
                player = 'x';
            }
        }
    }
}