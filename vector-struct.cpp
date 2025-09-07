#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib> // for rand/srand
#include <ctime> // for time gen

using namespace std;

// struct to store color values
struct color {
    int red;
    int green;
    int blue;
};

int main() {
    srand(static_cast<unsigned int>(time(0)));


    vector<Color> colors;





}

cout << left << setw(8) << "color#"
    << set(10) << "Red Value"
    << set(10) << "Green Value"
    << set(10) << "Blue Value" << endl;
cout << string(#, '-') << endl;