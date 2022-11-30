#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
using namespace std;


int main()
{
	string name;
	cout<<"\n--*--*--*--*--*--*--*--*--*--*--*--*\n\n"<<endl;
	
	cout<<"              Enter your Name :                ";
	
	cout<<"\n--*--*--*--*--*--*--*--*--*--*--*--*\n\n"<<endl;
	cin>>name;
	
	cout<<"\n--*--*--*--*--*--*--*--*--*--*--*--*\n\n"<<endl;
	
	cout<<"                Rounds                          ";
	
	cout<<"\n--*--*--*--*--*--*--*--*--*--*--*--*\n\n"<<endl;
	
	int i,round;
	cout<<name<<" How many rounds you want to play ? ";
	cin>>round;
	
	cout<<"\n--*--*--*--*--*--*--*--*--*--*--*--*\n\n"<<endl;
	
	cout<<"                Game                           ";
	
	cout<<"\n--*--*--*--*--*--*--*--*--*--*--*--*\n\n"<<endl;
	
	int player_score=0,computer_score=0;
	
	for(i=1; i<=round; round++)
	{
		int player_choice,computer_choice;
		cout<<"Round No : "<<i<<"/"<<round<<endl;
		cout<<name<<"a score =  "<<player_score<<endl;
		cout<<"Computer score = "<<computer_score<<endl;
		cout<<"1. ROCK "<<endl;
		cout<<"2. PAPER "<<endl;
		cout<<"3. SCISSOR"<<endl;
		do{
		    cout<<"Select you choice "<<endl;
		    cin>>player_choice;	
		}while(player_choice !=1 && player_choice !=2 && player_choice !=3);
		
		srand(time(0));
		computer_choice = (rand()%3)+1;
		if(player_choice ==1 && computer_choice ==3)
		{
			cout<<"Player Win ."<<endl;
			player_score++;
		}
		else if(player_choice ==2 && computer_choice ==1)
		{
			cout<<"Player Win ."<<endl;
			player_score++;
		}
		else if(player_choice ==3 && computer_choice ==2)
		{
			cout<<"Player Win ."<<endl;
			player_score++;
		}
		else if(player_choice ==  computer_choice )
		{
			cout<<" DRAW"<<endl;
		}
		else
		{
			cout<<"Computer win"<<endl;
			computer_score ++;
		}
		cout<<"press any key to continue"<<endl;
       		
	}
	
		if(computer_score == player_score)
		{
			cout<<" Game is Drawn "<<endl;
		}
		else if(player_score > computer_score)
		{
			cout<<name<< "you won the game "<<endl;
		}
		else
		{
			cout<<"Computer Won the game "<<endl;
		}
		
}

