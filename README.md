# Student Management System

A OOP (C++)-based console application designed to manage student data efficiently. It follows a clean architecture pattern with well-organized layers for separation of concerns.

##  Project Structure

- **controller/** – Handles inputs and coordinates application logic.  
- **model/** – Defines the core data entities (e.g., Student, Course).  
- **service/** – Contains business logic (e.g., add, update, delete operations).  
- **repository/** – Handles data storage and retrieval (file-based or in-memory).  
- **validation/** – Ensures data integrity by validating inputs.  
- **main.cpp** – Entry point for the application, responsible for program initialization and the main loop.  
- **.gitignore** – Specifies files and directories Git should ignore.

## Key Features

- Add, update, delete, and view student records  
- Validates input data (e.g., properly formatted names, valid IDs)  
- Modular architecture for maintainability and ease of testing  
