#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, char *argv[]) {
	Stack<int> stack(32);
	stack.Push(3);
	stack.Push(8);
	stack.Push(25);

	cout << "Current Stack: ";
	stack.DisplayStackData();
	cout << "Now popping, value should be 25, actual value: " << stack.Pop() << endl;
	cout << "Current Stack: ";
	stack.DisplayStackData();

	stack.ClearStack();
	cout << "Current Stack: ";
	stack.DisplayStackData();
	stack.Push(3);
	stack.Push(8);
	stack.Push(25);

	cout << "Current Stack: ";
	stack.DisplayStackData();

	Stack<char> charStack;
	charStack.Push('o');
	charStack.Push('l');
	charStack.Push('l');
	charStack.Push('e');
	charStack.Push('h');

	cout << "Current Stack: ";
	charStack.DisplayStackData();

	system("PAUSE");
	return 0;
}

