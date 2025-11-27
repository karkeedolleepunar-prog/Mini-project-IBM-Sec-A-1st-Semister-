#include <iostream>
using namespace std;

int main() {

    int A[10][7];

    
    cout << "Enter attendance of 10 students for 7 days (0 for absent and 1 for present ):"<<endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> A[i][j];
        }
    }

    int totalPresent[10] = {0};  

    int highestAttendance = 0;
    int topperStudent = 1;

    
    for (int i = 0; i < 10; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += A[i][j];
        }
        totalPresent[i] = sum;

        
        if (sum > highestAttendance) {
            highestAttendance = sum;
            topperStudent = i + 1; 
        }
    } 

    int lowestDay = 1;
    int lowestAttendance = 100; 

    for (int j = 0; j < 7; j++) {
        int daySum = 0;
        for (int i = 0; i < 10; i++) {
            daySum += A[i][j];
        }
        if (daySum < lowestAttendance) {
            lowestAttendance = daySum;
            lowestDay = j + 1; 
        }
    }

  
    cout << " Weekly Attendance "<<endl;
    

    cout << "Total Present Days:"<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << totalPresent[i] << endl;
    }

    cout << "Student with Highest Attendance: Student " 
         << topperStudent << " (" << highestAttendance << " Days)"<<endl;

    cout << " Day with Lowest Overall Attendance: Day " 
         << lowestDay << endl;

    return 0;
}
