#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0; i<3; i++){
        cin.get();
    }
    srand(time(0));
    int x = rand()%9+1;
    string actualGrade;

    switch(x){
        case 1:
            actualGrade = "W";
            break;
        case 2:
            actualGrade = "A";
            break;
        case 3:
            actualGrade = "B+";
            break;
        case 4:
            actualGrade = "B";
            break;
        case 5:
            actualGrade = "C+";
            break;
        case 6:
            actualGrade = "C";
            break;
        case 7:
            actualGrade = "D+";
            break;
        case 8:
            actualGrade = "D";
            break;
        case 9:
            actualGrade = "F";
            break;
    }
    cout << "You will get " << actualGrade << " in this 261102.";

}




