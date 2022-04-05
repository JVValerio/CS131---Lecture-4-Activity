////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Lecture 4 - Activity
////
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(){
    // Purpose of the program is to create a grid that numbers between 1 to 9 both row and column wise.
    // Pairs should look "Column,Row  Column,Row ..."
    int row; // Left to right
    int column; // Up to down
    
    cout << "My name is Josh Valerio\n";
    cout << "Program Name: Lecture 4 - Activity\n\n";

    for (column = 1; column <= 9; column++) {
        for (row = 1; row <= 9; row ++) {
            cout << column << "," << row << "  ";
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}
