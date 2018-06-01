#include <iostream>
using namespace std;

int main() {
    string selections[4] = {"Copy file", "Write file", "Delete file", "Quit"}; // array for menu selection
    
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << " : " << selections[i] << endl;
    }
    cout << "Please select an option: " << flush;
    
    int input; //takes user input
    cin >> input;
    
    switch(input){ // iterates menu and decides where to send user
    case 1:
        cout << "You've selected Copy file" << endl;
        break;
    case 2:
        cout << "You've selected Write file"<< endl;
        break;
    case 3:
        cout << "You've selected Delete file" << endl;
        break;
    case 4:
        cout << "Quitting..." << endl;
        break;
    default:
        cout << "Unrecognized option" << endl;
        break;
    }
    system("pause");
    return 0;
}
