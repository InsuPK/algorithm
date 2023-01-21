#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string code = "";
        int answer = 1;

        for (int i = 0; i < words.size(); i++) {
            code = " ";
            for (int j = 0; j < words[i].length(); j++) {
                code += morse[words[i][j] - 'a'];
            }
            words[i] = code;
        }
        sort(words.begin(), words.end());

        for (int i = 0; i < words.size() - 1; i++) {
            if (words[i] != words[i+1])
                answer++;
        }

        return answer;
    }
};

int main() {
    Solution s;
    vector<string> v = {"zocd","gjkl","hzqk","hzgq","gjkl"};
    cout << s.uniqueMorseRepresentations(v);

}