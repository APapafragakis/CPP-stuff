# String Manipulation Program

## Overview

This C++ console application provides basic string manipulation operations, including string concatenation, comparison, conversion to uppercase, and conversion to lowercase. Users can choose the type of operation and input strings for processing.

## How to Use

1. **Compile the Program:**
   - Ensure you have a C++ compiler installed on your Windows system.
   - Compile the program using the provided source code files (`main.cpp` and `my_string.h`) and the necessary header file (`std_lib_facilities.h`).

     ```powershell
     g++ main.cpp -o string_manipulation.exe
     ```

2. **Run the Program:**
   - Execute the compiled program.

     ```powershell
     .\string_manipulation.exe
     ```

3. **Input:**
   - Enter the type of string operation (1 to 4) when prompted.
   - For concatenation and comparison, enter two strings when prompted.
   - For case conversion, enter a single string when prompted.

4. **Output:**
   - The program will display the result based on the chosen operation.

## Supported Operations

1. **Concatenation:**
   - Concatenate two input strings and display the result.

2. **Comparison:**
   - Compare two input strings and indicate if they are equal or which one is greater.

3. **Uppercase Conversion:**
   - Convert lowercase letters in a string to uppercase.

4. **Lowercase Conversion:**
   - Convert uppercase letters in a string to lowercase.

## Input Constraints

- The program validates the input type to ensure it is within the supported operation range (1 to 4).
- For comparison, the program considers strings as equal, greater, or smaller based on lexicographical order.

