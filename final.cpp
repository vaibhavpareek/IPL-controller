#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
class logs
{       public:
		void user();
	    void admin();
	    void about();
};
class Admin
{
	char name_admin[80],passwd[40];
	public:
		void admin_interface();
		void new_admin();
	    void userwhologin();
	    void add_player();
	    void add_team();
        void update_player();
		void update_team();
	    void remove_player();
	    void remove_team();
	    void add_scores();
};
class User
{   char name_user[80];
	public:
		void user_interface();
		void player_info();
		void scheduled_match();
		void team_search();
		void team_info();
		void show_team();
		void all_players();
		void all_teams();
		void point_table();
		void best();
		void scoreboard();
		
};
class admin_info
{
	public:
	    char name_admin[80];
		char passwd[80];
     	void add_new_admin();
    	void showdata();
};
class new_team
{
	protected:
		char cap_name[80];
		int match;
		public:
			char team_name[80];
			void add_new_team()
			{    system("cls");
				cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
				cout<<"\n\n\n\t\t\t\t\t==========================ENTER DETAILS OF TEAM=============================";
				fflush(stdin);
				cout.flush();
				cout<<"\n\n\t\t\t\t\t\t\tName of team : ";
			    fflush(stdin);
				cout.flush();
				cin>>team_name;
				cout<<"\n\n\t\t\t\t\t\t\tMatches played : ";
				fflush(stdin);
				cout.flush();
				cin>>match;
				cout<<"\n\n\t\t\t\t\t\t\tName of captain of this team : ";
				fflush(stdin);
				cout.flush();
				cin>>cap_name;
				cout<<"\n\n\n\t\t\t\t\t========================================= Team added successfully========================================== ";
			}
			void show()
			{  	cout<<"\n\n\t\t\t================================ Team information ============================================";
			    cout<<"\n\n\t\t\tName of team : "<<team_name;
			    cout<<"\n\n\t\t\tMatches played : "<<match;
			    cout<<"\n\n\t\t\tName of  the captain of team : "<<cap_name;
				}
};
class player
{
	protected:
	int d_o_b;
	char country[80];
	int match,run,best,wicket,jersey_no;
	public:
		char name[80];
	void showdata()
	 {
		cout<<"\n\n\t\t\t================================== Information of player ====================================== ";
		cout<<"\n\n\t\t\t\t\t\tName::"<<name;
		cout<<"\n\n\t\t\t\t\t\tDate of birth::"<<d_o_b;
		cout<<"\n\n\t\t\t\t\t\tCountry::"<<country;
		cout<<"\n\n\t\t\t\t\t\tJersey number::"<<jersey_no;
		cout<<"\n\n\t\t\t\t============= Batting statistics ================";
		cout<<"\n\n\t\t\t\t\t\tMatch played::"<<match;
		cout<<"\n\n\t\t\t\t\t\tTotal runs::"<<run;
		cout<<"\n\n\t\t\t\t============= Bowling statistics ================";
		cout<<"\n\n\t\t\t\t\t\tTotal wickets"<<wicket;
		cout<<"\n\n\t\t\t\t\t\tBest performance"<<best;
	 }
	 void player_details()
     {   system("cls");
		cout<<"\t\t\t\t\t=================================== Enter details of player ======================================\n";
		cout<<"\n\t\t\t======================================== Personal Information ===========================================";
	cout.flush();
	fflush(stdin);
	cout<<"\n\n\t\t\t\t\t\t\tEnter name of player:: ";
	gets(name);
	cout.flush();
	fflush(stdin);
	cout<<"\n\t\t\t\t\t\t\tEnter date of birth:: ";
	cin>>d_o_b;
	cout.flush();
	fflush(stdin);
	cout<<"\n\t\t\t\t\t\t\tPlayer's home country:: ";
	cin>>country;
	cout.flush();
	fflush(stdin);
	cout<<"\n\t\t\t=========================================== Batting statistics ==============================================";
	cout<<"\n\n\t\t\t\t\t\t\tMatches played:: ";
	cin>>match;
	cout.flush();
	fflush(stdin);
	cout<<"\n\t\t\t\t\t\t\tTotal runs:: ";
	cin>>run;
	cout.flush();
	fflush(stdin);
	cout<<"\n\t\t\t============================================ Bowling stastics ===============================================";
	cout<<"\n\n\t\t\t\t\t\t\tTotal wickets:: ";
	cin>>wicket;
	cout.flush();
	fflush(stdin);
	cout<<"\n\t\t\t\t\t\t\tBest:: ";
	cin>>best;
	cout.flush();
	fflush(stdin);
	cout<<"\n\t\t\t============================================ Identification =================================================";
	cout<<"\n\n\t\t\t\t\t\t\tJersey number";
	cin>>jersey_no;
	cout.flush();
	fflush(stdin);;
	cout<<"\n\n\n\t\t\t========================================= PLAYER ADDED SUCCESSFULLY ================================================\n";
    }
};
class score:public new_team
{
	char fname[80],sname[80],winner[80];
    int fscore,sscore;
	public:
		int dom;
		void add_scoreboard()
		{     system("cls");
		     cout<<"date of the match"<<endl;
		   	 cin>>dom;
		   	 fflush(stdin);
		   	 cout.flush();
		   	 cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================\n\n";
		   	 cout<<"enter name of first team"<<endl;
		   	 gets(fname);
		   	 fflush(stdin);
		   	 cout.flush();
		   	 cout<<"enter name of second name"<<endl;
		   	 gets(sname);
		   	 fflush(stdin);
		   	 cout.flush();
		   	 cout<<"score of first team in this format  RUNS/wickets"<<endl;
		   	 cin>>fscore;
		   	 fflush(stdin);
		   	 cout.flush();
			cout<<"score of second team in this format RUNS/wickets"<<endl;
		   	 cin>>sscore;
		   	 fflush(stdin);
		   	 cout.flush();
			 cout<<"who wins the game"<<endl;
		   	 gets(winner);
		}
		void display()
		{    
			 cout<<dom<<"\t\t"<<fname<<"\t\t"<<fscore<<"\t\t\t"<<sname<<"\t\t"<<sscore<<"\t\t"<<winner<<endl;
		}
	
};
void beginning()
{
	   system("cls");
	  cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================\n\n";
      ifstream file;
	  file.open("beginning.txt");
	  cout<<"\n\n\n\n\n";
	  while(file.eof()==0)
	{ char ch;
	ch=file.get();
    cout<<ch;
    }
    file.close();  
    cout<<"\n\n\t\t\t\t\t\t\t\tPRESS ANY KEY TO CONTINUE ";
    getch();
}
void orange_cap()
{
     system("cls");
		 char ch;
	fstream orange_cap;
	orange_cap.open("details/orange_cap.txt",ios::in|ios::binary);
	while(orange_cap.eof()==0)
	{
	orange_cap.get(ch);
	cout<<ch;
	}
	orange_cap.close();	
}
void purple_cap()
{
     system("cls");
		 char ch;
	fstream purple_cap;
	purple_cap.open("details/purple_cap.txt",ios::in|ios::binary);
	while(purple_cap.eof()==0)
	{
	purple_cap.get(ch);
	cout<<ch;
	}
	purple_cap.close();	
}
void catches()
{
     system("cls");
		 char ch;
	fstream catches;
	catches.open("details/catches.txt",ios::in|ios::binary);
	while(catches.eof()==0)
	{
	catches.get(ch);
	cout<<ch;
	}
	catches.close();	
}
void all_rounder()
{
     system("cls");
		 char ch;
	fstream allrounder;
	allrounder.open("lists/all_rounder.txt",ios::in|ios::binary);
	while(allrounder.eof()==0)
	{
	allrounder.get(ch);
	cout<<ch;
	}
	allrounder.close();	
}
void User::best()
{  int ch,l;
   system("cls");
	  cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================\n\n";
      cout<<"\n\nt\t\t=================================================GAME OF BEST WITH THE BEST========================================================\n";
	  cout<<"\n\n\t\t\t\t\t\t\t 1.ORANGE CAP";
      cout<<"\n\n\t\t\t\t\t\t\t 2.PURPLE CAP";
      cout<<"\n\n\t\t\t\t\t\t\t 3.VIVO KAMAL CATCHES";
      cout<<"\n\n\t\t\t\t\t\t\t 4.BEST ALL-ROUNDER";
      cout<<"\n\n\t\t\t\t\t\t\tYOUR CHOICE :";
	  cin>>l;
  switch(l)
  {
  	case 1:orange_cap();
  	break;
  	case 2:purple_cap();
  	     break;
	case 3:catches();
	     break;
	case 4:all_rounder();
	     break;
	 default:break;
  }
}
void logs::about()
{  char ch;     
      system("cls");
	  cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================\n\n";
      ifstream file;
	  file.open("about.txt");
	  while(file.eof()==0)
	{ 
	ch=file.get();
    cout<<ch;
    }
    file.close();     
}
void User::point_table()
{
	system("cls");
		 char ch;
	fstream point;
	point.open("details/point_table.txt",ios::in|ios::binary);
	while(point.eof()==0)
	{
	point.get(ch);
	cout<<ch;
	}
	point.close();
}
void Admin::remove_team()
{
		system("cls");
	int ch,i;
	char confirm;
	new_team e[80];
	cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
	char line[90],search[90];
  cout <<"\n\n\t\t\t\t\t ENTER THE NAME OF TEAM WHOSE DETAILS YOU WANT TO DELETE";
  cout<<"\n\n\t\t\t\t\t NAME OF TEAM : ";
  fflush(stdin);
  cout.flush();
  cin>>search;
  cout<<"\n\n\t\t\t\t\tARE YOUR SURE YOU WANT TO DELETE "<<search<<" TEAM INFORMATION ";
  fflush(stdin);
  cout.flush();
 cout<<"\n\n\t\t\t\t\t\t\t FOR YES : y \t\t FOR NO : n";
 fflush(stdin);
 cout.flush();
 cout<<"\n\t\t\t\t\t\t\t CHOICE: ";
 cin>>confirm;
 if(confirm=='y')
 {
  ifstream any;
  any.open("counters/counting_team.txt");
  any>>ch;
  ifstream myfile;
  ofstream temp;
  myfile.open("new_team.txt");
  temp.open("temp_team.txt");
	for(i=0;i<=ch;i++)
	 {
	    myfile.read((char *)&e[i],sizeof(e[i]));
		if(strcmp(e[i].team_name,search))
    	{
		  temp.write((char *)&e[i],sizeof(e[i]));
        }
	 }
  cout << "\n\n\t\t\t\t\tWAIT................. DELETING INFORMATION FROM DATABASES ...............................";
  sleep(3);
  myfile.close();
  temp.close();
  remove("new_team.txt");
  rename("temp_team.txt", "new_team.txt");
}
}
void Admin::remove_player()
{
	system("cls");
	int ch,i;
	player e[80];
	cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
	char line[90],search[90],confirm;
  cout <<"\n\n\t\t\t\t\t ENTER THE NAME OF PLAYER WHOSE DETAILS YOU WANT TO DELETE";
  cout<<"\n\n\t\t\t\t\t NAME : ";
  fflush(stdin);
  cout.flush();
  cin>>search;
  cout<<"\n\n\t\t\t\t\tARE YOUR SURE YOU WANT TO DELETE "<<search<<" PLAYER INFORMATION ";
  fflush(stdin);
  cout.flush();
 cout<<"\n\n\t\t\t\t\t\t\t FOR YES : y \t\t FOR NO : n";
 fflush(stdin);
 cout.flush();
 cout<<"\n\t\t\t\t\t\t\t CHOICE: ";
 cin>>confirm;
 if(confirm=='y')
{  ifstream any;
  any.open("counters/counting_team.txt");
  any>>ch;
  ifstream myfile;
  ofstream temp;
  myfile.open("player_add.txt");
  temp.open("temp.txt");
	for(i=0;i<=ch;i++)
	 {
	    myfile.read((char *)&e[i],sizeof(e[i]));
		if(strcmp(e[i].name,search))
    	{
		  temp.write((char *)&e[i],sizeof(e[i]));
        }
	 }
  cout << "\n\n\t\t\t\t\tWAIT.................RECORD DELETING...............................";
  sleep(3);
  myfile.close();
  temp.close();
  remove("player_add.txt");
  rename("temp.txt", "player_add.txt");
}
}
void Admin::update_player()
{   
	system("cls");
     char search[90];
     int ch,up,i,k=0;
	cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
    player e[80],a;
    ifstream any1;
	any1.open("counters/counting.txt");
	any1>>ch;
	any1.close();
	fstream file1;
	file1.open("player_add.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\t\t\t\t\t\tENTER THE NAME OF PLAYER WHOSE DETAILS YOU WANT TO EDIT";
	cout<<"\n\t\t\t\t\t\t\t\tNAME = ";
	fflush(stdin);
	cout.flush();
     gets(search);
	  for(i=0;i<=ch;i++)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!strcmp(e[i].name,search))
    	{
    		k=1;
		   break;
        }
	 }
	 file1.close();
	 if(k==1)
	{
		fstream file;
		file.open("player_add.txt",ios::ate|ios::binary|ios::out);
	int location=(i)*sizeof(a);
file.seekp(location);
fflush(stdin);
cout.flush();
cout<<"\n\t\t\t\t\t PLEASE ENTER NEW DETAILS";
a.player_details();
file.write((char*)&a,sizeof(a));
file.seekg(0);
cout<<"\n\n\t\t\t\t\t\t WAIT.............UPDATING DATABASES.............................";
sleep(5);
file.close();
    }
