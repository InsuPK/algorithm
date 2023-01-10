#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    string n;

    int num;
    int answer = 0;
    int temp = 0;
    int count = 0;
    bool minus = false;
    
    cin >> s;

    for (int i = 0; i <= s.length(); i++) {
        
        if (s[i] == '+' || s[i] == '-' || i == s.length()) {
            num = stoi(n);
            temp += num;
            n = "";
        } 
        else {
            n += s[i];
        }

        if (count == 0)
            answer = temp * 2;

        if (s[i] == '-') {
            minus = true;
            count++;
        } 
        else if (s[i] == '+'){
            minus = false;
        }

        if (minus == true || (i == s.length()) && count != 0) {
            answer -= temp;
            temp = 0;
        }
    }

    if (count == 0)
        answer = temp;

    cout << answer;

    return 0;
}

// 더 좋은 예시

// #include<iostream>
// #include<algorithm>
// #include<string.h>
// using namespace std;

// int len, tmp;
// int sum = 0;
// bool flag; // '-'가 등장했는지 체크
// char str[51];

// int main()
// {
// 	cin >> str;
// 	len = strlen(str); //식의 길이

// 	for (int i = 0; i <= len; i++)
// 	{

// 		if (str[i] == '+' || str[i] == '-' || i == len) // '+','-'가 등장했거나 혹은 수식의 끝일때
// 		{
// 			if (flag == false) //'-'등장 이전 모든 값 양수화
// 			{
// 				sum += tmp;
// 				tmp = 0;
// 			}
// 			else // (flag == true), '-'등장 이후로 모든 값 음수화
// 			{
// 				sum -= tmp;
// 				tmp = 0;
// 			}

// 			if (str[i] == '-') flag = true; // '-'등장 시 체크
				
// 		}
// 		else // tmp변수에 값 누적
// 		{
// 			tmp *= 10;
// 			tmp += str[i] - '0'; // char 데이터를 정수로 변환
// 		}
// 	}

// 	cout << sum;
// }