#include <string>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        string answer;
        int index = 0;

        if (title.length() > 2 && title[1] != ' ' && title[2] != ' ')
            answer = toupper(title[0]);
        else
            answer = tolower(title[0]);

        for (int i = 1; i < title.length(); i++) {
            if ((title[i+1] != '\0' && title[i+2] != '\0') && (title[i-1] == ' ' && title[i+1] != ' ' && title[i+2] != ' ')) {
                answer += toupper(title[i]);
            }
            else
                answer+= tolower(title[i]);
        }

        return answer;
    }
};