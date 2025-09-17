//student id:1024030309
//name:parismita thapa batch:2c22
//assignment 4 question 5 solution

#include <iostream>
#include <queue>
using namespace std;

class StackTwoQueues {
private:
    queue<int> q1, q2;
    
public:
    void push(int x) {

        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
        cout << x << " pushed to stack" << endl;
    }
    
    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << q1.front() << " popped from stack" << endl;
        q1.pop();
    }
    
    void top() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << q1.front() << endl;
        }
    }
    
    bool empty() {
        return q1.empty();
    }
    
    void display() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        
        queue<int> temp = q1;
        cout << "Stack (top to bottom): ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

class StackOneQueue {
private:
    queue<int> q;
    
public:
    void push(int x) {
        int size = q.size();

        q.push(x);

        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << x << " pushed to stack" << endl;
    }
    
    void pop() {
        if (q.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << q.front() << " popped from stack" << endl;
        q.pop();
    }
    
    void top() {
        if (q.empty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << q.front() << endl;
        }
    }
    
    bool empty() {
        return q.empty();
    }
    
    void display() {
        if (q.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        
        queue<int> temp = q;
        cout << "Stack (top to bottom): ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

void testTwoQueues() {
    StackTwoQueues s;
    int choice, value;
    
    do {
        cout << "\n STACK USING TWO QUEUES" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Check if Empty" << endl;
        cout << "5. Display Stack" << endl;
        cout << "6. Back to main menu" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.top();
                break;
            case 4:
                cout << (s.empty() ? "Stack is Empty" : "Stack is not Empty") << endl;
                break;
            case 5:
                s.display();
                break;
            case 6:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 6);
}

void testOneQueue() {
    StackOneQueue s;
    int choice, value;
    
    do {
        cout << "\n STACK USING ONE QUEUE " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Check if Empty" << endl;
        cout << "5. Display Stack" << endl;
        cout << "6. Back to main menu" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.top();
                break;
            case 4:
                cout << (s.empty() ? "Stack is Empty" : "Stack is not Empty") << endl;
                break;
            case 5:
                s.display();
                break;
            case 6:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 6);
}

int main() {
    int choice;
    
    do {
        cout << "\n STACK IMPLEMENTATION USING QUEUES" << endl;
        cout << "1. Stack using Two Queues" << endl;
        cout << "2. Stack using One Queue" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                testTwoQueues();
                break;
            case 2:
                testOneQueue();
                break;
            case 3:
                cout << "Exiting program " << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 3);
    
    return 0;
}
