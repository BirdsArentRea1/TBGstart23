#include<iostream>
using namespace std;

void Chance();

int main() {

	int room = 1;
	char direction;

	while (1) {
		switch (room) {
		case 1:
			cout << "You wake up in a cave." << endl;
			cout << "You can not remember how you got there." << endl;
			cout << "look up (U)" << endl;
			cin >> direction;
			if (direction == 'U')
				cout << "You see light." << endl;
				cout << "You must have fallen in to the cave" << endl;
				cout << "You can not climb back up" << endl;
				cout << "Look around (L)" << endl;
			if (direction == 'L')
				cout << "You see a see a fissure that you can maybe fit through." << endl;
				cout << "You also see a skeleton. it looks like they fell down too." << endl;
				cout << "Go too the Fissure (F). Go to the Skeleton (S)." << endl;
				if (direction == 'F')
					room = 2;
			else if (direction == 'S')
				cout << "You walk to the Skeleton" << endl;
				cout << "The Skeleton has a Rusty knife and a Compass." << endl;
				cout << "Take items (T)" << endl;
			if (direction == 'T')
				cout << "You take items. Go to Fissure? (F)" << endl;
			if (direction == 'F')
				room = 2;
			break;
		case 2:
			cout << "You enter a large cavern" << endl;
			cout << "There are tunnles to the North and South" << endl;
			cout << "Go North (N), or Go South (S), or flip a coin (F).";
			cin >> direction;
			if (direction == 'N')
				room = 3;
			if (direction == 'S')
				room = 4;
			if (direction == 'F') {
				//write a ranomizer function for room choice here
				int num = rand() % 2 + 1; //either a 1 or 2
				if (num == 1)
					room = 3;
				else room = 4;
			}
			break;
		case 3:
			cout << "You are in room 3, you can go (S)outh or (N)orth" << endl;
			cin >> direction;
			if (direction == 'S')
				room = 4;
			if (direction == 'N')
				room = 2;
			break;
		case 4:
			cout << "You are in room 4, you can go (E)ast or (N)orth" << endl;
			cin >> direction;
			if (direction == 'E')
				room = 5;
			if (direction == 'N')
				room = 3;
			break;
		case 5:
			cout << "You are in room 5, you can go (W)est" << endl;
			cin >> direction;
			if (direction == 'W')
				room = 4;
			break;

			

		}//end switch
	}//end of game loop

}//end of main

void Chance() {
	int num = rand() % 100 + 1;
	if (num < 50)
		cout << "N" << endl;
	else 
		cout << "S" << endl;
}
