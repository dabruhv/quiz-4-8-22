#include <iostream>
#include <ctime>

using namespace std;

void aarg(char i);


class koopa {


public:
	int x;
	int y;
	bool updown;
	bool leftright;
	koopa();
	void move();
	void print();
};

int main() {
	srand(time(NULL));
	cout << "question 1)" << endl << endl;
	aarg('p');
	aarg('v');

	char input = 'b';

	cout << "question 2)" << endl << endl;
	koopa k1;
	koopa k2;
	koopa k3;
	
	while (input != 'q') {

		k1.move();
		k2.move();
		k3.move();
		
		k1.print();
		k2.print();
		k3.print();
		cout << "--------press q to quit---------" << endl;
		cin >> input;
	}
}

void aarg(char i) {
	int stuff = rand() % 100 + 1;
	if (i == 'p') {
		if (stuff <= 25)
			cout << "shiver me timbers" << endl;
		else if (stuff <= 60)
			cout << "walk da plancc" << endl;
		else 
			cout << "ARRRRRRRRRRRRRRRRRR" << endl;


	}
	if (i == 'v') {
		if (stuff <= 10)
			cout << "nice weather today innit" << endl;
		else if (stuff <= 30)
			cout << "these taxes right? kinda sus. I wish gas prices weren't so high this economy BRUH!!!!!!!" << endl;
		else
			cout << "Da potatoes be growin I love da potato I know a little something aboot patatoes" << endl;


	}



};

koopa::koopa() {
	x = 400;
	y = 400;
	leftright = 0;
	updown = 0;

}

void koopa::move() {

	

	if (x <= 0)
		leftright = 1;
	if (x >= 800)
		leftright = 0;

	if (y <= 0)
		updown = 1;
	if (y >= 400)
		updown = 0;


	if (leftright == 0)
		x -= 2;
	if (leftright == 1)
		x += 2;

	if (updown == 0)
		y -= 2;
	if (updown == 1)
		y += 2;
	

	
}

void koopa::print(){

	cout << "Hi, I'm a koopa and I'm at " << x << "," << y << "and I'm moving ";
	if (leftright == 0)
		cout<<"left and ";
	else if (leftright == 1)
		cout << "right and ";

	if (updown == 0)
		cout<<"up"<<endl;
	else if (updown == 1)
		cout << "down" << endl;

}
