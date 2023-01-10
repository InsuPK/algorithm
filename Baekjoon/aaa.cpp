#include<iostream>
#include<queue>
using namespace std;

int main() {

	//큐 선언
	queue<int> que;

	//큐에 요소 추가하기
	for (int i = 0; i < 5; i++) {
		que.push(i);
	}

	//요소 삭제하기
	cout << que.front() << endl;
    que.pop();
    cout << que.front() << endl;
    cout << que.front() << endl;
    cout << que.front() << endl;
    cout << que.front() << endl;
	//que.pop();
	
	//큐의 전체요소 출력하기
	// while (!que.empty()) {
	// 	cout << que.front() << " ";
	// 	que.pop();
	// }


	return 0;
}