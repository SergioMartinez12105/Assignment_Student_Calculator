#include <iostream>
#include <string>
#include <iomanip>  

using namespace std;

// Function to calculate the average score from an array of scores
double calculateAverage(int scores[], int numScores) {
    int sum = 0;
    for (int i = 0; i < numScores; i++) {
        sum += scores[i];  // Add each score to the sum
    }
    return sum / static_cast<double>(numScores);  // In this case, statistics is used to find each student's average score and give them a grade based on the score and show the results 
}

//This function will determien the grade based on the average score of student
char determineGrade(double averageScore) {
    if (averageScore >= 90 && averageScore <= 100) {
     return 'A';  //This will return A for an average score between 90 and 100
    } else if (averageScore >= 80 && averageScore <= 89) {
     return 'B';  //This will return B for an average score beween 80 and 89
    } else if (averageScore >= 70 && averageScore <= 79) {
     return 'C';  //This will return C for an average score between 70 and 79
    } else if (averageScore >= 60 && averageScore <= 69) {
     return 'D';  //This will retrun D for an average score between 60 and 69
    } else {
     return 'F';  // Return 'F' for an average score below 60
    }
}

//This function will display the results for each student you input
void displayResults(string names[], double averages[], char grades[], int numStudents) {
    cout << "\nResults:" << endl;
    cout << "---------------------------------" << endl;
    cout << "Student" << " | Average | Grade" << endl;
    cout << "---------------------------------" << endl;
// This loop willl loop through each student and display the results
    for (int i = 0; i < numStudents; i++) {
      cout << left << setw(10) << names[i] << " | "   // Display student name
         << setw(7) << fixed << setprecision(2) << averages[i] << " | "  // Display average score with 2 decimal places
         << grades[i] << endl;  // Display grade
    }
     cout << "---------------------------------" << endl;
}
int main() {
    int numStudents;

    // Will ask the user to enter the amount of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    //Will print line 54 for invalid number of students this incudes: 0 or a negative number
    if (numStudents <= 0) {
        cout << "Invalid number of students. Will be exiting the program." << endl;
        return 1;  // Will exit the programm if the number is invalid
    }
    // This array will store the students names, average, scores and grades 
    string names[numStudents];
    double averages[numStudents];
    char grades[numStudents];

    // This process is to loop each student
    for (int i = 0; i < numStudents; i++) {
        int numScores;

        // Input student name allowing spaces 
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin.ignore();  // Ignore the leftover newline character from previous input
        getline(cin, names[i]);  // Use getline to read full name

        // Input the number of test scores for this student
        cout << "Enter number of test scores: ";
        cin >> numScores;
        int scores[numScores];  //This array is to store the test scores for this student

        // Loop to input and validate the test scores
        for (int k = 0; k < numScores; k++) {
            do {
            cout << "Enter score " << k + 1 << ": ";
            cin >> scores[k]; 
            // Validate that the score is between 0 and 100
             if (scores[k] < 0 || scores[k] > 100) {
             cout << "Invalid score. Please enter a value between 0 and 100." << endl;
                }
            } while (scores[k] < 0 || scores[k] > 100);  //This will keep prompting until a valid score is given
        }

        // This will calculate the average score and determine the grade of each students
        averages[i] = calculateAverage(scores, numScores);
        grades[i] = determineGrade(averages[i]);
    }

    // Display all the results for the students
    displayResults(names, averages, grades, numStudents);

    return 0;
}
