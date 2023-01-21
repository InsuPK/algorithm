#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> sm;
        unordered_map<char, int> tm;
        for (auto sc : s) sm[sc]++;
        for (auto tc : t) tm[tc]++;
        for (auto iter : tm) if (iter.second != sm[iter.first]) return iter.first;
        return ' ';
    }
};