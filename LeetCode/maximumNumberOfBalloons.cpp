#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> m;
        int min = 100000;
        
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n' || text[i] == 's')
                m[text[i]]++;
        }

        if (m.size() < 5)
            return 0;

        for (auto iter = m.begin(); iter != m.end(); iter++) {

            if (iter->first == 'b' || iter->first == 'a' || iter->first == 'n') {
                if (iter->second < 1)
                    return 0;
                else
                    if (iter->second < min)
                        min = iter->second;
            }
            else if (iter->first == 'l' || iter->first == 'o') {
                if (iter->second / 2 < 1)
                    return 0;
                else
                    if (iter->second / 2 < min)
                        min = iter->second / 2;
            }
        }

        return min;
    }
};