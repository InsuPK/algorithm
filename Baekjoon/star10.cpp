#include <iostream>

using namespace std;

void star(int i, int j, int n) {
    if (n == 1) {
        cout << "*";
        return;
    }
    else if ((i/(n/3)) % 3 == 1 && (j/(n/3)) % 3 == 1) {
        cout << " ";
        return;
    }

    star(i, j, n/3);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            star(i, j, n);
        }
        cout << "\n";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// void go(int n, int start, int mid, int end){

//     cout << "go:" << n << ' ' << start << ' ' << mid << ' ' << end << '\n';
//     if(n==1){
//         cout<<start<<" "<<end<<"\n";
//         return;
//     }
//     go(n-1,start, end, mid);
//     cout<<start<<" "<<end<<"\n";
//     go(n-1, mid, start, end);
// }

// int main(){
//     ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//     int n;
//     cin>>n;
//     cout<<(1<<n)-1<<"\n";
//     go(n, 1,2,3);

//     return 0;
// }