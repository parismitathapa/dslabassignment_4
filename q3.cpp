//student id:1024030309
//name:parismita thapa batch:2c22
//assignment 4 question 3 solution

#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue() {
    queue<int> q;
    int n, x;
    
    cout << "Enter number of elements (even number): ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }
    
    queue<int> firstHalf;
    int half = n / 2;
    
    for (int i = 0; i < half; i++) {
        firstHalf.push(q.front());
        q.pop();
    }
    
    cout << "\nOriginal Queue: ";
    queue<int> temp = firstHalf;
    queue<int> secondHalf = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    while (!secondHalf.empty()) {
        cout << secondHalf.front() << " ";
        secondHalf.pop();
    }
    cout << endl;
    
    cout << "Interleaved Queue: ";
    while (!firstHalf.empty()) {
        cout << firstHalf.front() << " ";
        firstHalf.pop();
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    cout << "INTERLEAVE QUEUE PROGRAM" << endl;
    cout << "Sample Input: 4 7 11 20 5 9" << endl;
    cout << "Sample Output: 4 20 7 5 11 9" << endl;
    cout << endl;
    
    interleaveQueue();
    
    return 0;
}
