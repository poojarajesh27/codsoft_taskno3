#include<iostream>
#include<cstdlib>
using namespace std;
char array[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
class tic_tac_toe
{
   
    public:
      void display()
      {
        
        
         cout<<"   |   |   \n";
         cout<<" "<<array[0][0]<<" | "<<array[0][1]<<" | "<<array[0][2]<<" \n";
         cout<<"___|___|___\n";
         cout<<"   |   |   \n";
         cout<<" "<<array[1][0]<<" | "<<array[1][1]<<" | "<<array[1][2]<<" \n";
         cout<<"___|___|___\n";
         cout<<"   |   |   \n";
         cout<<" "<<array[2][0]<<" | "<<array[2][1]<<" | "<<array[2][2]<<" \n";
         
      }
      
      int check()
      {
        int i,j;
        for(i=0;i<3;i++)
        {
            if((array[i][0]==array[i][1]&&array[i][1]==array[i][2])||
              (array[0][i]==array[1][i]&&array[1][i]==array[2][i]))
             {
                return 1;
             }
            else if((array[0][0]==array[1][1]&&array[1][1]==array[2][2])||
                    (array[0][2]==array[1][1]&&array[1][1]==array[2][0]))
                    {
                        return 1;
                    }

        }
        
        return 0;
      }
      
};
int main()
{
    cout<<" ||  TIC TAC TOE  ||\n";
        
    tic_tac_toe t;
     int player=1,play,result,count=0,place1,place2,condition=1,continue1=1;
     t.display();
   
    
          
           while(condition==1)
           {
                
                player=(player%2==0)?2:1;
                play=(player==1)?'x':'o';
                cout<<"enter place where player "<<player<<" wants to mark:\n";
                cin>>place1>>place2;
                if(array[place1][place2]=='x'||array[place1][place2]=='o') 
                {
                   cout<<"box already filled try some other box!!";
                   --player;
                }
                else
                {
                array[place1][place2]=play;
                count++;
                }
                
                t.display();
                result=t.check();
                if (result==1)
                {
                   cout<<"congrats!! player "<<player<<" wins the game!!";
                   condition=0;
                }
                else if(result==2)
                {
                   cout<<"match draw!!";
                }
                if(count==9)
                { 
                    cout<<"match draw!!";
                    condition=0;
                } 
                ++player;
           }
           
           
     return 0;
}

