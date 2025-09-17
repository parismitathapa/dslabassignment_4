//student id:1024030309
//name:parismita thapa batch:2c22
//assignment 4 question 4 solution

#include <iostream>
#include <queue>
#include <string>
using namespace std;

void findFirstNonRepeating() {
    string s;
    cout << "Enter string (space-separated characters): ";
    getline(cin, s);
    
    int freq[256] = {0}; 
    queue<char> q;
    
    cout << "\nProcessing each character:" << endl;
    cout << "Output: ";
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c == ' ') continue;
        
        freq[c]++;

        q.push(c);
        
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }
    
        if (q.empty()) {
            cout << "-1 ";
        } else {
            cout << q.front() << " ";
        }
    }
    cout << endl;
}

void findFirstNonRepeatingSimple() {
    cout << "\nSimple version - Enter characters one by one:" << endl;
    cout << "Enter number of characters: ";
    int n;
    cin >> n;
    
    int freq[256] = {0};
    queue<char> q;
    
    cout << "Enter " << n << " characters: ";
    cout << "\nOutput: ";
    
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        
        freq[c]++;
        q.push(c);
        
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }
        
        if (q.empty()) {
            cout << "-1 ";
        } else {
            cout << q.front() << " ";
        }
    }
    cout << endl;
}

int main() {
    cout << "=== FIRST NON-REPEATING CHARACTER PROGRAM ===" << endl;
    cout << "Sample Input: a a b c" << endl;
    cout << "Sample Output: a -1 b b" << endl;
    cout << endl;
    
    int choice;
    cout << "Choose input method:" << endl;
    cout << "1. Enter characters one by one" << endl;
    cout << "2. Enter as string" << endl;
    cout << "Choice: ";
    cin >> choice;
    
    if (choice == 1) {
        findFirstNonRepeatingSimple();
    } else {
        cin.ignore(); 
        findFirstNonRepeating();
    }
    
    return 0;
}
