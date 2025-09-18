#include <iostream>

int main() {
    while (true) {
        char field[3][3];

        char player;
        std::cout << "Choose:\nx - cross; o - zero" << std::endl;
        std::cin >> player;
        if (player != 'x' || player != 'o') {
            std::cout << "Please, choose currectly" << std::endl;
            continue;
        }

        int playerCol, playerRow;
        for (int i = 0; i < 3; i++) {
            std::cout << "|";
            for (int j = 0; j < 3; j++) {
                std::cout << field[i][j] << "|";
            }
            std::cout << "\n";
        }
        std::cout << "Choose the column and the row:" << std::endl;
        std::cin >> playerCol >> playerRow;
    }
}