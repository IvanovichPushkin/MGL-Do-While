#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int value, multiple, counter = 1, alt;
	cout << "Enter value: ";
	cin >> value;
	cout << "Enter multiple: ";
	cin >> multiple;
	do{
		alt = counter % multiple;
		if (alt == 0){
			cout << "Multiple of " << multiple << endl;
			return 0;
		}
		cout << counter << endl;
		counter++;
	}
	while (counter <= value);
	return 0;
}
