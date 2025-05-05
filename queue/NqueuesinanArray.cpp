#include <iostream>
using namespace std;

class LQueue {
public:
    int n;
    int k;
    int *front;
    int *rear;
    int freespot;
    int *next;
    int *arr;

    LQueue(int n, int k) {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < k; i++) {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        arr = new int[n];
        freespot = 0;
    }

    void enqueue(int data, int qNo) {
        // Check for overflow
        if (freespot == -1) {
            cout << "Can't insert element, no space available!" << endl;
            return;
        }

        // Get the next free index
        int index = freespot;

        // Update freespot
        freespot = next[index];

        // Check whether it's the first element
        if (front[qNo - 1] == -1) {
            front[qNo - 1] = index;
        } else {
            next[rear[qNo - 1]] = index;
        }

        // Update next
        next[index] = -1;

        // Update rear
        rear[qNo - 1] = index;

        // Push element
        arr[index] = data;
    }

    int dequeue(int qNo) {
        // Check for underflow
        if (front[qNo - 1] == -1) {  // FIXED: Correct indexing
            cout << "Queue is empty" << endl;
            return -1;
        }

        // Find the index to remove
        int index = front[qNo - 1];

        // Update front (move forward)
        front[qNo - 1] = next[index];

        // If the queue becomes empty, reset the rear pointer
        if (front[qNo - 1] == -1) {
            rear[qNo - 1] = -1;  // FIXED: Reset rear if queue is empty
        }

        // Manage free slot
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }
};

int main() {
    LQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(23, 1);

    cout << q.dequeue(1) << endl;  // 10
    cout << q.dequeue(2) << endl;  // 20
    cout << q.dequeue(1) << endl;  // 15
    cout << q.dequeue(1) << endl;  // 23
    cout << q.dequeue(1) << endl;  // Queue is empty

    return 0;
}
