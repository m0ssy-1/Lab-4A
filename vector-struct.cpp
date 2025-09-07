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
    //random # gen
    srand(static_cast<unsigned int>(time(0)));

    // emtpy color vect
    vector<Color> colors;

    // random # from 25-50
    int n = rand() % 26 + 25;

    for (int i = 0; i < n; i++){
        Color temp;
        temp.red = rand() % 256; //red vals from 0-255
        temp.green = rand() % 256; // green cals from 0-255
        temp.blue = rand() % 256; //blue vals from 0-255
        colors.push_back(temp);
    }


// outpus title
cout << left << setw(8) << "|Color#|"
    << setw(9) << "|Red Value|"
    << setw(9) << "|Green Value|"
    << setw(9) << "|Blue Value|" << endl;
cout << string(38, '-') << endl;


// output content
for (size_t i = 0; i < colors.size(); i++) {
    cout << left << setw(10) << (i+1)
    << setw(12) << colors[i].red
    << setw(12) << colors[i].green
    << setw(12) << colors[i].blue << endl;
}

return 0;
}