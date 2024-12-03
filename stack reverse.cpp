#include<iostream>
using namespace std;
class Stack {
    private:
        char arr[5];  
        int top;

    public:
        Stack() {
            top = -1;  
        }

        void push(char value) {
                top++;
                arr[top] = value;
             }

        char pop() {
                char popValue = arr[top];
                top--;
                return popValue;
        }

        void displayReversedString() {
            while (top >= 0) { 
                cout << pop();
            }
            cout << endl;
        }
};

int main() {
    Stack s1;
    string value = "zobia";
    for (int i = 0; i < value.length(); i++) {
        s1.push(value[i]);
    }
    cout << "Reversed String: ";
    s1.displayReversedString();
}

