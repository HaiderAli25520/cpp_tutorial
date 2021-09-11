#include<iostream>

using namespace std;

int main() {

    const int sz = 5;
    int total_marks = 50;
    int obt_mark_arr[sz];
    int percentage;
    string result[sz];

    for (int i = 0; i < sz; i++) {
        cout << "Enter obtained marks of student" << i << ": ";
        cin >> obt_mark_arr[i];
    }

    for (int i = 0; i < sz; i++) {

        percentage = obt_mark_arr[i]*100/total_marks;
        
        if (percentage >= 40) {

            result[i] = "Pass";
        }
        else {
            result[i] = "Fail";
        }
    }

    cout << endl << "RESULT ANNOUNCEMENT" << endl << endl << endl;
    cout << "ID     " << "Status" << endl << endl;

    for (int i = 0; i < sz; i++) {
        cout << i << "      " << result[i] << endl << endl;
    }

    return 0;
}