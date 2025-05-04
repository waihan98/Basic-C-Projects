#include <iostream>
#include <fstream>
#include <limits> // needed for std::numeric_limits
#include "todolist.h"

int main() {
    int userinput = 0;
    ToDoList user;

    if(exist("data/todos.txt"))
    {
        std::cout<< "Found TodoList!" << "\n";
        user.loadFromFile("data/todos.txt");
    }
    else
    {
        std::cout<< "Creating TodoList!" << "\n";
        std::ofstream MyFile("data/todos.txt");
        if(exist("data/todos.txt"))
        {
            std::cout<< "TodoList Successfully Created!" << "\n";
        }
        else
        {
            std::cout<< "TodoList Failed!" << "\n";
        }
    }
    std::cout << "Welcome to To-Do List!" << std::endl;

    while (userinput != 4) {
        std::cout << "\n--- Menu ---\n";
        std::cout << "1. Add task\n";
        std::cout << "2. Remove task\n";
        std::cout << "3. List tasks\n";
        std::cout << "4. Exit\n";
        std::cout << "Choice: ";
        std::cin >> userinput;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

        if (userinput == 1) {
            std::string task;
            std::cout << "Task name to add: ";
            std::getline(std::cin, task);
            user.addTask(task);
        }

        else if (userinput == 2) {
            int index;
            std::cout << "Enter task index to remove: ";
            std::cin >> index;
            user.removeTask(index);
        }

        else if (userinput == 3) {
            user.listTasks();
        }

        else if (userinput == 4) {
            user.saveToFile("data/todos.txt");
            std::cout << "Goodbye!\n";
        }

        else {
            std::cout << "Invalid choice, try again.\n";
        }
    }

    return 0;
}
