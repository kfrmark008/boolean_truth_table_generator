# Boolean Truth Table Generator

A C++ program that generates truth-value combinations for one to three named Boolean variables and displays common logical operations on the first two variables.

## Skills demonstrated
- Propositional logic and truth tables
- Boolean expressions and bit operations
- Input validation and formatted output

## Build and run
```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o truth_table
./truth_table
```

For one variable, the two-variable operation columns use `false` for the missing second variable. For the most meaningful AND, OR, and implication table, choose two or three variables.

## Possible extensions
Add NOT, XOR, biconditional, parentheses, and a parser for user-entered logical expressions.
