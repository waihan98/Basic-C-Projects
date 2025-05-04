// src/todolist.h
#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include <string>
#include <fstream>

class ToDoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string& task);
    void removeTask(int index);
    void listTasks() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

bool exist(std::string PATH);
#endif
