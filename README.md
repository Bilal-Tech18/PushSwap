# Push Swap
Push Swap is a C program that sorts lists of numbers using the **Radix Sort** algorithm. The goal of this project is to efficiently sort numbers provided as command-line arguments and demonstrate algorithmic optimization.

![radix_sort](https://github.com/user-attachments/assets/9d47e978-e6db-47cc-9ec9-1e384f652dc3)

## Author

- [Bilal-Tech18](https://github.com/Bilal-Tech18)

## Features

- **Radix Sort** implementation for sorting integers.
- Efficient handling of sorting operations with minimal complexity.
- Modular design for clarity and maintainability.
- Compatible with custom lists provided via command-line arguments.

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
    It implements the Radix Sort algorithm to sort the numbers efficiently.
    The sorted list is displayed as the output.

## Radix Sort Overview

Radix Sort is a non-comparative sorting algorithm that organizes numbers by processing individual digits. It performs sorting in O(nk) time complexity, where:

    n is the number of integers.
    k is the maximum number of digits in the integers.

## Project Structure

The project is organized as follows:

    push_swap.c: Entry point of the program
    sources/function_used.c: Contains utility functions for sorting and data manipulation
    lib/my/libmy.a: Custom library for helper functions

## Unit Tests

The project includes unit tests to validate the sorting functionality.
Running Tests

    Compile the test suite:

make tests_run

Execute the tests:

    ./unit_tests

Code coverage is enabled for the test suite, allowing you to assess test completeness.
