//student id:1024030309
//name:parismita thapa batch:2c22
//assignment 4 question 1 solution

#include <iostream>
using namespace std;

class SimpleQueue {
private:
    int arr[100];
    int front, rear, size;

public:
    SimpleQueue() {
        front = rear = -1;
        size = 100;
    }
    
    void enqueue(int x) {
        if (rear == size - 1) {
            cout << "Queue is Full" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << "Enqueued successfully" << endl;
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << arr[front] << " dequeued successfully" << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return rear == size - 1;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }
};

int main() {
    SimpleQueue q;
    int choice, value;
    
    do {
        cout << "\nSIMPLE QUEUE OPERATIONS" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Check if Empty" << endl;
        cout << "4. Check if Full" << endl;
        cout << "5. Display Queue" << endl;
        cout << "6. Peek (Front Element)" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                cout << (q.isEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;
                break;
            case 4:
                cout << (q.isFull() ? "Queue is Full" : "Queue is not Full") << endl;
                break;
            case 5:
                q.display();
                break;
            case 6:
                q.peek();
                break;
            case 7:
                cout << "Exiting program" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 7);
    
    return 0;
}
