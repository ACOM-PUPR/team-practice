//fileB - sum of an array
#include <iostream>
using namespace std;

void functionB() {
    string Yourname;
    char answer;

    cout << "Function B: This messaged was changed on April 9, 2026." << endl;

    cout << "What is your name?" << endl;
    cin>>Yourname;

    cout << "Your name is " + Yourname << ", correct? (Enter Y for Yes and N for No)" << endl;
    cin>>answer;

    if (answer == 'Y')
    {
        cout << "Great, got it" << endl;
    }
    else{
         cout << "Well that will be you new name now" << endl;
    }
    

}

int main() {
    functionB();
    return 0;
}