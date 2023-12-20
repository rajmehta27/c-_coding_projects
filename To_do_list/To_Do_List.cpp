#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

//Creating a Node by Using structure Task ehich points towards next. Overall project is based on Singly Linked List
//You can add more details for your tasks and modify the code by adding elements like Task Description, Year goals, Status, categroy, etc.

struct Task
{
    string task;
    int date;
    int month;
    int time;
    Task* next;
};

//The function given below performs the task of printing the whole linked list of Tasks input by the user using Switch case in the main program

void printfullToDoList(Task* p)
{
    while(p != nullptr)
    {
        cout << "\nTask : " << p -> task << endl;
        cout << "\nDate : " << p -> date << " / " << p -> month << "\nTime :  " << p -> time;
        p = p -> next;
    }
}

/*
The function given below performs the task of prints the linked list of Tasks of the given date input by user input by 
providing the option of using Switch case in the main program where a user can input the date and can access the data
of Tasks of the specific dates.
*/

void printSpecificDateToDoList(Task* p, int date_list)
{
    while(p != nullptr)
    {
        if(p -> date == date_list)
        {
            cout << "\nTask : " << p -> task << endl;
            cout << "\nDate : " << p -> date << " / " << p -> month << "\nTime :  " << p -> time;
            p = p -> next;
        }
        else
        {
            p = p -> next;
        }
    }
}


/*
The function given below performs the task of prints the linked list of Tasks of the given month input by user input by 
providing the option of using Switch case in the main program where a user can input the month and can access the data
of Tasks of the specific dates.
*/


void printSpecificMonthToDoList(Task* p, int month_list)
{
    while(p != nullptr)
    {
        if(p -> month == month_list)
        {
            cout << "\nTask : " << p -> task << endl;
            cout << "\nDate : " << p -> date << " / " << p -> month << "\nTime : " << p -> time;
            p = p -> next;
        }
        else
        {
            p = p -> next;
        }
    }
}

/*
The function given below performs the operation of inserting the Task details and creates a Node where
it stores the details input by the user and inserts it in a Linked List at the beginning everytime the user calls the function.
*/

Task* insertinOrder(Task* head, string task_assigned, int date_assigned, int month_assigned, int time_assigned)
{
    Task* newTask = new Task();
    newTask -> task = task_assigned;
    newTask -> date = date_assigned;
    newTask -> month = month_assigned;
    newTask -> time = time_assigned;
    newTask -> next = head;

    return newTask;
}

/*
The function given below performs the operation of deleting the task from the beginning by removing the first Node
of the Linked List. Everytime the user calls the function a task is deleted from the beginning only
*/

