//tries.cpp
//#include<tries.h>

#include<iostream>	// Input output stream
#include<conio.h>	//for getch() and getche()
#include<fstream>	// for I/O from disc
#include<windows.h>	// for exit(0);
using namespace std;

//----------------------------------------------------------------------------------------

// for node->int value 7(p, q, r, s) and 9(w, x, y, z)
class node4
{	

	//Private section
	int num;
	char a;
	char b;
	char c;
	char d;
	
	// Public Declarations
	public:
		
		void setchar4(char w,char x, char y,char z)
		{
			a=w;
			b=x;
			c=y;
			d=z;
		}		////////////////////
		
		void setnum4(int num2){ num=num2;	}
		int  getnum() 		  {	return num;	}
		
				////////////////////
		
		char getchar1(){	return a;	}
		char getchar2(){	return b;	}
		char getchar3(){	return c;	}		
		char getchar4(){	return d;	}	
			
};		////////////////////

//----------------------------------------------------------------------------------------

// for node except int value 7 and 9
class node3
{	
	
	//Private section
	int num;
	char a;
	char b;
	char c;
	
	// Public Declarations
	public:
		
		void setchar3(char x, char y,char z)
		{
			a=x;
			b=y;
			c=z;
		}		////////////////////
		
		void setnum3(int num2){ num=num2;	}
		int  getnum()		  {	return num;	}
		
				////////////////////
				
		char getchar1() {	return a;	}
		char getchar2() {	return b;	}
		char getchar3() {	return c;	}	
			
};////////////////////

//----------------------------------------------------------------------------------------

// root of tree
class main{
	
	//Private section
	node3* p2;
	node3* p3;
	node3* p4;
	node3* p5;
	node3* p6;
	node4* p7;
	node3* p8;
	node4* p9;
	
	// Public Declarations
	public:
		
		//setter of pointers
		
 	void setp2(node3 *p){ p2=p; }
 	void setp3(node3 *p){ p3=p; }
 	void setp4(node3 *p){ p4=p; }
 	void setp5(node3 *p){ p5=p; }
 	void setp6(node3 *p){ p6=p; }
 	void setp7(node4 *p){ p7=p; }
 	void setp8(node3 *p){ p8=p; }
 	void setp9(node4 *p){ p9=p; }
 	
 	// Gettres are not necessery in this method

};////////////////////

//----------------------------------------------------------------------------------------

class Tries{
	
	//Private section
	node3 *n2;
	node3 *n3;
	node3 *n4;
	node3 *n5;
	node3 *n6;
	node4 *n7;
	node3 *n8;
	node4 *n9;
	
	// Public Declarations
	public:
		
		Tries()	// Constructor having no argument
		{		//It gives value to the pointers
			 n2= new node3();
			 n3= new node3();
			 n4= new node3();
			 n5= new node3();
			 n6= new node3();
			 n7= new node4();
			 n8= new node3();
			 n9= new node4();	 
		}		////////////////////
		
			void tree(int x)	//It completes the tree
		{	
		
				main *root = new main();	//assign root(base of our tree)
				
				if(x==2){root->setp2(n2); n2->setchar3('a','b','c'); 		n2->setnum3(x);	}
				if(x==3){root->setp3(n3); n3->setchar3('d','e','f'); 		n3->setnum3(x);	}
				if(x==4){root->setp4(n4); n4->setchar3('g','h','i');		n4->setnum3(x);	}
				if(x==5){root->setp5(n5); n5->setchar3('j','k','l'); 		n5->setnum3(x);	}
				if(x==6){root->setp6(n6); n6->setchar3('m','n','o'); 		n6->setnum3(x);	}
				if(x==7){root->setp7(n7); n7->setchar4('p','q','r','s'); 	n7->setnum4(x);	}
				if(x==8){root->setp8(n8); n8->setchar3('t','u','v'); 		n8->setnum3(x);	}
				if(x==9){root->setp9(n9); n9->setchar4('w','x','y','z'); 	n9->setnum4(x);	}
			
		}		////////////////////
		
