# Grade Calculation System for Students

## Project Description
The **Grade Calculation System** is a C++ program designed to manage and calculate the academic performance of students based on their test scores. The program allows users to input multiple students' names and their respective test scores, calculates the average score for each student, and then assigns a grade based on predefined grading criteria.
The program ensures that all students' grades are calculated based on a uniform scale, making it easier to assess their academic achievements.

The grading system used in this program is as follows:
- **A**: 90–100
- **B**: 80–89
- **C**: 70–79
- **D**: 60–69
- **F**: Below 60

## Features
- **Multi-student input**: Allows the user to input details for multiple students, including their names and test scores.
- **Score validation**: Ensures all test scores are valid by prompting the user to re-enter scores that are outside the valid range (0–100).
- **Automatic grade assignment**: The program calculates the average score for each student and assigns a grade based on the predefined grading scale.
- **Formatted result display**: After all inputs are collected and calculations are performed, the program displays the results in a clear, formatted table showing each student's name, average score, and grade.
- **Error handling**: Validates inputs to ensure that the number of students and test scores are positive values and that test scores are within the range of 0 to 100.

## Installation Instructions
1. **Clone or download the repository** to your local machine.
2. **Set up your development environment**:
   - Install a C++ compiler if you don't already have one (e.g., GCC, Clang, or MSVC).
   - Alternatively, you can use an IDE such as Visual Studio, Code::Blocks, or CLion that supports C++.
3. **Open the project in your IDE** and ensure that all necessary libraries (`<iostream>`, `<string>`, and `<iomanip>`) are included.
4. **Compile the program** to create an executable.
5. **Run the executable** to interact with the program.

## Usage Instructions
1. **Start the program** by running the compiled executable.
2. **Input the number of students** when prompted.
   - If the number is invalid (zero or negative), the program will display an error message and exit.
3. **For each student**, you will be asked to input:
   - **Name**: The student's full name (spaces allowed).
   - **Number of test scores**: How many test scores the student has.
   - **Test scores**: Enter each score one by one. The program will validate that each score is between 0 and 100.
4. **Once all students' data is entered**, the program will calculate the average score and assign a grade for each student.
5. **Results will be displayed** in a neatly formatted table with the student's name, average score, and corresponding grade.


