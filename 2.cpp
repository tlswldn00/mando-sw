#include <iostream>
using namespace std;

char space[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char t = 'X';

void board() {
    for (int i = 0; i < 3; i++) {
        cout << "---|---|---" << endl;
        cout << " " << space[i][0] << " | " << space[i][1] << " | " << space[i][2] << endl;
    }
    cout << "---|---|---" << endl;
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (space[i][0] == space[i][1] && space[i][1] == space[i][2])
            return true; 
        if (space[0][i] == space[1][i] && space[1][i] == space[2][i])
            return true;
    }
    if (space[0][0] == space[1][1] && space[1][1] == space[2][2])
        return true; 
    if (space[0][2] == space[1][1] && space[1][1] == space[2][0])
        return true; 
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'X' && space[i][j] != 'O')
                return false;
        }
    }
    return true;
}

void switchTurn() {
    if (t == 'X')
        t = 'O';
    else
        t = 'X';
}

int main() {
    int choice;
    char mark;

    do {
        board();
        switchTurn();

        cout << "Player " << t << ", enter a number: ";
        cin >> choice;

        if (t == 'X')
            mark = 'X';
        else
            mark = 'O';

        switch (choice) {
        case 1:
            if (space[0][0] == '1')
                space[0][0] = mark;
            break;
        case 2:
            if (space[0][1] == '2')
                space[0][1] = mark;
            break;
        case 3:
            if (space[0][2] == '3')
                space[0][2] = mark;
            break;
        case 4:
            if (space[1][0] == '4')
                space[1][0] = mark;
            break;
        case 5:
            if (space[1][1] == '5')
                space[1][1] = mark;
            break;
        case 6:
            if (space[1][2] == '6')
                space[1][2] = mark;
            break;
        case 7:
            if (space[2][0] == '7')
                space[2][0] = mark;
            break;
        case 8:
            if (space[2][1] == '8')
                space[2][1] = mark;
            break;
        case 9:
            if (space[2][2] == '9')
                space[2][2] = mark;
            break;
        default:
            cout << "Invalid move" << endl;
            switchTurn();
            break;
        }

    } while (!checkWin() && !checkDraw());

    board();

    if (checkWin()) {
        switchTurn();
        cout << "Player " << t << " wins!" << endl;
    }
    else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}