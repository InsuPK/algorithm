#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int index = 0;
    
    sort(people.begin(), people.end());
    
    while (index < people.size()) {
        int num = people.back();
        people.pop_back();
        if (num + people[index] <= limit) {
            answer++;
            index++;
        }
        else {
            answer++;
        }
    }
    
    return answer;
}