		string predictoin()
		{
			char arr[15];			//it receives only numeric data numeric 
			string words[20];		// A new string to store required words
			
			for(int x=0 ; x<20 ; x++){
			        words[x]="words ended";			// initialize the string words
			}
			
			cout<<"Type numeric code and press enter.\nCode should be from 2-9\n)-->	";
			char x;
			int y=0;
			
			while( x!=13  )		//////////	Data entry loop
			{
				x=getche();
				if(x==0)	x=getche();		//accept code from user
				
				if( x=='2' ||x=='3' ||x=='4' ||x=='5' ||		//Code checker
				x=='6' ||x=='7' ||x=='8' ||x=='9' || x==13){
				
				       arr[y++]=x;
                }
				
				else{
					cout<<"\nWrong code. --->exit\n";	exit(1);	//If code is wrong exit
				}
			}		//////////	End of data enty
			
			y=0;;
			cout<<endl;
		
			
			string line;
			int count=0;
				
			ifstream file("dictionary.txt");		//////////	using input file stream 
			
			if(file.is_open())		////////// opens file
				while(file.good())		//////////	Reading file
				{		
					getline(file,line);		//////////	read line by line
					
					for(y=0 ; arr[y]!=13 ; y++ )	
					{							
						if(arr[y]=='2')
						if(line[y]!= n2->getchar1() && line[y]!= n2->getchar2() && line[y]!= n2->getchar3() )
						break;
						
						if(arr[y]=='3')
						if(line[y]!= n3->getchar1() && line[y]!= n3->getchar2() && line[y]!= n3->getchar3() )
						break;
						
						if(arr[y]=='4')
						if(line[y]!= n4->getchar1() && line[y]!= n4->getchar2() && line[y]!= n4->getchar3() )
						break;
						
						if(arr[y]=='5')
						if(line[y]!= n5->getchar1() && line[y]!= n5->getchar2() && line[y]!= n5->getchar3() )
						break;
							
						if(arr[y]=='6')
						if(line[y]!= n6->getchar1() && line[y]!= n6->getchar2() && line[y]!= n6->getchar3() )
						break;
							
						if(arr[y]=='7')
						if(line[y]!= n7->getchar1() && line[y]!= n7->getchar2() &&  line[y]!= n7->getchar3() && line[y]!= n7->getchar4() )
						break;
							
						if(arr[y]=='8')
						if(line[y]!= n8->getchar1() && line[y]!= n8->getchar2() && line[y]!= n8->getchar3() )
						break;
							
						if(arr[y]=='9')
						if(line[y]!= n9->getchar1() && line[y]!= n9->getchar2() && line[y]!= n9->getchar3() &&  line[y]!= n9->getchar4())
						break;
								
					}	//////////	Process is on going
						if (arr[y]==13 && line[y]==NULL )	// if loop is completed and string is of arr.size()
						words[count++]=line;				// Saving of required words in a new string
						//cout<<line<<endl;
					}
							
			
			string key;
			count=0;		//set count to zero
	
			//s2.inverse(s1);
			char choice='#';	// char variable to controll input command
				
			cout<<endl<<"press # for next, Enter for select, spacebar for space and\npress any other key for exit\n\n";
				
			do
			{
				if(choice=='#' )	//	if # than show
				cout<<endl<<words[count++];
				
				if(words[count-1]=="words ended")
				break;
				
				choice=getch();		// enter command
				if(choice==0)	choice=getch();
		
				if(choice==13)		//select word
				key=key+words[count-1];
		
				if(choice==32)		//enter space
				key=key+" ";
				
				// 13 and 32 are ascii codes of "enter" and "space" respectively
				
				
						
			}while(choice=='#' || choice==13 || choice==32);
			
			return key;		//	return selected words
			
		}		//////////	End of programe
};//////////	End of class T9

//----------------------------------------------------------------------------------------

int main()
{
	
	Tries t;		// makes an object of class tries
	
	t.tree(2);
	t.tree(3);
	t.tree(4);
	t.tree(5);
	t.tree(6);
	t.tree(7);
	t.tree(8);
	t.tree(9);
	
	
	char choice;
	string key;	//	recives string from prediction()
	string flag;//	saving of key to show a selected sentence at end
	
	do
	{
	key=t.predictoin();
		
	cout<<endl<<"Again Y/N"<<endl;
	choice=getch();
	flag+=key;		//gives memory to our "returned string" by prediction()
	
	}while(choice=='y');
	
	cout<<flag;		//Show your selected words
	
	getch();
	
}//////////

//----------------------------------------------------------------------------------------

/*
	Name: Muhammad Azeem
	Copyright: Reserved
	Author: None
	Date: 01/01/15 19:51
	
	Description: It is the code of T9 prediction. It takes a string of numeric 
	data from input and provides you the relevent words of english language 
	that are in the dictionary attached in .txt with this code. It is very weak
	type of artiffical intelligence.
*/

//----------------------------------------------------------------------------------------

