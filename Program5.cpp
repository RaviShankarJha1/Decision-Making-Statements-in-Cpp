#include <iostream>
using namespace std;

int main() {
    int movie;

    cout << "Choose a movie to review:" << endl
         << "1. The Lion King" << endl
         << "2. Frozen" << endl
         << "3. Aladdin" << endl
         << "4. Moana" << endl
         << "Choose (1-4)" << endl;

    cin >> movie;

    switch (movie) {
        case 1:
            cout << "The Lion King: 5/5" << endl;
            break;
        case 2:
            cout << "Frozen: 4.8/5" << endl;
            break;
        case 3:
            cout << "Aladdin: 4.7/5" << endl;
            break;
        case 4:
            cout << "Moana: 4.9/5" << endl;
            break;
        default:
            cout << "Invalid choice. Please pick a number between 1 and 4." << endl;
    }

    return 0;
}
