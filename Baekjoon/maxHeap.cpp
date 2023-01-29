#include <iostream>
#define size (100000)

using namespace std;

struct Heap {
    int data[size];
    int heapSize;

    Heap() {
        heapSize = 0;
    }
};

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

bool empty(Heap *h) {
    return (h->heapSize == 0) ? true : false;
}

void push(Heap *h, int data) {
    h->data[++h->heapSize] = data;
    
    int child = h->heapSize;
    int parent = child / 2;

    while (child > 1 && h->data[child] > h->data[parent]) {
        swap(h->data[child], h->data[parent]);
        child = parent;
        parent = child / 2;
    }
}

int pop(Heap *h) {
    if (empty(h)) return 0;

    int num = h->data[1];
    
    swap(h->data[1], h->data[h->heapSize]);
    h->heapSize--;

    int parent = 1;
    int child = parent * 2;

    if (child + 1 <= h->heapSize && h->data[child] < h->data[child+1])
        child++;

    while (child <= h->heapSize && h->data[child] > h->data[parent]) {
        swap(h->data[parent], h->data[child]);
        parent = child;
        child = parent * 2;

        if (child + 1 <= h->heapSize && h->data[child] < h->data[child+1])
            child++;
    }

    return num;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    Heap *h = new Heap();
    int n;
    int x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0)
            cout << pop(h) << "\n";
        else
            push(h, x);
    }

    return 0;
}