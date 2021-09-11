#include<iostream>

using namespace std;

int main() {

    const int sz = 5;
    const int psz = 3;
    int total_marks = 50;
    int obt_mark_arr[sz];
    int percentage;
    string result[sz];
    int position_holder_ids[psz];
    int position_holder_marks[psz];

    for (int i = 0; i < sz; i++) {
        cout << "Enter obtained marks of student" << i << ": ";
        cin >> obt_mark_arr[i];
    }

    for (int i = 0; i < psz; i++) {
        
        position_holder_marks[i] = obt_mark_arr[0];
        position_holder_ids[i] = 0;
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

    for (int i = 0; i < sz; i++) {

        for (int j = 0; j < psz; j++) {

            if (obt_mark_arr[i] > position_holder_marks[j]) {
                
                for (int k = psz-1; k >= j; k--) {
                    
                    position_holder_marks[k] = position_holder_marks[k-1];
                    position_holder_ids[k] = position_holder_ids[k-1];
                }

                position_holder_marks[j] = obt_mark_arr[i];
                position_holder_ids[j] = i;
                break;
            }
        }   
    }

    cout << endl << "POSITION HOLDERS" << endl << endl << endl;
    cout << "Position   " << "ID    " << "Marks" << endl << endl;

    for (int i = 0; i < psz; i++) {
        
        cout << i << "          " << position_holder_ids[i] << "     " << position_holder_marks[i] << endl << endl;
    }
    
    return 0;
}