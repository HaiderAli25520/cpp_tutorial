#include<iostream>

using namespace std;

int main() {

    int total, obtained; 
    double percentage;
    string grade;

    total = 50;

    cout << "Enter your obtained marks: ";
    cin >> obtained;

    if (obtained > 50) {
        cout << "What are you crazy or something \n Enter your marks again!!";
        return 0;
    }
    percentage = 100 * obtained/total;


    if (percentage >= 90) {
        grade = "A*";
    }

    else if (percentage >= 80) {
        grade = "A";
    }

    else if (percentage >= 70) {
        grade = "B";
    }

    else if (percentage >= 60) {
        grade = "C";
    }

    else if (percentage >= 50) {
        grade = "D";
    }

    else if (percentage >= 40) {
        grade = "E";
    }
    
    else {
        grade = "F";
    }

    cout << "You got: " << grade << endl << "Your percentage: " << percentage << endl;

    return 0;
}