# Recursion Calculator

## Overview

This C++ console application performs mathematical operations (addition, multiplication, or subtraction) on a set of numbers using recursion. The program takes the total number of operands, the type of operation, and the operands themselves as input. It then recursively calculates and displays the result of the specified operation.

## How to Use

1. **Compile the Program:**
   - Ensure you have a C++ compiler installed on your Windows system.
   - Compile the program using the provided source code file (`main.cpp`) and the necessary header file (`std_lib_facilities.h`).

     ```powershell
     g++ main.cpp -o recursion_calculator.exe
     ```

2. **Run the Program:**
   - Execute the compiled program.

     ```powershell
     .\recursion_calculator.exe
     ```

3. **Input:**
   - Enter the total number of operands.
   - Choose the type of operation (1 for addition, 2 for multiplication, 3 for subtraction).
   - Enter each operand when prompted.

4. **Output:**
   - The program will display the recursive calculation steps and the final result.

## Input Constraints

- The total number of operands should be greater than 1.
- The type of operation should be a valid integer (1 for addition, 2 for multiplication, 3 for subtraction).

