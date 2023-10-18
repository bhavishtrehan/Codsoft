#include <bits/stdc++.h>
using namespace std;

struct Task{
    string s;
    bool status;
};

class ToDoList{
    public:
        void addTask( string& s) {
        tasks.push_back({s, false});
        cout << "Task added: " << s << endl;
    }
    
    void viewTasks() {
       
        cout << "To-Do List:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". ";
            if (tasks[i].status) {
                cout << "[X] ";
            } else {
                cout << "[ ] ";
            }
            cout << tasks[i].s << endl;
        }
    }
    
    void markTaskDone(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            tasks[index - 1].status = true;
            cout << "Task marked as done: " << tasks[index - 1].s << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }
    
    void deleteTask(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            cout << "Task deleted: " << tasks[index - 1].s << endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task number." << endl;
        }
    }
    private:
    vector<Task> tasks;
};



int main() {
    ToDoList todoList;
    char choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete a task" << endl;
        cout << "4. Mark task as completed"<<endl;
        cout << "5. Quit" << endl;
        cout << "Enter: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                string s;
                cout << "Enter the task: ";
                cin.ignore();
                getline(cin, s);
                todoList.addTask(s);
                break;
            }
            case '2':
                todoList.viewTasks();
                break;
            case '3': {
                int index;
                cout << "Enter the task to be deleted: ";
                cin >> index;
                todoList.deleteTask(index);
                break;
            }
            
            case '4': { 
                int index;
                cout << "Enter the task to be marked as done: ";
                cin >> index;
                todoList.markTaskDone(index);
                break;
            }
            
            case '5':
                break;
            default:
                cout << "Invalid entry" << endl;
        }
    } while (choice != '4');

    return 0;
}