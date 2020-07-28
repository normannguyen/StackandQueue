#include <iostream>
#include <stack>
using namespace std;

int main() {
	// Initiate an Integer Stack using vector
	stack<int> Stack;

	int value;

	int choice = 99;
	do {
		cout << "\n**************\n";
		cout << "\n1. Empty";
		cout << "\n2. Add";
		cout << "\n3. Remove";
		cout << "\n4. Display";
		cout << "\n5. Update";
		cout << "\n6. Exit";
		cout << "\n\nPlease enter the # listed above: ";
		cin >> choice;

		switch (choice) {
		case 1:
			Stack.empty();
			cout << "Everything is empty." << endl;
			break;
		case 2:
			cout << "Insert a number: ";
			cin >> value;
			Stack.push(value);
			break;  
		case 3:
			Stack.pop();
			cout << "Number is deleted.";
			break;
		case 4:
			cout << "Size: " << Stack.size() << endl;
			while (!Stack.empty())
			{
				cout << '\t' << Stack.size();
				Stack.pop();
			}
			break;
		case 5:
			cout << Stack.top();
			break;
		}
	} while (choice != 6);

	cout << "Ending Program\n";
	system("pause");
	return 0;
}