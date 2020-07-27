#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	// Initiate an Integer Stack using vector
	vector<int> vStack;
	vector<int> vQueue;

	int inputInt;
	int choice = 99;
	do {
		cout << "\nMenu to manipulate integer stack and queue:\n";
		cout << "1: To push an integer on stack\n";
		cout << "2: To pop an integer from stack\n";
		cout << "3: To display stack info\n";
		cout << "11: To shift an integer on queue\n";
		cout << "12: To unshift an integer from queue\n";
		cout << "13: To display queue info\n";
		cout << "99: Finish entering\n";
		cout << "Please enter your choice (#): ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "\nEnter an integer to STACK: ";
			cin >> inputInt;
			vStack.push_back(inputInt);
			break;
		case 2:
			if (vStack.size() != 0)  vStack.pop_back();
			// break;  // intentionally skip to display STACK
		case 3:
			cout << "\n# of items on STACK: " << vStack.size();
			cout << "\nItems on STACK (from top to bottom): " << endl;
			for (unsigned int i = 0; i < vStack.size(); i++) {
				cout << vStack[i] << ' ';
			}
			cout << endl;
			break;
		case 11:
			cout << "\nEnter an integer to QUEUE: ";
			cin >> inputInt;
			vQueue.push_back(inputInt);
			break;
		case 12:
			if (vQueue.size() != 0)  vQueue.erase(vQueue.begin());
			// break;  // intentionally skip to display QUEUE
		case 13:
			cout << "\n# of items on QUEUE: " << vQueue.size();
			cout << "\nItems on QUEUE (from begin to end): " << endl;
			for (unsigned int i = 0; i < vQueue.size(); i++) {
				cout << vQueue[i] << ' ';
			}
			cout << endl;
			break;
		}
	} while (choice != 99);

	cout << "Ending Program\n";
	system("pause");
	return 0;
}