else
{
	cout<<"\n\n\t\t\t\t\t=========================SORRY NO PLAYER FOUND WITH THIS NAME============================";
}
}
void Admin::update_team()
{    system("cls");
     char search[90];
     int ch,up,i,k=0;
	cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
     new_team e[80],a;
    ifstream any1;
	any1.open("counters/counting_team.txt");
	any1>>ch;
	any1.close();
	fstream file1;
	file1.open("new_team.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\t\t\t\t\t\tENTER THE NAME OF TEAM WHOSE DETAILS YOU WANT TO EDIT";
	cout<<"\n\t\t\t\t\t\t\t\tNAME OF TEAM = ";
	fflush(stdin);
	cout.flush();
     gets(search);
	  for(i=0;i<=ch;i++)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!strcmp(e[i].team_name,search))
    	{
    		k=1;
		   break;
        }
	 }
	 file1.close();
	 if(k==1)
	{
		fstream file;
		file.open("new_team.txt",ios::ate|ios::binary|ios::out);
	int location=(i)*sizeof(a);
file.seekp(location);
fflush(stdin);
cout.flush();
cout<<"\n\t\t\t\t\t PLEASE ENTER NEW DETAILS";
a.add_new_team();
file.write((char*)&a,sizeof(a));
file.seekg(0);
cout<<"\n\n\t\t\t\t\t\t WAIT.............UPDATING DATABASES.............................";
sleep(5);
file.close();
    }
