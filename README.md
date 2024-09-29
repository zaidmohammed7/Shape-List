# Shape List

## Overview
This project implements a simple shape list in C++. It utilizes a linked list to manage various shapes, allowing for dynamic addition, removal, and manipulation of shape objects. The main program tests the functionalities of the `CanvasList` class, which manages the shapes.

## Authors
- **Starter code provided by:** Adam T Koehler, PhD - University of Illinois Chicago
- **Student Author:** Zaid Khan Mohammed

## Files
- **`main.cpp`**: The main program that tests the execution of the shape list functionalities.
- **`canvaslist.cpp`**: The implementation of the `CanvasList` class, which manages the list of shapes.
- **`canvaslist.h`**: The header file for `CanvasList`, declaring its structure and member functions.
- **`shape.cpp`**: The implementation of the `Shape` and derived classes (`Circle`, `Rect`, `RightTriangle`).
- **`shape.h`**: The header file for shape classes, declaring the `Shape`, `Circle`, `Rectangle`, and `RightTriangle` classes.
- **`tests.cpp`**: The testing file using the Catch testing framework to validate the functionality of the shape classes.

## Features
- Dynamic addition of shapes to the front and back of the list.
- Ability to remove shapes from the list.
- Functions to insert shapes at specific indices and remove every other shape.
- Utility functions to display the current shapes and their addresses in memory.
- Support for multiple shape types with polymorphism.
- Comprehensive unit tests to ensure functionality.

## Shape Classes
### Shape
- Base class for all shapes.
- Contains common properties `x` and `y`.
- Provides methods for setting and getting these properties, as well as a method to create a copy.

### Rect (Rectangle)
- Inherits from `Shape`.
- Additional properties: `width` and `height`.
- Methods to set and get width and height, and to print shape details.

### Circle
- Inherits from `Shape`.
- Additional property: `radius`.
- Methods to set and get the radius, and to print shape details.

### RightTriangle
- Inherits from `Shape`.
- Additional properties: `base` and `height`.
- Methods to set and get base and height, and to print shape details.

## Testing
The project includes a suite of tests in `tests.cpp` that uses the **Catch** testing framework. The tests cover constructors, copy functionality, and the `printShape` methods for each shape class. This ensures that the classes behave as expected and helps identify issues early in the development process.

### Key Learnings from the Project
- **Understanding Object-Oriented Programming**: Implementing shape classes reinforced concepts of inheritance, encapsulation, and polymorphism.
- **Using the Catch Framework**: I learned how to structure tests using the Catch framework, which simplifies the process of writing and running unit tests in C++. This helped ensure code reliability and provided confidence when making changes.
- **Importance of Testing**: Writing tests highlighted the importance of verifying functionality, which is crucial in software development. It encourages writing cleaner, more maintainable code.
