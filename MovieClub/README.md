# Movie Rental/Buying Program

## Overview

This C++ console application simulates a movie rental/buying system. Users can choose movies from a list, rent or buy them, and the program calculates the total cost based on their choices. The program reads movie data from a file, allows users to make selections, updates the status of the selected movie, and calculates the total cost for the user.

## How to Use

1. **Compile the Program:**
   - Ensure you have a C++ compiler installed on your Windows system.
   - Compile the program using the provided source code file (`main.cpp`) and the necessary header file (`std_lib_facilities.h`).

     ```powershell
     g++ main.cpp -o movie_rental_system.exe
     ```

2. **Run the Program:**
   - Execute the compiled program.

     ```powershell
     .\movie_rental_system.exe
     ```

3. **Input:**
   - Enter the name of the file containing movie data when prompted.
   - Choose a movie by entering its name.
   - Follow the prompts to rent or buy the selected movie.

4. **Output:**
   - The program will display the status of the selected movie and update the file with the new status.
   - It will also calculate and display the total cost of the user's movie selections.

## Input Constraints

- The program reads movie data from a file with each line formatted as follows: `MovieName Status Cost`.
- The user can select movies by entering their names.
- The program calculates the total cost based on the user's rental or buying choices.

