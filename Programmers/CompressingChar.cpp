#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.length();
    int count = 1;
    string repetition;
    string result;
    
    for (int i = 1; i <= s.length()/2; i++) {
        repetition = s.substr(0, i);
        for (int j = i; j < s.length(); j += i) {
            if (repetition.compare(s.substr(j, i)) == 0) {
                count++;
            }
            else {
                if (count > 1)
                    result += to_string(count);
                result += repetition;
                repetition = s.substr(j, i);
                count = 1;
            }
        }
        if (count > 1)
            result += to_string(count);
        result += repetition;
        cout << result << endl;
        if (answer > result.length())
            answer = result.length();
        count = 1;
        result = "";
    }

    return answer;
}

int main() {
    string s = "xababcdcdababcdcd";
    cout << solution(s);
}