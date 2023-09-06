// (Table) Using the techniques of this chapter, write a program that calculates the
// surface area and volume of cubes with face lengths ofO to 4 cm. Use tabs 
// to print the following neatly formatted table of values: 
// Face length of cube (cm):        Surface area of cube (cm*2)        Volume of cube(cm*3) 
// 0                                 0                                  0
// 1                                 6                                  1
// 2                                 24                                 8
// 3                                 54                                 27
// 4                                 96                                 64



#include <iostream>

using namespace std;

int main() {
    cout << "Face length of cube (cm): Surface area of cube (cm^2): Volume of cube (cm^3):\n";

    for (int length = 0; length <= 4; length++) {
        int surface_area = 6 * length * length;
        int volume = length * length * length;

        cout << length << "\t\t\t" << surface_area << "\t\t\t" << volume << endl;
    }

    return 0;
}
