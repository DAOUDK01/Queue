#include <iostream>
#define SIZE 5
using namespace std;
int queue[SIZE],front =-1, rear=-1,val;
bool underflow(){
	if (front ==-1 ){
		return true ;
	}
	else {
		return false ;
	}
}
bool overflow(){	
	if (rear == SIZE -1 ){
		return true ;
	}
	else {
		return false ;
	}
}
void insert( ){

	if (overflow()){
		cout<<"queue is over flow !"<<endl;
	}
	else {
		
		cout<<"ENTER ELEMENTS OF QUEUE :\n";
		for(int i=0; i<SIZE;i++){
			cin>>val;
			rear++;
			front=0;
			queue[rear]=val;
		}
	}
	cout<<"\t \t QUEUE IS FULL !\n"<<endl;
	}
void Delete(){
	if ( underflow() ){
		cout<<"queue is under flow !"<<endl;
	}
	else{
		cout<<"\t \t \t DELETED ELEMENT IS "<<queue[front]<<endl;
		front++;
		
	}
}
void display(){
	cout<<"\nELEMENTS OF QUEUE IS NOW : ";
	for(int i=front; i<=rear ;i++){
		cout<<queue[i]<<" ";
	}
		cout<<endl;
	cout<<"\n\tFRONT OF QUEUE IS :"<<queue[front]<<endl;
	cout<<"\tREAR OF QUEUE IS :"<<queue[rear]<<endl;
	cout<<endl;
}
int main(){
	cout<<"\t \t \t \t QUEUE IS EMPTY ! "<<endl;
     char ch;
     cout<<"\nDO YOU WANT TO ENTER ELEMENTS IN QUEUE? \n a) yes \n b) no "<<endl;
     cin>>ch;
     if(ch=='a'){	 
	insert();
} else {
	exit(2);
}
	string s;
	cout<<" DO YOU WANT TO DELETE AN ELEMENT OF QUEUE :\n 1) yes \n 2) no"<<endl;
	cin>>s;
	if(s=="yes"){
		 Delete ();
	}
	else{
		cout<<"THANKS !"<<endl;
	}
    
    display();		
}
