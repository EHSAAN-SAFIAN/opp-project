
#include<iostream>
using namespace std;
class movies{
	protected:
		string movie[3];
		string name;
		int option;
		int age;
		int cnic;
		public:
			movies(){	}
			movies(string n,int op,int a,int cn):name(n),option(op),age(a),cnic(cn){	}
			void menudisplay()
			{
cout<<"Well come to the"<<endl;   
cout<<"                                                                "<<endl;
cout<<" ___           _      ___ _                       _             "<<endl;
cout<<"| _ ) ___  __| |_  / _()_ _  ___ _ __  __ _  | |            "<<endl;                                                             
cout<<"| _ \\/ _ \\/ _ \\ / / | (| | ' \\/ -) '  \\/' | ||       "<<endl;
cout<<"|/\\/\\/\\\\  \\||||\\|||\\,| (_)     "<<endl;
cout<<"*"<<endl;
cout<<"####### Your Ultimate Stop for Cinema booking #######"<<endl;
cout<<"*"<<endl;
        cout << "Movies:\n";
				cout<<""<<endl;
				cout<<"Cateegry"<<endl;
					string movie[3]={"Press 1 for Hollywood","Press 2 for Bollywood","Press 3 for Lollywood"};
					for(int i=0;i<3;i++){
						cout<<i+1<<" ";
						cout<<movie[i]<<endl;
					}
	        }
	        void getchoice()
	        {
	        		cout<<"Enter Movies Cateegry "<<endl;
				cin>>option;
				 if (option == 1) 
             	{
                 cout << "You chose Hollywood" << endl;
                } 
				else if (option == 2) 
                	{
                     cout << "You chose Bollywood" << endl;
                    } 
					 else if (option == 3) 
                     	{
                       cout << "You chose Lollywood" << endl;
                        } 
						else 
	                        {
                          cout << "Invalid choice" << endl;
                        }
			}
	        	void setdata()
			{
				cout<<"Enter a name"<<name<<endl;
				cin>>name;
				cout<<"Enter age"<<endl;
				cin>>age;
				cout<<"Enter cnic"<<endl;
				cin>>cnic; 
		}
	        
};
class hollywood: virtual public movies{

	protected:
		int choice;
		int ticket;
		int bill;
		string movie[3];
		public:
				hollywood(){	}
				hollywood(string n,int op,int a,int cn,int cho,int tic):movies(n,op,a,cn),choice(cho),ticket(tic){}
				void setchoice()
				{
					string movie[3]={"The Adventure","3 Days to kill ","The monster"};
					cout<<"\nHollywood Movies"<<endl;
					for(int i=0;i<3;i++){
						cout<<i+1<<" ";
						cout<<movie[i]<<endl;
					}
					cout<<"Choice one from the above films";
					cin>>choice;
						 if (choice == 1) 
             	{
                 cout << "The Adventure" << endl;
                } 
				else if (choice == 2) 
                	{
                     cout << "3 Days to kill" << endl;
                    } 
					 else if (choice == 3) 
                     	{
                       cout << "The monster" << endl;
                        } 
						else 
	                        {
                          cout << "Invalid choice" << endl;
                        }
				}	
				void getticket(){
					cout<<"How many tickets do you want"<<endl;
					cin>>ticket;
					cout<<"You have booked ticket is ="<<ticket<<endl;
					bill=ticket*500;
					cout<<"Your bill is Rs="<<bill<<endl;
				}
};
class bollywood: virtual public movies{
	protected:
		int choice;
		int ticket;
		int bill;
		string movie[3];
		public:
				bollywood(){	}
				bollywood(string n,int op,int a,int cn,int cho,int tic):movies(n,op,a,cn),choice(cho),ticket(tic){}
				void setchoice()
				{
					string movie[3]={"Pathan","Jawan","Tiger"};
					cout<<"\nBollywood Movies"<<endl;
					for(int i=0;i<3;i++){
						cout<<i+1<<" ";
						cout<<movie[i]<<endl;
					}
					cout<<"Choice one from the above films";
					cin>>choice;
						 if (choice == 1) 
             	{
                 cout << "Pathan" << endl;
                }
				 else if (choice == 2) 
                	{
                     cout << "Jawan" << endl;
                    } 
					 else if (choice == 3) 
                     	{
                       cout << "Tiger" << endl;
                        } 
						else 
	                        {
                          cout << "Invalid choice" << endl;
                        }
			}
					void getticket(){
					cout<<"How many tickets do you want"<<endl;
					cin>>ticket;
					cout<<"You have booked ticket is ="<<ticket<<endl;
					bill=ticket*500;
					cout<<"Your bill is Rs="<<bill<<endl;
				}
};
class lollywood: virtual public movies
{
	protected:
		int choice;
		int ticket;
		int bill;
		string movie[3];
		public:
				lollywood(){	}
				lollywood(string n,int op,int a,int cn,int cho,int tic):movies(n,op,a,cn),choice(cho),ticket(tic){}
				void setchoice()
				{
					string movie[3]={"The legend of Maula Jutt","London ni jayun Ga","Na MAloom Afrad"};
					cout<<"\nLollywood Movies"<<endl;
					for(int i=0;i<3;i++){
						cout<<i+1<<" ";
						cout<<movie[i]<<endl;
					}
				
					
					cout<<"Choice one from the above films";
					cin>>choice;
						 if (choice == 1) 
             	{
                 cout << "The lagend of mula jut" << endl;
                } 
				else if (choice == 2) 
                	{
                     cout << "London Nahi Jaunga"<< endl;
                    } 
					 else if (choice == 3) 
                     	{
                       cout << "Na Maloom Afraad" << endl;
                        } 
						else 
	                        {
                          cout << "Invalid choice" << endl;
                        }
			}
					void getticket(){
					cout<<"How many tickets do you want"<<endl;
					cin>>ticket;
					cout<<"You have booked ticket is ="<<ticket<<endl;
					bill=ticket*500;
					cout<<"Your bill is Rs="<<bill<<endl;
				}
};
class last: virtual public hollywood, virtual public bollywood, virtual public lollywood{
	public:
		void check()
		{
			movies::menudisplay();
			movies::getchoice();
			movies::setdata();
			if(option==1)
			{
				hollywood::setchoice();
				hollywood::getticket();
			}
			else if(option==2)
			{
				bollywood::setchoice();
				bollywood::getticket();
			}
			else if(option==3)
			{
				lollywood::setchoice();
				lollywood::getticket();
			}
			else
			{
				cout<<"Invalid input"<<endl;
			}
		}
		
		
};
int main()
{
 last onj;
 onj.check();
}
