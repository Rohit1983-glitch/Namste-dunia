#include <iostream>
using namespace std;

#define MAX 100

// Function 1: Print star pattern (performance graph)
void printPattern(int n) {
    int i = 1, j;
    while(i <= n) {
        j = 1;
        while(j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// Function 2: Check Pass/Fail using bitwise operator
void checkPassFail(int marks) {
    if (marks & 1) 
        cout << "Marks " << marks << " → FAIL (Odd number treated as Fail)\n";
    else 
        cout << "Marks " << marks << " → PASS (Even number treated as Pass)\n";
}

// Function 3: Find maximum marks
int findMax(int arr[], int n) {
    int max = arr[0], i = 1;
    while(i < n) {
        if(arr[i] > max)
            max = arr[i];
        i++;
    }
    return max;
}

// Function 4: Find minimum marks
int findMin(int arr[], int n) {
    int min = arr[0], i = 1;
    while(i < n) {
        if(arr[i] < min)
            min = arr[i];
        i++;
    }
    return min;
}

// Function 5: Display array
void displayArray(int arr[], int n) {
    cout << "Marks: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[MAX], n, choice;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter marks of " << n << " students:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    while(true) {
        cout << "\n===== STUDENT UTILITY ANALYZER =====\n";
        cout << "1. Display All Marks\n";
        cout << "2. Display Highest Marks\n";
        cout << "3. Display Lowest Marks\n";
        cout << "4. Check Pass/Fail (Bitwise)\n";
        cout << "5. Print Performance Pattern\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 6) {
            cout << "Exiting program...\n";
            break;
        }

        switch(choice) {
            case 1:
                displayArray(arr, n);
                break;

            case 2:
                cout << "Highest Marks = " << findMax(arr, n) << endl;
                break;

            case 3:
                cout << "Lowest Marks = " << findMin(arr, n) << endl;
                break;

            case 4: {
                int index;
                cout << "Enter student index (0 to " << n-1 << "): ";
                cin >> index;
                checkPassFail(arr[index]);
                break;
            }

            case 5: {
                int rows;
                cout << "Enter number of rows for pattern: ";
                cin >> rows;
                printPattern(rows);
                break;
            }

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}