else
{
	cout<<"\n\n\t\t\t\t\t=========================SORRY NO TEAM FOUND WITH THIS NAME============================";
}
}	
void Admin::add_scores()
{
		char search[80];
    int ch,up,i;
    score e[80];
	ofstream file;
	file.open("scoreboard.txt",ios::app|ios::binary);
    ifstream any1;
	any1.open("counters/countingscore.txt");
	any1>>ch;
	any1.close();
	e[ch].add_scoreboard();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	ofstream file1;
	file1.open("counters/countingscore.txt");
	ch++;
	file1<<ch;
	file1.close();
}
void User::scoreboard()
{
	 system("cls");
	int  search;
    int ch,up,i;
    score e[80];
    ifstream any1;
	any1.open("counters/countingscore.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("scoreboard.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\n\t\t\t\t========================= Enter date which day's matches score you want to see =========================\n";
	fflush(stdin);
	cout.flush();
     cin>>search;
     cout.flush();
     cout<<"DATE\t\tT1 NAME\t\tT1 SCORE\t\tT2 NAME\t\tT2 SCORE\tWINNER\n";
	  for(i=0;i<=ch;i++)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(e[i].dom==search)
    	{
		e[i].display();
        }
	 }
	  file1.close();
}
void User::team_search()
{
	system("cls");
	char search[80];
    int ch,up,i;
    new_team e[80];
    ifstream any1;
	any1.open("counters/counting_team.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("new_team.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\n\t\t\t\t========================= ENTER TEAM NAME WHOSE INFORMATION YOU WANT TO SEARCH =========================\n";
	fflush(stdin);
	cout.flush();
     gets(search);
	  for(i=0;i<=ch;)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!strcmp(e[i].team_name,search))
    	{
		e[i].show();
        }
        i++;
	 }
	  file1.close();
}
int again_team()
{
	int ch;
	fflush(stdin);
	cout.flush();
	cout<<"\n\n\t\t\t\t==================================           PRESS 1 FOR ADDING NEW TEAM            ==================================";
	cout<<"\n\n\t\t\t\t==================================         PRESS 2 FOR ADDING  NEW PLAYERS          ==================================";
	cout<<"\n\n\t\t\t\t================================== PRESS 3 FOR ADDING ANY PLAYER TO PARTICULAR TEAM ==================================";
	cout<<"\n\n\t\t\t\t==================================     PRESS 4 FOR UPDATING RECORD OF ANY PLAYER    ==================================";
    cout<<"\n\n\t\t\t\t================================== 	           PRESS 5 TO GO BACK                  ==================================";
    cout<<"\n\n\t\t\t\t==================================               PRESS 6 FOR EXIT                   ==================================";
	cout<<"\n\n\t\t\t\t\t\t\tyour choice=";
	fflush(stdin);
	cout.flush();
	cin>>ch;
	return ch;
}
int again_remove()
{
	int ch;
	fflush(stdin);
	cout.flush();
	cout<<"\n\n\t\t\t\t==================================         PRESS 1 FOR ADDING NEW TEAM            ==================================";
	cout<<"\n\n\t\t\t\t==================================       PRESS 2 FOR ADDING  NEW PLAYERS          ==================================";
	cout<<"\n\n\t\t\t\t================================== PRESS 3 TO REMOVE MORE PLAYERS FROM DATABASE   ==================================";
	cout<<"\n\n\t\t\t\t==================================   PRESS 4 FOR UPDATING RECORD OF ANY PLAYER    ==================================";
    cout<<"\n\n\t\t\t\t================================== 	         PRESS 5 TO GO BACK                  ==================================";
    cout<<"\n\n\t\t\t\t==================================             PRESS 6 FOR EXIT                   ==================================";
	cout<<"\n\n\t\t\t\t\t\t\t your choice=";
	fflush(stdin);
	cout.flush();
	cin>>ch;
	return ch;
}
int again_player()
{
	int ch;
	fflush(stdin);
	cout.flush();
	cout<<"\n\n\t\t\t\t=================================      PRESS 1 FOR ADDING NEW PLAYERS       ================================";
	cout<<"\n\n\t\t\t\t================================= PRESS 2 FOR UPDATING RECORD OF ANY PLAYER ================================";
	cout<<"\n\n\t\t\t\t=================================             PRESS 3 TO GO BACK            ================================";
	cout<<"\n\n\t\t\t\t=================================              PRESS 4 FOR EXIT             ================================";
	cout<<"\n\n\t\t\t\t\t\t============== your choice=";
	fflush(stdin);
	cout.flush();
	cin>>ch;
	return ch;
}
int again()
{ int ch;
	cout<<"\n\n\t\t\t\t================================== PRESS 1 FOR MAIN MENU ===================================";
	cout<<"\n\n\t\t\t\t==================================  PRESS 2 TO GO BACK   ===================================";
	cout<<"\n\n\t\t\t\t==================================    PRESS 3 TO EXIT    ===================================";
	cout<<"\n\n\t\t\t\t\t\t============== your choice=";
	fflush(stdin);
	cout.flush();
	cin>>ch;
	return ch;
}
void admin_info::showdata()
	 {
			
		cout<<"\n\n\n\t\t\t\t\t\t\tWAIT..........AUTHENTICATING DATABASES................................";
		sleep(3);
		cout<<"\n\n\t\t\t================================= YOU HAVE SUCCESSFULLY LOGGED IN ====================================\n";
	   cout<<"\n\n\t\t\t\t\t===================== PRESS ANY KEY TO CONTINUE ========================\n";
	   getch();
	 }
     void Admin::admin_interface()
     {   any: system("cls");    
   int c,p ;
 char ch,search[80],pwd[80];
    int i,j=0;
    admin_info e[80];
    	ifstream any1("counters/counter.txt");
	any1>>ch;
	any1.close();
		ifstream file1;
	file1.open("admin.txt",ios::in);
	cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
	cout<<"\n\n\t\t\t\t\t\t\t\tENTER NAME OF ADMIN: ";
	fflush(stdin);
	cout.flush();
    gets(search);
    cout<<"\n\n\t\t\t\t\t========== PLEASE PRESS ENTER AFTER PROVIDING PASSWORD ===============";
    cout<<"\n\n\t\t\t\t\t\t\t\tPASSWORD: ";
     pwd[j]=getch();
     cout<<"*";
     j++;
	 while(j<4)
     {   
		pwd[j]=getch();
     	cout<<"*";
	    j++;
	}
	 fflush(stdin);
	  for(i=0;i<=ch;)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if((!strcmp(e[i].name_admin,search))&&(!strcmp(e[i].passwd,pwd)))
    	{
		e[i].showdata();
		break;
        }
        i++;
	 }
	 ch=ch+1;
	 if(i==ch)
	 {  cout<<"\n\n\n\t\t\t\t\t\t\tWAIT..........AUTHENTICATING DATABASES................................";
		sleep(3);
	 	cout<<"\n\n\t\t\t========================================= SORRY , PASSWORD OR ADMIN NAME IS INCORRECT ===========================================";
	 	cout<<"\n\n\t\t\t============================================= PRESS ANY KEY TO RETRY ==========================================";
	    cout.flush();
		c=again();
			switch(c)
		{
			case 1:goto any;
			break;
			case 3:exit(0);
			break;
			default:goto any;
		}
}
	  file1.close();
}
void  Admin::userwhologin()
{  char ch;
 system("cls");
 cout.flush();
 fflush(stdin);
    cout<<"\n\n\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";	
    cout<<"\n\n\t\t\t========================================= WELCOME IN DATABASE OF USERS WHO LOGGED ==================================";
    ifstream any("users.txt");
    while(any.eof()==0)
	{ 
	ch=any.get();
    cout<<ch;
    }
    any.close();
}
void admin_info::add_new_admin() 
{    system("cls");
    cout<<"\n\n\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";		
    cout<<"\n\t\t\t\t\t========================== PROCEED TO ADD NEW ADMIN IN DATABASES ==================================";
    fflush(stdin);
	cout<<"\n\n\t\t\t\t\t\t\t\tNAME OF NEW ADMIN=";
    cin.getline(name_admin,80);
    fflush(stdin);
    cout<<"\n\t\t\t\t\t\t\t\tPASSWORD FOR NEW ADMIN=";
    gets(passwd);
    cout<<"\n\n\t\t\t======================================= NEW ADMIN ADDED SUCCESSFULLY ================================================\n\n";
}
void Admin::add_player()
{
	char search[80];
    int ch,up,i;
    player e[80];
	ofstream file;
	file.open("player_add.txt",ios::app|ios::binary);
    ifstream any1;
	any1.open("counters/counting.txt");
	any1>>ch;
	any1.close();
	e[ch].player_details();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	ofstream file1;
	file1.open("counters/counting.txt");
	ch++;
	file1<<ch;
	file1.close();
}
void Admin::add_team()
{  system("cls");
	int ch;
	new_team e[80];
	fstream file;
	file.open("new_team.txt",ios::app|ios::binary);
	ifstream any;
	any.open("counters/counting_team.txt");
	any>>ch;
	any.close();
	e[ch].add_new_team();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	ch++;
	ofstream any1;
	any1.open("counters/counting_team.txt");
	any1<<ch;
	any1.close();
}
void Admin::new_admin()
{   int ch;
    admin_info e[80];
	fstream file;
	file.open("admin.txt",ios::app|ios::binary);
    ifstream any1;
	any1.open("counters/counter.txt");
	any1>>ch;
	any1.close();
	e[ch].add_new_admin();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	ch++;
	  	ofstream any;
	  any.open("counters/counter.txt");
	  any<<ch;
	  any.close();
}	
void User::player_info()
{    system("cls");
	char search[80];
    int ch,up,i;
    player e[80];
    ifstream any1;
	any1.open("counters/counting.txt");
	any1>>ch;
	any1.close();
	ifstream file1;
	file1.open("player_add.txt",ios::in);
    file1.seekg(0);
	cout<<"\n\n\t\t\t\t========================= Enter player name whose info you want to search =========================\n";
	fflush(stdin);
	cout.flush();
     gets(search);
	  for(i=0;i<=ch;i++)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!strcmp(e[i].name,search))
    	{
		e[i].showdata();
        }
	 }
	  file1.close();
}
void User::team_info()
{ int no;
  l1:	
    system("cls");
	cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
    cout<<"\n\t\t\t\t===========================================**** TEAMS ****=========================================\n";
    cout<<"\t\t\t\t\t\t\t\t1.CHENNAI SUPER KINGS"; 
    cout<<"\n\t\t\t\t\t\t\t\t2.ROYAL CHALLENGERS BANGALORE";
    cout<<"\n\t\t\t\t\t\t\t\t3.MUMBAI INDIANS";                   
    cout<<"\n\t\t\t\t\t\t\t\t4.DELHI DAREDEVILS";         
    cout<<"\n\t\t\t\t\t\t\t\t5.KOLKATA KNIGHT RIDERS";
    cout<<"\n\t\t\t\t\t\t\t\t6.SUNRISERS HYDERABAD";         
    cout<<"\n\t\t\t\t\t\t\t\t7.RAJASTHAN ROYALS ";  
    cout<<"\n\t\t\t\t\t\t\t\t8.KINGS XI PUNJAB\n";
    cout<<"\t\t\t\t\t================= WHICH team's information you want=============================\n\n";
    cout<<"\t\t\t\t\t\t\t\tYOUR CHOICE =";
    char ch;
	fstream team;
	cin>>no;
    switch(no)
    {
    	case 1:
	team.open("teams/csk.txt",ios::in|ios::binary);
	break;
	case 2:
	team.open("teams/rcb.txt",ios::in|ios::binary);
	break;
	case 3:
	team.open("teams/mi.txt",ios::in|ios::binary);
	break;
	case 4: 
	team.open("teams/dd.txt",ios::in|ios::binary);
	break;
	case 5: 
	team.open("teams/kkr.txt",ios::in|ios::binary);
	break;
	case 6:
	team.open("teams/srh.txt",ios::in|ios::binary);
	break;
	case 7:
	team.open("teams/rr.txt",ios::in|ios::binary);
	break;
	case 8: 
	team.open("teams/kxip.txt",ios::in|ios::binary);
	break;
	default:goto l1;
     }
while(team.eof()==0)
	{
	team.get(ch);
	cout<<ch;
	}
	team.close();
}

