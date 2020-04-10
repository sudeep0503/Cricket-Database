#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{ 
	fstream append("database.txt",ios::app);
	int n,c;
	
		
	cout<<endl<<endl;
	cout<<setw(125)<<"*****************************************"<<endl;
	append<<setw(125)<<"*****************************************"<<endl;
	cout<<setw(125)<<"             Cricket-Database            "<<endl;
	append<<setw(125)<<"             Cricket-Database            "<<endl;
	cout<<setw(125)<<"*****************************************"<<endl;
	append<<setw(125)<<"*****************************************"<<endl;
	cout<<endl<<endl;
	append<<endl<<endl;	
	append<<endl<<endl;
	append<<endl<<endl;	
		
	
		
	do
	{
		cout<<"How many players data you want to input:-";
		append<<"How many players data you want to input:-";
		cin>>n;
		
		int m1=0,b1=0,i1=0,r1=0,bf1=0,f1=0,h1=0,w1=0,hs1=0;
		string name1,bb1,country1;
		int m2=0,b2=0,i2=0,r2=0,bf2=0,f2=0,h2=0,w2=0,hs2=0;
		string name2,bb2,country2;
		int m3=0,b3=0,i3=0,r3=0,bf3=0,f3=0,h3=0,w3=0,hs3=0;
		string name3,bb3,country3;
		for(int i=1;i<=n;i++)
		{
		
		
		if(i==1)
			{
			
				cout<<endl<<endl<<"Please fill Detalis of "<<(i)<<"st Player:- "<<endl<<endl;
				append<<endl<<endl<<"Please fill Detalis of "<<(i)<<"st Player:- "<<endl<<endl;
			
				cout<<"Name:- "<<endl<<"Country:- "<<endl<<"Matches Played:- "<<endl<<"Innings:- "<<endl<<"Runs:- "<<endl<<"Bowl Faced";
				append<<"Name:- "<<endl<<"Country:- "<<endl<<"Matches Played:- "<<endl<<"Innings:- "<<endl<<"Runs:- "<<endl<<"Bowl Faced";
				cout<<endl<<"High Score:- "<<endl<<"Total Fifties:- "<<endl<<"Hundreds:- "<<endl<<"Bowls:- "<<endl<<"Wickets:- ";
				append<<endl<<"High Score:- "<<endl<<"Total Fifties:- "<<endl<<"Hundreds:- "<<endl<<"Bowls:- "<<endl<<"Wickets:- ";
				cout<<endl<<"Best Figure:- "<<endl<<endl;
				append<<endl<<"Best Figure:- "<<endl<<endl;
		
			cin>>name1>>country1>>m1>>i1>>r1>>bf1>>hs1>>f1>>h1>>b1>>w1>>bf1;
		}
		
		if(i==2)
		{
			
			cout<<endl<<endl<<"Please fill Detalis of "<<(i)<<"nd Player:- "<<endl<<endl;
			append<<endl<<endl<<"Please fill Detalis of "<<(i)<<"st Player:- "<<endl<<endl;
			
			cout<<"Name:- "<<endl<<"Country:- "<<endl<<"Matches Played:- "<<endl<<"Innings:- "<<endl<<"Runs:- "<<endl<<"Bowl Faced";
			append<<"Name:- "<<endl<<"Country:- "<<endl<<"Matches Played:- "<<endl<<"Innings:- "<<endl<<"Runs:- "<<endl<<"Bowl Faced";
			cout<<endl<<"High Score:- "<<endl<<"Total Fifties:- "<<endl<<"Hundreds:- "<<endl<<"Bowls:- "<<endl<<"Wickets:- ";
			append<<endl<<"High Score:- "<<endl<<"Total Fifties:- "<<endl<<"Hundreds:- "<<endl<<"Bowls:- "<<endl<<"Wickets:- ";
			cout<<endl<<"Best Figure:- ";
			append<<endl<<"Best Figure:- ";
			
			cin>>name2>>country2>>m2>>i2>>r2>>bf2>>hs2>>f2>>h2>>b2>>w2>>bf2;
		}
		
		if(i==3)
		{
			
			cout<<endl<<endl<<"Please fill Detalis of "<<(i)<<"rd Player:- "<<endl<<endl;
			append<<endl<<endl<<"Please fill Detalis of "<<(i)<<"st Player:- "<<endl<<endl;
			
			cout<<"Name:- "<<endl<<"Country:- "<<endl<<"Matches Played:- "<<endl<<"Innings:- "<<endl<<"Runs:- "<<endl<<"Bowl Faced";
			append<<"Name:- "<<endl<<"Country:- "<<endl<<"Matches Played:- "<<endl<<"Innings:- "<<endl<<"Runs:- "<<endl<<"Bowl Faced";
			cout<<endl<<"High Score:- "<<endl<<"Total Fifties:- "<<endl<<"Hundreds:- "<<endl<<"Bowls:- "<<endl<<"Wickets:- ";
			append<<endl<<"High Score:- "<<endl<<"Total Fifties:- "<<endl<<"Hundreds:- "<<endl<<"Bowls:- "<<endl<<"Wickets:- ";
			cout<<endl<<"Best Figure:- ";
			append<<endl<<"Best Figure:- ";
			
			cin>>name3>>country3>>m3>>i3>>r3>>bf3>>hs3>>f3>>h3>>b3>>w3>>bf3;
		}
		
	}
		
	cout<<endl<<endl<<endl<<endl;
	append<<endl<<endl<<endl<<endl;
	cout<<setw(35)<<"Who's Stats you want to show:-"<<endl<<endl;
	append<<setw(35)<<"Who's Stats you want to show:-"<<endl<<endl;
	cout<<"\t\t\t\t"<<"1. "<<name1<<endl<<"\t\t\t\t"<<"2. "<<name2<<endl<<"\t\t\t\t"<<"3. "<<name3<<endl;
	append<<"\t\t\t\t"<<"1. "<<name1<<endl<<"\t\t\t\t"<<"2. "<<name2<<endl<<"\t\t\t\t"<<"3. "<<name3<<endl;
	cout<<"\t\t\t\t";
	append<<"\t\t\t\t";
	cout<<endl<<endl<<endl<<endl;
	append<<endl<<endl<<endl<<endl;
		
	if(n==1)
	{
		cout<<setw(108)<<"Showing stats of "<<name1<<endl<<endl<<endl;
		append<<setw(108)<<"Showing stats of "<<name1<<endl<<endl<<endl;
		cout<<setw(10)<<"Country"<<setw(20)<<"Matches"<<setw(20)<<"Innings"<<setw(15)<<"Runs"<<setw(20)<<"Balls Faced"<<setw(20)<<"Highest Runs";
		append<<setw(10)<<"Country"<<setw(20)<<"Matches"<<setw(20)<<"Innings"<<setw(15)<<"Runs"<<setw(20)<<"Balls Faced"<<setw(20)<<"Highest Runs";
		cout<<setw(20)<<"Fifties"<<setw(20)<<"Hundreds"<<setw(20)<<"Bowled"<<setw(20)<<"Wickets"<<setw(20)<<"Best Figures"<<endl;
		append<<setw(20)<<"Fifties"<<setw(20)<<"Hundreds"<<setw(20)<<"Bowled"<<setw(20)<<"Wickets"<<setw(20)<<"Best Figures"<<endl;
		cout<<setw(11)<<"_________"<<setw(20)<<"_________"<<setw(20)<<"_________"<<setw(15)<<"_______"<<setw(20)<<"_____________"<<setw(20);
		append<<setw(11)<<"_________"<<setw(20)<<"_________"<<setw(20)<<"_________"<<setw(15)<<"_______"<<setw(20)<<"_____________"<<setw(20);
		cout<<"______________"<<setw(20)<<"_________"<<setw(20)<<"__________"<<setw(20)<<"________"<<setw(20);
		append<<"______________"<<setw(20)<<"_________"<<setw(20)<<"__________"<<setw(20)<<"________"<<setw(20);
		cout<<"_________"<<setw(20)<<"______________"<<endl;
		append<<"_________"<<setw(20)<<"______________"<<endl;
		cout<<endl<<endl;
		append<<endl<<endl;
		cout<<setw(10)<<country1<<setw(20)<<m1<<setw(20)<<i1<<setw(15)<<r1<<setw(20)<<bf1<<setw(20)<<hs1;
		append<<setw(10)<<country1<<setw(20)<<m1<<setw(20)<<i1<<setw(15)<<r1<<setw(20)<<bf1<<setw(20)<<hs1;
		cout<<setw(20)<<f1<<setw(20)<<h1<<setw(20)<<b1<<setw(20)<<w1<<setw(20)<<bb1<<endl;
		append<<setw(20)<<f1<<setw(20)<<h1<<setw(20)<<b1<<setw(20)<<w1<<setw(20)<<bb1<<endl;
	}
	
	if(n==2)
	{
		cout<<setw(108)<<"Showing stats of "<<name2<<endl<<endl<<endl;
		append<<setw(108)<<"Showing stats of "<<name2<<endl<<endl<<endl;
		cout<<setw(10)<<"Country"<<setw(20)<<"Matches"<<setw(20)<<"Innings"<<setw(15)<<"Runs"<<setw(20)<<"Balls Faced"<<setw(20)<<"Highest Runs";
		append<<setw(10)<<"Country"<<setw(20)<<"Matches"<<setw(20)<<"Innings"<<setw(15)<<"Runs"<<setw(20)<<"Balls Faced"<<setw(20)<<"Highest Runs";
		cout<<setw(20)<<"Fifties"<<setw(20)<<"Hundreds"<<setw(20)<<"Bowled"<<setw(20)<<"Wickets"<<setw(20)<<"Best Figures"<<endl;
		append<<setw(20)<<"Fifties"<<setw(20)<<"Hundreds"<<setw(20)<<"Bowled"<<setw(20)<<"Wickets"<<setw(20)<<"Best Figures"<<endl;
		cout<<setw(11)<<"_________"<<setw(20)<<"_________"<<setw(20)<<"_________"<<setw(15)<<"_______"<<setw(20)<<"_____________"<<setw(20);
		append<<setw(11)<<"_________"<<setw(20)<<"_________"<<setw(20)<<"_________"<<setw(15)<<"_______"<<setw(20)<<"_____________"<<setw(20);
		cout<<"______________"<<setw(20)<<"_________"<<setw(20)<<"__________"<<setw(20)<<"________"<<setw(20);
		append<<"______________"<<setw(20)<<"_________"<<setw(20)<<"__________"<<setw(20)<<"________"<<setw(20);
		cout<<"_________"<<setw(20)<<"______________"<<endl;
		append<<"_________"<<setw(20)<<"______________"<<endl;
		cout<<endl<<endl;
		append<<endl<<endl;
		cout<<setw(10)<<country2<<setw(20)<<m2<<setw(20)<<i2<<setw(15)<<r2<<setw(20)<<bf2<<setw(20)<<hs2;
		append<<setw(10)<<country1<<setw(20)<<m1<<setw(20)<<i1<<setw(15)<<r1<<setw(20)<<bf1<<setw(20)<<hs2;
		cout<<setw(20)<<f2<<setw(20)<<h2<<setw(20)<<b2<<setw(20)<<w2<<setw(20)<<bb2<<endl;
		append<<setw(20)<<f2<<setw(20)<<h2<<setw(20)<<b2<<setw(20)<<w2<<setw(20)<<bb2<<endl;
	}
	
	
	if(n==3)
	{
		cout<<setw(108)<<"Showing stats of "<<name3<<endl<<endl<<endl;
		append<<setw(108)<<"Showing stats of "<<name3<<endl<<endl<<endl;
		cout<<setw(10)<<"Country"<<setw(20)<<"Matches"<<setw(20)<<"Innings"<<setw(15)<<"Runs"<<setw(20)<<"Balls Faced"<<setw(20)<<"Highest Runs";
		append<<setw(10)<<"Country"<<setw(20)<<"Matches"<<setw(20)<<"Innings"<<setw(15)<<"Runs"<<setw(20)<<"Balls Faced"<<setw(20)<<"Highest Runs";
		cout<<setw(20)<<"Fifties"<<setw(20)<<"Hundreds"<<setw(20)<<"Bowled"<<setw(20)<<"Wickets"<<setw(20)<<"Best Figures"<<endl;
		append<<setw(20)<<"Fifties"<<setw(20)<<"Hundreds"<<setw(20)<<"Bowled"<<setw(20)<<"Wickets"<<setw(20)<<"Best Figures"<<endl;
		cout<<setw(11)<<"_________"<<setw(20)<<"_________"<<setw(20)<<"_________"<<setw(15)<<"_______"<<setw(20)<<"_____________"<<setw(20);
		append<<setw(11)<<"_________"<<setw(20)<<"_________"<<setw(20)<<"_________"<<setw(15)<<"_______"<<setw(20)<<"_____________"<<setw(20);
		cout<<"______________"<<setw(20)<<"_________"<<setw(20)<<"__________"<<setw(20)<<"________"<<setw(20);
		append<<"______________"<<setw(20)<<"_________"<<setw(20)<<"__________"<<setw(20)<<"________"<<setw(20);
		cout<<"_________"<<setw(20)<<"______________"<<endl;
		append<<"_________"<<setw(20)<<"______________"<<endl;
		cout<<endl<<endl;
		append<<endl<<endl;
		cout<<setw(10)<<country3<<setw(20)<<m3<<setw(20)<<i3<<setw(15)<<r3<<setw(20)<<bf3<<setw(20)<<hs3;
		append<<setw(10)<<country3<<setw(20)<<m3<<setw(20)<<i3<<setw(15)<<r3<<setw(20)<<bf3<<setw(20)<<hs3;
		cout<<setw(20)<<f3<<setw(20)<<h3<<setw(20)<<b3<<setw(20)<<w3<<setw(20)<<bb3<<endl;
		append<<setw(20)<<f3<<setw(20)<<h3<<setw(20)<<b3<<setw(20)<<w3<<setw(20)<<bb3<<endl;
	}
	
	cout<<endl<<endl<<endl<<"Do You Want to Update any Value(1 for Yes, 2 for N):- ";
	append<<endl<<endl<<endl<<"Do You Want to Update any Value(1 for Yes, 2 for N):- ";
	cin>>c;
	}while(c==1);
	
	
	append.close();
}
