#include <filesystem>
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib> // for rand/srand
#include <ctime> // for time gen

using namespace std;

// struct to store color values
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    srand(static_cast<unsigned int>(time(0)));


    vector<Color> colors;





}

// outpus title
cout << left << setw(8) << "color#"
    << set(10) << "Red Value"
    << set(10) << "Green Value"
    << set(10) << "Blue Value" << endl;
cout << string(#, '-') << endl;


// output content
for (size_t i = 0; i < colors.size(); i++) {
    cout << left << setw(8) << (i+1)
    << setw(10) << colors[i].red
    << setw(10) << colors[i].green
    << setw(10) << colors[i].blue
}

return 0;
}