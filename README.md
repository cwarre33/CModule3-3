# Module 3-3 Programming Exercises

**Author:** Cameron Warren  
**UNC Charlotte BID:** 801289580  
**Course:** ITSC 2181  
**Date:** September 30, 2024  

## About
This collection of programming exercises focuses on fundamental concepts in C, including:

- **Structs and Data Representation:** Creating and utilizing structs to represent complex data types, such as a 3D box with various attributes.
  
- **Function Implementation:** Writing functions to perform specific tasks, such as comparing volumes of structs and modifying their properties.
  
- **Array Manipulation:** Working with arrays of structs to manage collections of data and initialize their values.
  
- **Debugging Techniques:** Using tools like the GNU Debugger to identify and fix issues in C programs.

- **Preprocessor Directives and Macros:** Defining macros for mathematical constants and analyzing preprocessor directives to control compilation behavior.

Through these exercises, I have strengthened my problem-solving skills and gained practical experience in applying C programming concepts to real-world scenarios.

## Task 1: Box Struct

### Objective
Create a struct named `box` to represent a 3D volume with members for item number, color, dimensions, and coordinates.

### Implementation
- Declare and initialize a box variable with specified values.
- Print the values in a formatted output.

### Sample Output
Item: 3, Color: red, Position: (10.21, 20.62, 35.72) Height: 3, Width: 2, Depth: 5

## Task 2: Volume Comparison Function

### Objective
Write a function that compares two box structs and returns the one with the greater volume. Modify the larger box's position to (0, 0, 0) and color to "green".

## Task 3: Box Array

### Objective
Declare an array of 100 box structs and initialize values for the first two elements.

## Task 4: Debugging Buggy Program

### Objective
Correct the provided buggy program using the GNU Debugger, ensuring it handles long names without issues.

## Task 5: Preprocessor Macros

### Objective
Define macros for the mathematical constants:
- e (≈ 2.718282)
- log10(e) (≈ 0.434294)

## Task 6: Preprocessor Directives

### Objective
Analyze the preprocessor directives in `calc.c` based on the compilation command:
gcc -DMACOS calc.c

## Conclusion
These exercises reinforce C programming fundamentals through struct usage, function implementation, debugging practices, and preprocessor directive analysis.

