# Message Encryption/Decryption

## Overview

This simple C++ console application allows you to encrypt or decrypt a message using a basic Caesar cipher algorithm. The program takes a message, a "magic number" as the key, and a mode (1 for encryption, 2 for decryption) as input. It then processes the message accordingly.

## How to Use

1. **Compile the Program:**
   - Ensure you have a C++ compiler installed on your Windows system.
   - Compile the program using the provided source code file (`main.cpp`) and the necessary header file (`std_lib_facilities.h`).

     ```powershell
     g++ main.cpp -o message_encryptor.exe
     ```

2. **Run the Program:**
   - Execute the compiled program.

     ```powershell
     .\message_encryptor.exe
     ```

3. **Input:**
   - Enter your message when prompted.
   - Choose a "magic number" (integer key) for encryption or decryption.
   - Choose 1 for encryption or 2 for decryption.

4. **Output:**
   - The program will display the encrypted or decrypted message based on your chosen mode and key.

## Input Constraints

- The "magic number" should be an integer.
- Mode must be either 1 for encryption or 2 for decryption.

