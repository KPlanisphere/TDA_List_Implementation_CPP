## TDA List Implementation in C++

### Repository Name: `TDA_List_Implementation_CPP`

### Project Description

This project provides a basic implementation of a list data structure using C++. It is designed to demonstrate fundamental operations on lists, such as insertion, deletion, and searching. The project is suitable for educational purposes and can serve as a foundation for more advanced data structure projects.

### Features

-   **Insert at the End**: Add an element to the end of the list.
-   **Insert at the Beginning**: Add an element to the start of the list.
-   **Delete the Last Element**: Remove the last element of the list.
-   **Delete the First Element**: Remove the first element of the list.
-   **List All Elements**: Display all elements in the list along with their positions.
-   **Check if the List is Empty**: Verify if the list contains no elements.
-   **Check if the List is Full**: Verify if the list has reached its maximum capacity.
-   **Search for an Element**: Find and display the position of a specified element in the list.
-   **Get the Last Element**: Display the last element in the list.
-   **Get the First Element**: Display the first element in the list.

### Files

1.  **operaciones.h**: Header file containing the definition of the `TDA` class and its member functions.
2.  **operaciones.cpp**: Implementation file for the `TDA` class, providing the logic for list operations.
3.  **Lista TDAV2.cpp**: Main file demonstrating the usage of the `TDA` class with a simple menu-driven interface.

### Class and Methods

-   **TDA Class**:
    -   **Attributes**:
        -   `int lista[maxim]`: Array to store the elements of the list.
        -   `int ultimo`: Index of the last element in the list.
    -   **Methods**:
        -   `TDA()`: Constructor to initialize the list.
        -   `bool emptyList()`: Check if the list is empty.
        -   `bool fullList()`: Check if the list is full.
        -   `void addLast(int x)`: Add an element to the end of the list.
        -   `void addFirst(int x)`: Add an element to the start of the list.
        -   `void deleteFinal()`: Remove the last element of the list.
        -   `void deleteFirst()`: Remove the first element of the list.
        -   `void print()`: Display all elements in the list.
        -   `void searchEle(int x)`: Search for an element in the list.
        -   `void final()`: Display the last element in the list.
        -   `void first()`: Display the first element in the list.

### Usage

To run the project, compile the main file (`Lista TDAV2.cpp`) along with the implementation file (`operaciones.cpp`), and then execute the compiled binary. The program will present a menu allowing you to perform various operations on the list.