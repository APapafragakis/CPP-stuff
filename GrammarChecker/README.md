# Grammar Checker

## Overview

This C++ console application checks the grammar of either a single sentence or a paragraph. It looks for specific patterns to identify potential grammar mistakes, such as missing punctuation or incorrect capitalization.

## How to Use

1. **Compile the Program:**
   - Ensure you have a C++ compiler installed on your Windows system.
   - Compile the program using the provided source code file (`main.cpp`) and the necessary header file (`std_lib_facilities.h`).

     ```powershell
     g++ main.cpp -o grammar_checker.exe
     ```

2. **Run the Program:**
   - Execute the compiled program.

     ```powershell
     .\grammar_checker.exe
     ```

3. **Input:**
   - Enter `1` if you want to check a single sentence or `2` for a paragraph.
   - For a single sentence, enter the sentence when prompted.
   - For a paragraph, enter the entire paragraph when prompted.

4. **Output:**
   - The program will identify and display potential grammar mistakes in the input based on specific patterns.

## Input Constraints

- The program expects a numeric input: `1` for a single sentence or `2` for a paragraph.
- For a single sentence, enter the sentence without spaces.
- For a paragraph, enter the entire paragraph without line breaks.
