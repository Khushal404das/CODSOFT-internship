#include<iostream>
#include<string>
using namespace std;
const int Total_Task = 10;
struct Task{
    string description;
    bool completed;
};
class ToDoList{
	private:
	    Task tasks[Total_Task];
	    int taskCount;
	public:
	    ToDoList():taskCount(0){}
	    void addTask(const string& description){
	        if (taskCount<Total_Task){
	            Task newTask;
	            newTask.description=description;
	            newTask.completed=false;
	            tasks[taskCount++]=newTask;
	            cout<<"Task added: "<<description<<endl;
	        } 
			else{
	            cout<<"Task list is full. Cannot add more tasks."<<endl;
	        }
	    }
	    void viewTasks(){
	        if(taskCount==0){
	            cout<<"No tasks available."<<endl;
	        }
			else{
	            cout<<"Tasks:"<<endl;
	            for(int i=0;i<taskCount;++i){
	                cout<<i+1<<". "<<(tasks[i].completed?"[X] ":"[ ] ")<<tasks[i].description<<endl;
	            }
	        }
	    }
	    void markTaskAsCompleted(int index){
	        if (index>=1&&index<=taskCount){
	            tasks[index-1].completed=true;
	            cout<<"Task marked as completed: "<<tasks[index-1].description<<endl;
	        } 
			else{
	            cout<<"Invalid task index."<<endl;
	        }
	    }
	    void removeTask(int index){
	        if(index>=1&&index<=taskCount)
			{
	            cout<<"Task removed: "<<tasks[index-1].description<<endl;
	            for (int i=index-1;i<taskCount-1;++i){
	                tasks[i]=tasks[i+1];
	            }
	            --taskCount;
	        } 
			else{
	            cout<<"Invalid task index."<<endl;
	        }
	    }
};

int main(){
    ToDoList toDoList;
    int choice;
    do{
        cout<<"\n============ TO-DO LIST MANAGER ============"<<endl;
        cout<<"\t\t1. Add Task\n\t\t2. View Tasks\n\t\t3. Mark Task as Completed\n\t\t4. Remove Task\n\t\t0. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1:
                {
                    string taskDescription;
                    cout<<"Enter task description: ";
                    cin.ignore();
                    getline(cin,taskDescription);
                    toDoList.addTask(taskDescription);
                }
                break;
            case 2:
                toDoList.viewTasks();
                break;
            case 3:
                {
                    int taskIndex;
                    cout<<"Enter task index to mark as completed: ";
                    cin>>taskIndex;
                    toDoList.markTaskAsCompleted(taskIndex);
                }
                break;
            case 4:
                {
                    int taskIndex;
                    cout<<"Enter task index to remove: ";
                    cin>>taskIndex;
                    toDoList.removeTask(taskIndex);
                }
                break;
            case 0:
                cout << "Exiting the program. Goodbye!"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }

    } 
	while(choice!=0);

    return 0;
}

