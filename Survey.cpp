#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>
using namespace std;

int main() {
	int people , num1 = 0;
	float height,Theight = 0;

	cout << "Welcome" << endl;
	cout << "---------------------" << endl;

	cout << "how many people partook in the survey : ";
	cin >> people;

	while (people != 0) {
		num1++;
		cout << "What is the height of person " << num1 << " : ";
		cin >> height;

		Theight = Theight + height;
		people--;
	} 

	Theight = Theight / num1;

	cout << "the averega height amongst everoen who partaked in the survey is : " << Theight << " meters";
	return 0;


}
