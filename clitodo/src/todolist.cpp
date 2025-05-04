#include "todolist.h"
#include <iostream>
#include <fstream>

void ToDoList::addTask(const std::string& task)
{
    tasks.push_back(task);
}
void ToDoList::removeTask(int index)
{
    if(index >= 0 && index < tasks.size())
    {
        tasks.erase(tasks.begin() + index);
        std::cout << "Erased Task" << index <<std::endl;
    }
    else
    {
        std::cout << "Task Unavailable to Delete :(" << std::endl;
    }
}

void ToDoList::listTasks() const
{
    std::cout << "==================" << std::endl;
    std::cout << "    Task List" << std::endl;
    std::cout << "==================" << std::endl;
    for(int i = 0; i < tasks.size(); i++)
    {
        std::cout<< i << " \t" << tasks[i] << "\n";
    }
}

bool exist(std::string PATH)
{
    std::ifstream fin;
    fin.open(PATH.c_str());
    std::cout<< "Checking for File!" << "\n";
    return bool(fin);
}

void ToDoList::saveToFile(const std::string& filename) const
{
    std::ofstream fout(filename);
    if (!fout)
    {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return;
    }
    else
    {
        for(int i = 0; i < tasks.size(); i++)
        {
            fout << tasks[i] << std::endl;
        }
        fout.close();
        std::cout<< "File Saved!" << "\n";
    }
}

void ToDoList::loadFromFile(const std::string& filename)
{
    std::ifstream inFile(filename);
    if (!inFile)
    {
        std::cerr << "Could not open file: " << filename << std::endl;
        return;
    }
    else
    {
        std::string line;
        while (std::getline(inFile, line)) 
        {
            addTask(line);
        }
        inFile.close();
    }
}