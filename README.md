<h1>To-Do List Management System</h1>

This C++ program implements a simple To-Do List Management System using a singly linked list. Users can perform various operations such as adding tasks, deleting tasks, modifying tasks, and displaying tasks. The program provides a menu-driven interface for user interaction.

<h2>How to Use :-</h2>

<h3>1. Add Task:</h3>
Enter task details, including task name, date (DD MM), and time (24-hour format, e.g., 2335).
Tasks are inserted into the list in chronological order.

<h3>2. Delete Task:</h3>
Choose from options to delete the first task, last task, or a specific task by name.
Follow on-screen instructions to complete the deletion process.

<h3>3. Modify Task:</h3>
Choose from options to modify a task by name, date, or time.
Follow on-screen instructions to provide the necessary details for modification.

<h3>4. Display Task:</h3>
Choose from options to display the full to-do list, tasks for a specific date, tasks for a specific month, or go back to the main menu.

<h3>5. Exit:</h3>
Choose the exit option to end the program.


<h2>Code Structure</h2>

<h3>Task Structure</h3>
The Task structure represents a task node in the linked list and includes task details such as name, date, time, and a pointer to the next task.


<h2>Functions</h2>

<h3>1. InsertinOrder:</h3>
Inserts a new task into the linked list in chronological order.

<h3>2. DeleteFirstTask:</h3>
Deletes the first task in the list.

<h3>3.DeleteLastTask:</h3>
Deletes the last task in the list.

<h3>4. DeleteBySearch:</h3>
Deletes a task by searching for its name.

<h3>5. UpdateByTaskName:</h3>
Updates the task name by searching for the old name.

<h3>6. UpdateByTaskDateandMonth:</h3>
Updates the task date and month by searching for the task name.

<h3>7. UpdateByTaskTime:</h3>
Updates the task time by searching for the task name.

<h3>8. PrintfullToDoList:</h3>
Prints the entire to-do list.

<h3>9. PrintSpecificDateToDoList:</h3>
Prints tasks for a specific date.

<h3>10. PrintSpecificMonthToDoList:</h3>
Prints tasks for a specific month.


<h2>Main Function</h2>

Implements a menu-driven interface to interact with the to-do list.
Allows the user to perform various operations by choosing options.


<h2>How to Compile and Run</h2>

<h3>1. Compile:</h3>
Use a C++ compiler to compile the code (e.g., g++ todo.cpp -o todo).

<h3>2. Run:</h3>
Execute the compiled program (e.g., ./todo).

<h3>3. Follow On-screen Instructions:</h3>
Use the provided menu to add, delete, modify, and display tasks.

<h3>4. Exit:</h3>
Choose the exit option when done.


<h2>Note</h2>

1. The program handles date and month input validation to ensure valid values.
2. Time input is validated to be in the 24-hour format.
3. Modification and deletion operations provide appropriate messages if tasks are not found.


The code is well-organized and modular, making it easy to understand and maintain.
The use of functions for various operations is a good practice, promoting code reusability.
The program generally handles errors well, providing messages when tasks are not found or invalid input is detected.
The logical flow of the program is clear, making it easy to follow the sequence of operations.
The menu-driven interface is a good approach for user interaction.

<h1>Feel free to use and modify this to-do list management system according to your needs. Happy organizing!</h1>
