# Experiment 5: C++ Decision Making Statements

## Aim
To study and implement decision-making statements in C++ and understand how programs can execute different actions based on conditions.

---

## Software Required
- Visual Studio Code  
- Programiz Online Compiler

---

## Theory
Decision-making statements allow a program to **choose a course of action** based on a condition that evaluates to `true` or `false`. These statements help in implementing **multi-path logic**, **input validation**, and **error handling**.  

The main types of decision-making statements in C++ are:

1. **if-else** – Executes one block when a condition is true and another when it is false.  
2. **nested if-else** – Allows multiple conditions to be checked in a hierarchical manner.  
3. **switch-case** – Efficiently selects between multiple constant options and avoids long `if-else` chains.

---

### if-else Statement
- Used for two-way decisions.  
- Executes one block of code if the condition is true and another block if it is false.

---

### Nested if-else Statement
- Enables conditions **within other conditions**.  
- Useful for handling multiple related conditions.  
- Excessive nesting can reduce readability.

---

### switch-case Statement
- Compares a variable against multiple constant values.  
- Provides an efficient way to handle menu-driven or multi-option scenarios.  
- A `default` case can be used for unmatched conditions.

---

## Implementation
In this practical, several programs were implemented to demonstrate decision-making in C++:

1. **Even/Odd Number Checker**  
   - Checks whether a number is even or odd using the modulus operator.  
   - Demonstrates a simple `if-else` condition.

2. **Vowel/Consonant Checker**  
   - Determines if a character is a vowel or consonant (case-insensitive).  
   - Uses `if-else` to evaluate membership in a set of vowels.

3. **Largest of Three Numbers**  
   - Compares three numbers to find the largest using **nested if-else**.  
   - Demonstrates handling multiple conditions in a structured way.

4. **Movie Rater**  
   - Displays a list of movies and shows their ratings based on the user's choice.  
   - Uses `switch-case` for menu-driven selection.

5. **Simple Calculator**  
   - Takes two numbers and an arithmetic operator as input.  
   - Performs addition, subtraction, multiplication, or division using `switch-case`.  
   - Handles division by zero and invalid operators with appropriate messages.

These programs illustrate how decision-making statements can be applied in real-world scenarios, from simple checks to menu-driven applications.

---

## Conclusion
Through these practicals, I learned how to use `if-else`, nested `if-else`, and `switch-case` statements effectively. Decision-making statements allow programs to handle **multiple conditions**, improve **user interactivity**, and make code **modular and readable**.
