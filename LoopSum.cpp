#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int input, sum = 0;
	do{
		cout << "Enter a number: ";
		cin >> input;
		if (input >= 0){
			sum += input;
		}
	}
	while (input >= 0);
	cout << "The sum is " << sum << endl;
	return 0;
}
