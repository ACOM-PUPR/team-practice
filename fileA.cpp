//fileA - simple arithmetic
#include <iostream>
using namespace std;

void functionA() {
    // Developer1: Change this message
    cout << "Function A: Hello from Developer1!" << endl;

    cout << "This was edited by developer Rub";


	int a = 5, b = 10;

    // Developer2: Add a simple sum calculation
	int sum = a + b;
	
	// Developer3: Add a simple subtract calculation
	
	int sub = a - b;
    // Developer4: Modify this output to use the sum calculation
	cout << "Sum: " << sum << endl;
	// Developer5: Modify this output to use the subtract calculation

	cout << "Sub: " << sub << endl;
	
    cout << "Sum: " << (a + b) << endl;

    for (int i = 0; i < 100; i++){
        cout << "HOLA MUNDO BEEP BOOP!!!" << endl;
    }
}

int main() {
    functionA();
    return 0;
}
