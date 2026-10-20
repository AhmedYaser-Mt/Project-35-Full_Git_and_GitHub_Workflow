#include <iostream>
#include "TaskManager.h"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();
    AddTask();
    DeleteTask();

    return 0;
}