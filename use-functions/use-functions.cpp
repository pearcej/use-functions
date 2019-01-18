/* Using functions
by <your name>*/


#include <iostream>
#include <string>

using namespace std;


//TO DO: create a function that would be able to create a top  for the tree
void top() {
	cout << "                     _____________________________" << endl;
	return;
}


void branch_right() {
	cout << "|               / /" << endl;
	cout << "|               \/" << endl;
	cout << "|      _____/___/" << endl;
	cout << "|_____/         \ " << endl;
	cout << "|/              /\_" << endl;

}

//TO DO: Create a branch for the left side of the tree.
void branch_left() {
	cout << "";
}

//TO DO: make so this function draws differnt size of the tree dependant on the user input. And also Make it so it utilizes the branch 
void tree(int height, int width, int branches) {
	for (int i = 0; i < 5; i++) {
		cout << "                               |         |" << endl;

	}
	return;
}

//TO DO create a function that draws tree roots.
void root() {
	cout << "                     _____________________________" << endl;
	return;
}


// DO NOT CHANGE THE MAIN
int main() {

	string s;

	int height;
	int width;
	int branches;
	cout << "How Long is your tree:  ";
	cin >> height;
	cout << "How Wide is your tree:  ";
	cin >> width;
	cout << "How many branches does it have:  ";
	cin >> branches;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	top();
	tree(height, width, branches);
	root();

	int count = 0;
	char endit;
	cin >> endit;

	return 0;
}

