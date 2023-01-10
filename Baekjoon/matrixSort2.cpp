// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<pair<int, int>> matrix;

//     int n, a, b;

//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cin >> a >> b;
//         matrix.push_back(make_pair(b, a));
//     }

//     sort(matrix.begin(), matrix.end());

//     for (int i = 0; i < n; i++) {
//         cout << matrix[i].second << " " << matrix[i].first << "\n";
//     }

//     return 0;
// }



// #include <stdlib.h>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// typedef struct { // 좌표 저장할 구조체 선언
//     int x;
//     int y;
// } point;

// point sort[100001]; // 정렬한 좌표 넣을 배열

// void merge(point* arr, int first, int mid, int last) {
//     int i, j, k;
//     i = first;
//     j = mid + 1;
//     k = first; // index 관리할 변수

//     while (i <= mid && j <= last) { // 정렬 과정
//         if (arr[i].x < arr[j].x) 
//             sort[k++] = arr[i++];
//         else if (arr[i].x > arr[j].x)
//             sort[k++] = arr[j++];
//         else { // x 좌표가 서로 같을 때
//             if (arr[i].y < arr[j].y)
//                 sort[k++] = arr[i++];
//             else if (arr[i].y > arr[j].y)
//                 sort[k++] = arr[j++];
//         }
//     }

//     if (i <= mid) {
//         while (i <= mid) 
//             sort[k++] = arr[i++];
//     }
//     else {
//         while (j <= last) 
//             sort[k++] = arr[j++];
//     }
  
//     for (k = first; k <= last; k++) 
//         arr[k] = sort[k];
// }

// void mergesort(point* arr, int first, int last) {
//     int mid;
//     if (first < last) {
//         mid = (first + last) / 2;
//         mergesort(arr, first, mid); // 배열 왼쪽 부분 정렬
//         mergesort(arr, mid + 1, last); // 배열 오른쪽 부분 정렬
//         merge(arr, first, mid, last);
//     }
// }

// int main() {  
//     cin.tie(NULL);
  
//     int n;
//     cin >> n;

//     point* arr = (point*)malloc(sizeof(point)*n); // n개 만큼 동적할당
  
//     for (int i = 0; i < n; i++)
//       cin >> arr[i].x >> arr[i].y;
    
//     mergesort(arr, 0, n-1);
  
//     for (int i = 0; i < n; i++)
//       cout << arr[i].x << " " << arr[i].y << '\n';

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} coord; //coord형의 구조체 선언

int compare(const void *a, const void *b)
{
    coord A = *(coord *)a; //coord형의 A로 입력받은 a를 사용할 수 있게한다.
    coord B = *(coord *)b;
    if (A.x > B.x) // 구조체의 x를 끌고와서 사용한다. 오름차순 정렬
        return 1;
    else if (A.x == B.x) // x좌표가 같다면,
    {
        if (A.y > B.y) // y좌표를 비교한다. 오름차순 정렬
            return 1;
        else
            return -1; // 그게 아니라면 -1반환.
    }
    return -1; // A.x < B.x면 -1
}

int main()
{
    int n, i;
    scanf("%d", &n);
    i = 0;
    coord arr[n]; // 구조체형으로 배열을 선언한다.
    while (i < n)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
        // 구조체배열로 arr[0]의 x값,y값 각각 설정하면서 간다.
        i++;
    }
    qsort(arr, n, sizeof(coord), compare); // 퀵정렬 사용
    i = 0;
    while (i < n)
    {
        printf("%d %d\n", arr[i].x, arr[i].y); // 정렬된 배열 출력
        i++;
    }
}