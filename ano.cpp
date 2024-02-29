#include <iostream>
#include <cstdlib> // for atoi function

using std::cout;
using std::endl;
using std::atoi;

int is_leapyear(int year); // function that informs if the year is a leap year or not

int main(int argc, char* argv[]) {

    if (argc != 2) {
        cout << "Sorry, invalid input! USAGE .\'ano.exe' number." << endl;
        return 1;
    }

    int year = atoi(argv[1]);

    is_leapyear(year) == 1 ? cout << "The year informs is a leapyear!" << endl : cout << "The year informs isn't a leapyear!" << endl;

    return 0;

}

int is_leapyear(int year) {

    if (((year % 4 == 0) & (year % 100 != 0)) | (year % 400 == 0)) {
        return 1; // true
    } else {
        return 0; // false
    }

}
