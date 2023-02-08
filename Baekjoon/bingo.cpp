#include <iostream>
using namespace std;

//빙고판
int board[5][5];
//동그라미용 빙고판
int bingo[5][5] = {0, };
//사회자 숫자
int host[25];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int index = 0;
    int count = 0;
    int input;
    int num;
    bool row = true;
    bool column = true;
    bool diagonal1 = true;
    bool diagonal2 = true;
    bool flag = false;

    //빙고판 채우기
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> input;
            board[i][j] = input;
        }
    }

    //사회자 숫자 받아오기
    for (int i = 0; i < 25; i++) {
        cin >> input;
        host[i] = input;
    }

    while (true) {
        //차례대로 사회자 숫자 받아오기
        num = host[index];

        //사회자 숫자와 같으면 빙고판 동그라미 치기
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (num == board[i][j]) {
                    bingo[i][j]++;
                    flag = true;
                    break;
                }
            }
            if (flag == true)
                break;
        }

        //가로 세로 빙고 확인하기
        for (int i = 0; i < 5; i++) {
            row = true;
            column = true;
            for (int j = 0; j < 5; j++) {              
                if (bingo[i][j] < 1) {
                    row = false;
                }
                if (bingo[j][i] < 1) {
                    column = false;
                }
            }
            if (row == true)
                count++;
            if (column == true)
                count++;
        }

        //대각선 빙고 확인하기
        for (int i = 0; i < 5; i++) {
            if (bingo[i][i] < 1)
                diagonal1 = false;
            if (bingo[4-i][i] < 1)
                diagonal2 = false;
        }
        if (diagonal1 == true) {
            count++;
        }
        if (diagonal2 == true) {
            count++;
        }
        diagonal1 = true;
        diagonal2 = true;

        //빙고 3줄이면 break
        if (count >= 3)
            break;

        //변수 초기화
        index++;
        count = 0;
        flag = false;
    }

    cout << index + 1;

    return 0;
}