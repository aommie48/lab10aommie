#include<iostream>
using namespace std;

int main(){
    int count[5] = {}; // Declare array count for counting A, B, C, D, F and initialize all element = 0
    char grade;
    int totalStudents = 0;  // To keep track of total students

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    do {
        cout << "Student [" << totalStudents + 1 << "]: ";
        cin >> grade;

        // Check if the input is '0' to terminate the loop
        if(grade == '0') {
            break; // Exit the loop
        }

        // Check for valid grade inputs
        if(grade == 'A') {
            count[0]++;
            totalStudents++;
        } else if(grade == 'B') {
            count[1]++;
            totalStudents++;
        } else if(grade == 'C') {
            count[2]++;
            totalStudents++;
        } else if(grade == 'D') {
            count[3]++;
            totalStudents++;
        } else if(grade == 'F') {
            count[4]++;
            totalStudents++;
        } else {
            // Handle invalid input
            cout << "Wrong input. Please input again." << endl;
        }

    } while(true); // Continue until '0' is input

    // Print the summary of grades
    cout << "In total " << totalStudents << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}
