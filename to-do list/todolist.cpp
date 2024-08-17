#include <iostream>
#include <windows.h>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
    cout << "Tasks To Do: "<< endl;
    cout << "---------------------------------------------"<<endl;
    for(int i=0;i<task_count ; i++)
    {
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
    cout << "----------------------------------------------"<<endl;
}






int main()
{
    string tasks[10] = {""};

    int task_count = 0;

int option = -1;
while(option != 0)
{

    cout << "--- TO DO LIST ---" << endl;
    cout << "1 - TO Add New Task" << endl;
     cout << "2 - TO View Task" << endl;
     cout << "3 - TO Delete Task" << endl;
     cout << "4 - To Mark Task as complete" << endl;
      cout << "0 - Terminate The Program" << endl;
      cin >> option;

      switch(option)
      {
        case 1:
        {
            if(task_count > 9)
            {
                cout << "```TASK LIST IS FULL```" << endl;
            }
            else
            {
                cout << "Enter A New Task: ";
                cin.ignore();
                getline(cin,tasks[task_count]);
                task_count++;
            }
            break;
        }
        case 2:
        print_tasks(tasks,task_count);
        break;

        case 3:
        {
            int del_task = 0;
            cout <<" Enter A task to delete: ";
            cin >> del_task;

            if (del_task<0 || del_task >9)
            {
                cout << "You Entered Invalid Task No." << endl;
                break;
            }
            for (int i=del_task ; i<task_count ; i++)
            {
                tasks[i] = tasks[i+1];
            }
            task_count = task_count - 1;
            break;
        }
    
        }


}
    return 0;
}