Task* deleteFirstTask(Task* head)
{
    if(head == nullptr)
    {
        cout << "No tasks currently present in the list.";
        return nullptr;
    }
    else
    {
        Task* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
}

/*
The function given below performs the operation of deleting the task from the end by removing the last Node
of the Linked List. Everytime the user calls the function a task is deleted from the end only
*/

Task* deleteLastTask(Task* head)
{
    if(head == nullptr)
    {
        cout << "No tasks currently present in the list.";
        return nullptr;
    }
    else if(head -> next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Task* previous = nullptr;
    Task* current = head;
    while(current ->  next != nullptr)
    {
        previous = current;
        current = current -> next;
    }

    delete current;
    previous -> next = nullptr;

    return head;
}

/*
The function given below performs the operation of deleting the task by searching the task name and removes the Node which
includes the following information i.e. Task Name input by the user. Everytime the user calls the function a task is deleted 
through task name input by the user only. If the details does not match a message known as Task not found is printed.
*/

Task* deleteBySearch(Task* head, string search_task)
{
    Task* previous = nullptr;
    Task* current = head;
    
    while(current != nullptr)
    {
        if(current -> task == search_task)
        {
            if(previous != nullptr)
            {
                previous -> next = current -> next;
            }
            else
            {
                head = current -> next;
            }

            delete current;
            cout << "Task Deleted : " << search_task << endl;
            return head;

        }
        previous = current;
        current = current -> next;
    }

    cout << "Task not found : " << search_task << endl;
    return head;
}

/*
Here the user can manipulate the Name of the task by entering the Task name and modify it accordingly. If the input details
does not match with the following Nodes in the given Linked List, Task not found message will be prompted.
*/

Task* updateByTaskName(Task* head, string task_name, string new_task_assigned)
{
    Task* current = head;
    while(current != nullptr)
    {
        if(current -> task == task_name)
        {
            current -> task = new_task_assigned;
            return head;
        }
        current = current -> next;
    }

    cout << "Task Not found : " << task_name << endl;
    return head;
}

/*
Here the user can modify the Date and Month of the task by entering the Task Name and modify the Node's details accordingly.
If the input details does not match with the following Nodes in the given Linked List, Task not found message will be prompted.
*/


Task* updateByTaskDateandMonth(Task* head, string task_name, int new_date_assigned, int new_month_assigned)
{
    Task* current = head;
    while(current != nullptr)
    {
        if(current -> task == task_name)
        {
            current -> date = new_date_assigned;
            current -> month = new_month_assigned;
            return head;
        }
        current = current -> next;
    }

    cout << "Task Not found : " << task_name << endl;
    return head;
}

/*
Here the user can modify the Time of the Task by entering the Task Name and modify the Node's details accordingly.
If the input details does not match with the following Nodes in the given Linked List, Task not found message will be prompted.
*/

Task* updateByTaskTime(Task* head, string task_name, int new_time_assigned)
{
    Task* current = head;
    while(current != nullptr)
    {
        if(current -> task == task_name)
        {
            current -> time = new_time_assigned;
            return head;
        }
        current = current -> next;
    }

    cout << "Task Not found : " << task_name << endl;
    return head;
}


//Below is the menu driven program where user can perform various operations through Switch cases like Instertions, deletions, modify, print, etc.

int main()
{
    Task* ToDoList = nullptr;
    
    int choice;
    string task_assigned, search_task;
    int date_assigned, month_assigned, time_assigned;
    char answer;

    do
    {
        cout << "TO DO LIST : ";
        cout << endl << "1. ADD TASK \n2. DELETE TASK\n3. MODIFY TASK\n4. DISPLAY TASK\n5. EXIT\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice)
        {
            case 1 :{
                cout << "Enter Task : ";
                cin.ignore();
                getline(cin, task_assigned);

                cout << "Enter Task date (DD MM) : ";
                cin >> date_assigned >> month_assigned;
                while(date_assigned < 0 || date_assigned > 31)
                {
                    cout<<"Enter valid date : ";
                    cin >> date_assigned;
                }
                while(month_assigned < 0 || month_assigned > 12)
                {
                    cout<<"Enter valid month : ";
                    cin >> month_assigned;
                }

                while(month_assigned == 2 && date_assigned > 28)
                {
                    cout<<"Enter valid date : ";
                    cin >> date_assigned;
                }

                cout << "Enter Task time (24-hour format eg. 2335) : ";
                cin >> time_assigned;
                while(time_assigned > 2400 || time_assigned < 0)
                {
                    cout<<"Enter valid time : ";
                    cin >> time_assigned;
                }

                ToDoList = insertinOrder(ToDoList, task_assigned, date_assigned, month_assigned, time_assigned);
                break;
            }

            case 2 :{
                int delete_choice;
                do
                {
                    cout << "\n1.DELETE FIRST TASK\n2. DELETE LAST TASK\n3. DELETE SPECIFIC TASK\n";
                    cout << "Enter your choice : ";
                    cin >> delete_choice;

                    switch (delete_choice)
                    {
                        case 1:
                        {
                            ToDoList = deleteFirstTask(ToDoList);
                            cout << "\nDo you want to delete more? [Y/N] : ";
                            cin >> answer;
                            break;
                        }
                        case 2:
                        {
                            ToDoList = deleteLastTask(ToDoList);
                            cout << "\nDo you want to delete more? [Y/N] : ";
                            cin >> answer;
                            break;
                        }
                        case 3:
                        {
                            cout << "\nEnter Task Name : ";
                            cin.ignore();
                            getline(cin, search_task);
                            ToDoList = deleteBySearch(ToDoList, search_task);
                            cout << "\nDo you want to delete more? [Y/N] : ";
                            cin >> answer;
                            break;
                        }

                        default:
                        {
                            cout << "\nEnter valid input!";
                            break;
                        }
                    }
                }while(answer == 'Y' || answer == 'y');
                break;
            }

            case 3 :
            {
                int modify_choice;
                string search_tasks, search_date, search_month, search_time;
                string new_task_assigned;
                int new_date_assigned, new_month_assigned, new_time_assigned;
                do
                {
                    cout << "\n1.MODIFY TASK BY NAME\n2. MODIFY TASK BY DATE, MONTH\n3.MODIFY TASK BY TIME\n";
                    cout << "Enter your choice : ";
                    cin >> modify_choice;

                    switch(modify_choice)
                    {
                        case 1:
                        {
                            cout << "\nEnter the old name of Task : ";
                            cin.ignore();
                            getline(cin, search_tasks);
                            cout << "\nEnter new name of Task : ";
                            getline(cin, new_task_assigned);
                            ToDoList = updateByTaskName(ToDoList, search_tasks, new_task_assigned);
                            cout << "\nDo you want to modify more? [Y/N] : ";
                            cin >> answer;
                            break;
                        }

                        case 2:
                        {
                            cout << "\nEnter the name of Task : ";
                            cin.ignore();
                            getline(cin, search_tasks);
                            cout << "\nEnter new date of Task : ";
                            cin >> new_date_assigned;
                            cout << "\nEnter new month of Task : ";
                            cin >> new_month_assigned;
                            ToDoList = updateByTaskDateandMonth(ToDoList, search_tasks, new_date_assigned, new_month_assigned);
                            cout << "\nDo you want to modify more? [Y/N] : ";
                            cin >> answer;
                            break;
                        }

                        case 3:
                        {
                            cout << "\nEnter the name of Task : ";
                            cin.ignore();
                            getline(cin, search_tasks);
                            cout << "\nEnter new time of Task : ";
                            cin >> new_time_assigned;
                            ToDoList = updateByTaskTime(ToDoList, search_tasks, new_time_assigned);
                            cout << "\nDo you want to modify more? [Y/N] : ";
                            cin >> answer;
                            break;
                        }
                        default :
                        {
                            cout<<"\nEnter valid option!!";
                            break;
                        }
                    }
                }while(answer == 'Y' || answer == 'y');

                break;
            }

            case 4 :
            {
                int print_choice;
                do
                {
                    cout<<"\n1.PRINT FULL LIST\n2.PRINT BY SPECIFIC DATE\n3.PRINT BY SPECIFIC MONTH\n4.BACK TO OPTIONS\n";
                    cout<<"Enter your choice : ";
                    cin >> print_choice;

                    switch(print_choice)
                    {
                        case 1:
                        {
                            printfullToDoList(ToDoList);
                            break;
                        }
                        case 2:
                        {
                            int date_list;
                            cout << "\nEnter the date whose tasks you want to access : ";
                            cin >> date_list;
                            printSpecificDateToDoList(ToDoList, date_list);
                            break;
                        }
                        case 3:
                        {
                            int month_list;
                            cout << "\nEnter the month whose tasks you want to access : ";
                            cin >> month_list;
                            printSpecificMonthToDoList(ToDoList, month_list);
                            break;
                        }
                        case 4:
                        {
                            break;
                        }
                        default :
                        {
                            cout<<"\nEnter valid option!!";
                            break;
                        }
                    }

                }while(print_choice != 4);

                break;
            }

            case 5 :
            {
                cout << "\nThank you. All the best for your tasks :) ";
                break;
            }

        }
    }while(choice != 5);
}