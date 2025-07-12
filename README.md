# Password Strength Analyzer (C++)

This project is a simple C++ console application that analyzes the strength of a user-entered password based on common security standards. It evaluates whether a password is strong, moderate, or weak depending on its composition.

---

## Project Objective

To provide a tool that guides users in creating stronger passwords by checking key criteria such as length, presence of uppercase/lowercase characters, numbers, and special symbols.

---

## Features

- Accepts password input from the user
- Checks for:
  - Minimum length (8 characters)
  - At least one uppercase letter
  - At least one lowercase letter
  - At least one digit
  - At least one special character
- Rates the password as:
  - Strong (all conditions met)
  - Moderate (3 out of 4 met)
  - Weak (less than 3 or too short)
- Provides specific feedback on missing components

---

## Program Flow

1. User is prompted to enter a password.
2. The program analyzes each character using standard C++ character functions:
   - `isupper()` for uppercase letters
   - `islower()` for lowercase letters
   - `isdigit()` for digits
   - `ispunct()` for special characters
3. Based on the number of fulfilled criteria and password length, the program:
   - Prints the strength level
   - Displays which criteria are missing (if any)

---

## Example Output

<img width="1512" height="982" alt="Screenshot 2025-07-13 at 12 22 13 AM" src="https://github.com/user-attachments/assets/91aa69eb-4191-4c00-95d9-95f8dcbe778c" />