void User::user_interface()
{   fstream file;
    file.open("users.txt",ios::app);
	system("cls");
	cout<<"\n\n\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";	
	fflush(stdin);
	cout<<"\n\n\t\t\t\t\t\t\tNAME=";
	cin.getline(name_user,80);
	file<<name_user<<"\n";
	cout<<"\n\n\t\t\t================================= YOU HAVE SUCCESSFULLY LOGGED IN ====================================\n";
	cout<<"\n\n\t\t\t\t\t===================== PRESS ANY KEY TO CONTINUE ========================\n";
	getch();
}
void User::all_teams()
{
		 char ch;
	fstream team;
	team.open("lists/all_teams.txt",ios::in|ios::binary);
	while(team.eof()==0)
	{
	team.get(ch);
	cout<<ch;
	}
	team.close();
}
void User::all_players()
{
		 char ch;
	fstream all;
	all.open("lists/all_players.txt",ios::in|ios::binary);
	while(all.eof()==0)
	{
	all.get(ch);
	cout<<ch;
	}
	all.close();
}
void User::scheduled_match()
{
	 char ch;
	fstream file;
	file.open("details/match_schedule.txt",ios::in|ios::binary);
	while(file.eof()==0)
	{
	file.get(ch);
	cout<<ch;
	}
	file.close();
}
void logs::admin()
{      logs l1;
	 Admin a1,a2; 
int choice,ch;
    start:system("cls");
    cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";	
	cout<<"\n\n\t\t\t\t================================= ADMIN INTERFACE ==================================\n";
	cout<<"\n\t\t\t\t\t\t\t    1.ALL USER MODULE";
	cout<<"\n\t\t\t\t\t\t\t    2.UPDATE USER MODULE";
	cout<<"\n\t\t\t\t\t\t\t    3.ADD NEW PLAYER";
	cout<<"\n\t\t\t\t\t\t\t    4.ADD NEW TEAM";
	cout<<"\n\t\t\t\t\t\t\t    5.UPDATE INFO OF ANY PLAYER";
	cout<<"\n\t\t\t\t\t\t\t    6.UPDATE INFO OF ANY TEAM";
	cout<<"\n\t\t\t\t\t\t\t    7.REMOVE ANY PLAYER";
	cout<<"\n\t\t\t\t\t\t\t    8.REMOVE ANY TEAM";
	cout<<"\n\t\t\t\t\t\t\t    9.USERS LOGGED IN";
	cout<<"\n\t\t\t\t\t\t\t    10.ADD NEW ADMIN";
	cout<<"\n\t\t\t\t\t\t\t    11.ADD SCORES OF MATCHES";
	cout<<"\n\t\t\t\t\t\t\t    12.Return to main menu";
	cout<<"\n\t\t\t\t\t\t\t    13.Exit";
	cout<<"\n\n\t\t\t\t\t\t============= YOUR CHOICE=";
	cin>>choice;cout<<"==============\n";
	switch (choice)
	{    
	     case 1:  l1.user(); 
	     ch=again();
	      switch(ch)
		 {
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		break;
		case 3: 
		o:a1.add_player();
		 ch=again_player();
	     switch(ch)
		 {
			case 1: goto o;
			break;
			case 2: a2.update_player();
			break;
			case 3: goto start;
			break;
			case 4: exit(0);
			default:goto start;
		}
		break;
		case 4: 
		l:a1.add_team();
		ch=again_team();
		switch(ch)
			{
				case 1:goto l;
				break;
				case 2: a2.add_player();
				break;
				case 3: 
				break;
				case 4:a2.update_player();
				break;
				case 5:goto start;
				break;
				case 6: exit(0);
				default:goto l;
			}
			break;
		case 5:
		n: a1.update_player();
		 ch=again_player();
		 switch(ch)
		 {
		 	case 1:a2.add_player();
		 	break;
		 	case 2:goto n;;
		 	break;
		 	case 3:goto start;
		 	case 4: exit(0);
		 	break;
		 	default:goto n;
		 }
		 break;
		case 6: 
		a:a2.update_team();
		ch=again_team();
		switch(ch)
		{
			
				case 1:goto a;
				break;
				case 2: a2.add_player();
				break;
				case 3: 
				break;
				case 4:a2.update_player();
				break;
				case 5:goto start;
				break;
				case 6: exit(0);
				default:goto b;
		}
		break;
		 case 7:
		 	m:a1.remove_player();
		 	ch=again_remove();
		 	switch(ch)
		 	{
		 		case 1:a2.add_team();
		 		break;
		 		case 2:a2.add_player();
		 		break;
		 		case 3:goto m;
		 		break;
		 		case 4:a2.update_player();
		 		break;
		 		case 5:goto start;
		 		break;
		 		case 6:exit(0);
		 		break;
		 		default:goto start;
			 }
			 break;
		case 8:
			b:a1.remove_team();
		 	ch=again_remove();
		 	switch(ch)
		 	{
		 		case 1:a2.add_team();
		 		break;
		 		case 2:a2.add_player();
		 		break;
		 		case 3:goto b;
		 		break;
		 		case 4:a2.update_player();
		 		break;
		 		case 5:goto start;
		 		break;
		 		case 6:exit(0);
		 		break;
		 		default:goto start;
			 }
		case 9:
	     a1.userwhologin();
          ch=again();
	     switch(ch)
		 {
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		break;
		 case 10:a1.new_admin();
		 ch=again();
	     switch(ch)
		 {
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		break;
		case 11:a1.add_scores();
		 ch=again();
	     switch(ch)
		 {
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		break;
		case 12:break;
		case 13:exit(0);
		}
}
void logs::user()
{  User u1; 
int choice,ch;
    start:system("cls");
    cout<<"\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";	
	cout<<"\n\n\t\t\t\t================================= USER INTERFACE ==================================\n";
	cout<<"\n\t\t\t\t\t\t\t    1.SCHEDULED MATCHES";
	cout<<"\n\t\t\t\t\t\t\t    2.PLAYER INFORMATION BY NAME";
	cout<<"\n\t\t\t\t\t\t\t    3.TEAM DETAILS";
	cout<<"\n\t\t\t\t\t\t\t    4.TEAM INFORMATION BY NAME";
	cout<<"\n\t\t\t\t\t\t\t    5.SCOREBOARD OF ANY MATCH";
	cout<<"\n\t\t\t\t\t\t\t    6.POINT TABLE";
	cout<<"\n\t\t\t\t\t\t\t    7.ALL PLAYERS";
	cout<<"\n\t\t\t\t\t\t\t    8.ALL TEAMS";
	cout<<"\n\t\t\t\t\t\t\t    9.BEST PERFORMERS";
	cout<<"\n\t\t\t\t\t\t\t    10.Return to main menu";
	cout<<"\n\t\t\t\t\t\t\t    11.Exit";
	cout<<"\n\n\t\t\t\t\t\t============= YOUR CHOICE=";
	cin>>choice;cout<<"==============\n";
	switch (choice)
	{
		case 1:u1.scheduled_match();
		ch=again();
		switch(ch)
		{
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		break;
		case 2:u1.player_info();
		ch=again();
		switch(ch)
		{
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
        }
        break;
        case 4:u1.team_search();
             ch=again();
        	switch(ch)
		{
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		break;
		case 3:u1.team_info();
		ch=again();
		switch(ch)
		{
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
	    case 5:u1.scoreboard();
		ch=again();
		switch(ch)
		{
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		case 6:u1.point_table();
		ch=again();
		switch(ch)
		{
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		}
		case 7:
		 system("cls");
		 u1.all_players();
		 ch=again();
		 switch(ch)
		 {
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		 }
		 getch();
		 break;
		case 8:u1.all_teams();
		ch=again();
		switch(ch)
		 {
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		    break;
	     }
		case 9:u1.best();
	     ch=again();
		switch(ch)
		 {
			case 1:goto start;
			break;
			case 3:exit(0);
			break;
			default:goto start;
		    break;
	     }
		break;
		case 10:break;
		case 11:exit(0);
		default:;
	}
}
void interface()
{  User u1;   
  Admin a1;
  logs obj1,obj2,obj3;
int i,login_choice,choice;
main:cout<<"\n\n\n\n\n\n\n\n\n\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";
cout<<"\n\n\t\t\t\t\t\t\t\tPRESS 1: TO CONTINUE OR 0: EXIT\n";
cout<<"\n\n\t\t\t\t\t\t\t\tchoice=";
cin>>i;
if(i==1)
{  begin:system("cls");
 cout<<"\n\n\n\n\n\t\t============================================= IPL CRICKET TOURNAMENT CONTROLLER =====================================================";	
cout<<"\n\n\t\t\t\t\t\t============ LOGIN AS USER OR AS ADMINSTRATOR =============";
cout<<"\n\n\t\t\t\t\t\tPRESS\n\t\t\t\t\t\t\t\t1:USER\n\t\t\t\t\t\t\t\t2:ADMINSTRATOR\n\t\t\t\t\t\t\t\t3:ABOUT\n\t\t\t\t\t\t\t\t4.BACK TO MAIN MENU\n";
cout<<"\n\t\t\t\t\t\t\tLogin choice=";
cin>>login_choice;
switch(login_choice)
{
	case 1: 
	        fflush(stdin);
	        cout.flush();
			u1.user_interface();
         	obj1.user();
	break;
    case 2:
	        fflush(stdin);
	        cout.flush();
	        a1.admin_interface();
		    obj2.admin();
            break;
    case 3: 
             fflush(stdin);
             cout.flush();
             obj3.about();
             cout<<"\n\n\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO GO BACK";
             getch();
             break;
	case 4:
	        system("cls");
	        goto main;
            break;
    default: break;
	  }
}
else if(i==0)
{
	exit(0);
}
}
int main()
{ 
 beginning(); 
  while(1)
{ 
system("cls");
interface();
}
}
