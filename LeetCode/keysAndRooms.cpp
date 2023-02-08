#include <unordered_set>
#include <vector>
#include <stack>
using namespace std;

// class Solution {
// public:
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         unordered_set<int> seen;
//         queue<int> q;
//         q.push(0);
//         seen.insert(0);

//         while(!q.empty()) {
//             int room_idx = q.front();
//             q.pop();
//             for (auto key : rooms[room_idx]) {
//                 if(seen.find(key) == seen.end()) {
//                     seen.insert(key);
//                     q.push(key);
//                 }
//             }
//         }

//         if (seen.size() != rooms.size())
//             return false;
//         else
//             return true;
//     }
// };

class Solution {
    public:
        bool canVisitAllRooms(vector<vector<int>>& rooms) {
            unordered_set<int> seen;
            stack<int> s;
            s.push(0);
            seen.insert(0);

            while (!s.empty()) {
                int room_idx = s.top();
                s.pop();
                for (auto key : rooms[room_idx]) {
                    if (seen.find(key) == seen.end())
                        s.push(key);
                        seen.insert(key);
                }
            }

            if (seen.size() != rooms.size())
                return false;
            else
                return true;
        }
};