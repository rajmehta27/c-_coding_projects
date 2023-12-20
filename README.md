To-Do List Management System

This C++ program implements a simple To-Do List Management System using a singly linked list. Users can perform various operations such as adding tasks, deleting tasks, modifying tasks, and displaying tasks. The program provides a menu-driven interface for user interaction.

How to Use :-

1. Add Task:
Enter task details, including task name, date (DD MM), and time (24-hour format, e.g., 2335).
Tasks are inserted into the list in chronological order.

2. Delete Task:
Choose from options to delete the first task, last task, or a specific task by name.
Follow on-screen instructions to complete the deletion process.

3. Modify Task:
Choose from options to modify a task by name, date, or time.
Follow on-screen instructions to provide the necessary details for modification.

4. Display Task:
Choose from options to display the full to-do list, tasks for a specific date, tasks for a specific month, or go back to the main menu.

5. Exit:
Choose the exit option to end the program.


Code Structure

1. Task Structure
The Task structure represents a task node in the linked list and includes task details such as name, date, time, and a pointer to the next task.


Functions

1. InsertinOrder:
Inserts a new task into the linked list in chronological order.

2. DeleteFirstTask:
Deletes the first task in the list.

3.DeleteLastTask:
Deletes the last task in the list.

4. DeleteBySearch:
Deletes a task by searching for its name.

5. UpdateByTaskName:
Updates the task name by searching for the old name.

6. UpdateByTaskDateandMonth:
Updates the task date and month by searching for the task name.

7. UpdateByTaskTime:
Updates the task time by searching for the task name.

8. PrintfullToDoList:
Prints the entire to-do list.

9. PrintSpecificDateToDoList:
Prints tasks for a specific date.

10. PrintSpecificMonthToDoList:
Prints tasks for a specific month.


Main Function

Implements a menu-driven interface to interact with the to-do list.
Allows the user to perform various operations by choosing options.


How to Compile and Run

1. Compile:
Use a C++ compiler to compile the code (e.g., g++ todo.cpp -o todo).

2. Run:
Execute the compiled program (e.g., ./todo).

3. Follow On-screen Instructions:
Use the provided menu to add, delete, modify, and display tasks.

4. Exit:
Choose the exit option when done.


Note

1. The program handles date and month input validation to ensure valid values.
2. Time input is validated to be in the 24-hour format.
3. Modification and deletion operations provide appropriate messages if tasks are not found.


The code is well-organized and modular, making it easy to understand and maintain.
The use of functions for various operations is a good practice, promoting code reusability.
The program generally handles errors well, providing messages when tasks are not found or invalid input is detected.
The logical flow of the program is clear, making it easy to follow the sequence of operations.
The menu-driven interface is a good approach for user interaction.

Feel free to use and modify this to-do list management system according to your needs. Happy organizing!
