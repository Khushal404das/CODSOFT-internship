#include<iostream>
using namespace std;
int main(){
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int player=1;
    char mark;
    int row,col;
    int gameover=0;
    int i,j;
    for (i=0;i<3;i++) 
		{
		    cout<<board[i][0]<<" | "<<board[i][1]<<" | "<<board[i][2];
		    if(i!=2) 
			{
				cout<<endl;
		        cout<<"---+---+---"<<endl;
		    }
		}
		cout<<endl;

    while(!gameover) 
	{
        cout<<endl;
        cout<<"player" <<player<<" , enter the row and column numbers(1-3) to place your mark: ";
        cin>>row;
		cin>>col;
        if(row<1||row>3||col<1||col>3) 
		{
            cout<<"Invalid move. Please enter row and column numbers between 1 and 3."<<endl;
            continue;
        }
        if(board[row-1][col-1]=='X'||board[row-1][col-1]=='O') 
		{
            cout<<"That cell is already occupied. Please choose another one."<<endl;
            continue;
        }
        if(player==1) 
		{
            mark='X';
        } else 
		{
            mark='O';
        }
        board[row-1][col-1]=mark;
        cout<<endl;
		for(i=0;i<3;i++) 
		{
		    cout<<board[i][0]<<" | "<<board[i][1]<<" | "<<board[i][2];
		    if(i!=2) 
			{
				cout<<endl;
		        cout<<"---+---+---"<<endl;
		    }
		}
		cout<<endl;
        for(i=0;i<3;i++) 
		{
            if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]) 
			{
				cout<<endl;
                cout<<"player" <<player <<"wins!"<<endl;
                gameover=1;
                break;
            }
            if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]) 
			{
                cout<<endl<<"player" <<player <<"wins!"<<endl;
                gameover=1;
                break;
            }
        }
        if(!gameover&&board[0][0]==board[1][1]&&board[0][0]==board[2][2]) 
		{
            cout<<endl<<"player" <<player <<"wins!"<<endl;
            gameover=1;
        }
        if(!gameover&&board[0][2]==board[1][1]&&board[0][2]==board[2][0]) 
		{
            cout<<endl<<"player" <<player <<"wins!"<<endl;
            gameover=1;
        }
        if(!gameover) 
		{
            int tie=1;
            for(i=0; i<3;i++) 
			{
                for(j=0;j<3;j++) 
				{
                    if(board[i][j]!='X'&&board[i][j]!='O') 
					{
                        tie=0;
                        break;
                    }
                }
                if(!tie) 
				{
                    break;
                }
            }
            if(tie) 
			{
                cout<<endl<<"It's a tie!"<<endl;
                gameover=1;
            }
        }
	    if(player==1) 
		{
	        player=2;
	    } 
		else 
		{
	        player=1;
	    }
		
	}
return 0;
}
