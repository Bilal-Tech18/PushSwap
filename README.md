# Push Swap
Push Swap is a C program that sorts lists of numbers using the **Binary Radix Sort** algorithm. The goal of this project is to efficiently sort numbers provided as command-line arguments and demonstrate algorithmic optimization.

![radix_sort](https://github.com/user-attachments/assets/9d47e978-e6db-47cc-9ec9-1e384f652dc3)

## Author

- [Bilal-Tech18](https://github.com/Bilal-Tech18)

## Features

- **Binary Radix Sort** implementation for sorting integers by their binary representation.
- Efficient handling of sorting operations using bitwise manipulations.
- Modular design for clarity and maintainability.

## Requirements

To compile and execute Push Swap, you need:

- **GCC** (GNU Compiler Collection)

## Compilation

To compile the project, run the following command in the root directory:

    make

This will generate an executable named push_swap.
Execution

To execute the program, run:

    ./push_swap <numbers>

Example

    ./push_swap 3 2 1 5 4

The program will output the sorted list in ascending order.
Error Handling

    If no numbers are provided, the program will terminate without processing.
    If invalid inputs (non-numeric values) are provided, an error will occur.

How It Works

    The program reads the list of integers provided as command-line arguments.
    It implements the **Binary Radix Sort** algorithm to sort the numbers by focusing on individual bits.
    The sorted list is displayed as the output.


## Binary Radix Sort Overview

Binary Radix Sort organizes numbers by processing individual bits instead of digits. It sorts the numbers based on their binary representation, starting with the least significant bit (LSB) and moving to the most significant bit (MSB). This method is efficient for integers and runs in **O(n * k)** time complexity, where:
    
    - **n** is the number of integers.
    - **k** is the number of bits in the largest number.


## Project Structure

The project is organized as follows:

    push_swap.c: Entry point of the program
    sources/function_used.c: Contains utility functions for sorting and data manipulation
    lib/my/libmy.a: Custom library for helper functions

## Unit Tests

The project includes unit tests to validate sorting functionality with Binary Radix Sort, ensuring correctness for edge cases like duplicate values, already sorted lists, and mixed positive/negative integers.

Running Tests

Compile the test suite:

    make tests_run

Execute the tests:

    ./unit_tests

Code coverage is enabled for the test suite, allowing you to assess test completeness.
