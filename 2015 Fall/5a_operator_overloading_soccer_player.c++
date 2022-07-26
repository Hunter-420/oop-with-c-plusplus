/*
    Design a soccer player class that includes three integer fieds a player jersey number,number of goals,
    number of assists and necessary constructors to inialize the data memebers. Overload the > operator
    One player is considered greater than onother is the sum of goals plus assists is greater than that of the others
    Create an array of 11 soccer players, then use the overload > operator to find the player who has the greatesr total
    goal plus assist 
*/
//Initialize array values in constructor
#include<iostream>
using namespace std;

class soccer_player
{
    protected:
    int jersey_no[11];
    int no_goals[11];
    int no_assist[11];


    public:
    soccer_player()
    :
        jersey_no{1,2,3,4,5,6,7,8,9,10,71},
        no_goals{10,4,2,3,1,6,5,9,2,1,40},
        no_assist{1,2,3,4,1,6,7,8,4,2,1}
    {

    }
};

class cal_maxGoalAssist:public soccer_player
{
    private:
    int max_goal_assist,temp,count;
    int goal_assist[11];

    public:
    cal_maxGoalAssist()
    {
        count=0;
        max_goal_assist=no_goals[0]+no_assist[0];

    }

    //operator overloaded
    cal_maxGoalAssist operator>(soccer_player s)
    {
        
        for(int i=1;i<11;i++)
        {
            // cout<<"max_goal_assist : "<<max_goal_assist<<endl;
            goal_assist[i]=no_goals[i]+no_assist[i];
            // cout<<"goal assist : "<<goal_assist[i]<<endl<<endl;

            if(max_goal_assist < goal_assist[i])
            {
                temp=max_goal_assist;
                max_goal_assist=goal_assist[i];
                count=i;
                // cout<<"count : "<<count<<endl;
            }

            else
            {
                continue;
            }
            
        }      
    }

    void display()
        {
            // system("pause");
            // cout<<"count : "<<count<<endl;
            cout<<"Maximum Goal + Assist Details :"<<endl;
            cout<<"Jersey No : "<<jersey_no[count]<<endl;
            cout<<"No of Goals : "<<no_goals[count]<<endl;
            cout<<"No of Assist : "<<no_assist[count]<<endl;
        }
};

int main()
{
    system("cls");
    soccer_player s;
    cal_maxGoalAssist c;
    c>s;
    c.display();
    return 0;
}