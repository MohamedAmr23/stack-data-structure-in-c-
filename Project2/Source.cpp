#include<iostream>
#define max_size=100;
using namespace std;
class stack {
private:
	int items = [max - size];
	int top;
public:
	stack() { top = -1; }
	void push(int item);
	int pop();
	bool is_empty();
	bool is_full();
	void display() {
		for (int i = 0;i < top - 1; i++) {
			cout << items[i] <<" ";
		}

	}
int main() {


	return 0;
}
bool stack::is_empty() {
	if (top == -1)
		return true;
	return false;
}
bool stack::is_full() {
	if (top == max_size - 1)
		return true;
	return false;
}
void stack::push(int item) {
	if (is_full()) {
		cout << "The stack is full" << endl;
		exit(-1);
	}
	else {
		items[++top] = item;
	}
}
int stack::pop() {
	if (is_empty()) {
		cout << "The stack is empty" << endl;
		exit(-1);
	}
	else {
		int temp = items[top--];
		return temp;
	}
}

