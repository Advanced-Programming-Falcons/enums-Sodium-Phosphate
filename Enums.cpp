#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;


enum gameMode {
    Easy = 10,
    Medium = 25,
    Hard = 3000
};

int main(void){

    gameMode mode = Medium;

    switch (mode){
        case Easy:
        cout << "Selected Mode: Easy" << endl;
        cout << "Nerd, needs easy mode" << endl;
        break;

        case Medium:
        cout << "Selected Mode: Medium" << endl;
        cout << "Nerd, plays medium mode" << endl;
        break;

        case Hard:
        cout << "Selected Mode: Hard" << endl;
        cout << "Nerd, can only handle hard mode" << endl;
        break;
    }

    cout << "The difficulty multiplier is " << mode << endl;

    return 0;
}
