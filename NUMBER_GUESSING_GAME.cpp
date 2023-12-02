#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int chooise,min=1,max=10,guess_num;
	int random;
	int chances;
	do{
	cout<<"Choose an option:\n1. Play game\n2. Change maximum number\n3. Change minimum number\n4. Exit game\n"<<endl;
	cout<<"Enter your choice:";
	cin>>chooise;
	switch(chooise)
	{
	case 1:
			cout<<"New game started!"<<endl;
			srand(time(0));
			random = (rand() % (max - min + 1)) + min;
			chances=5;
			do
			{
				
			cout<<"Guess the number (between "<<min<< " and " <<max<<"):";
			cin>>guess_num;
			if(guess_num==random)
			{
				cout<<"Chances left:"<<--chances<<endl;
				cout<<"congratulation! Your guess the number correct \n The number is:  "<<random<<endl<<endl;
				break;
			}
			else if(guess_num<random)
			{
				cout<<"Your guess is too low!";
				cout<<"Chances left:"<<--chances<<endl<<endl;
			}
			else if(guess_num>random)
			{
				cout<<"Your guess is too high!";
				cout<<"Chances left:"<<--chances<<endl<<endl;
			}
		}
		while(chances!=0);
	
		 	break;
	case 2:
		cout<<"Enter the new maximum number:";
		cin>>max;
		break;
	case 3:
		cout<<"Enter the new minimum number:";
		cin>>min;
		break;
	case 4:
		break;
	default:
		cout<<"invalid number"<<endl;
	}
	}
	while(chooise!=4);
	return 0;
}

