#include<iostream>
using namespace std;

struct node{
	int id;
	string name;
	int sem;
	float gpa;
	node*next;
	node*prev;
};
node*head=0;
void ist(int id,string name,int sem,float gpa)
{
	if(head==0){
		node*temp=new node;
		temp->id=id;
		temp->name=name;
		temp->sem=sem;
		temp->gpa=gpa;
		temp->next=0;
		temp->prev=0;
		head=temp;
		return;
	}
	else{
		node*temp=new node;
		temp->id=id;
		temp->name=name;
		temp->sem=sem;
		temp->gpa=gpa;
		head->prev=temp;
		temp->next=head;
		head=temp;
		return;
	}
}
void end(int id,string name,int sem,float gpa)
{
	if(head==0){
		node*temp=new node;
		temp->id=id;
		temp->name=name;
		temp->sem=sem;
		temp->gpa=gpa;
		temp->next=0;
		temp->prev=0;
		head=temp;
		return;
	}
	else{
		node*temp=new node;
		temp->id=id;
		temp->name=name;
		temp->sem=sem;
		temp->gpa=gpa;
		temp->next=0;
		node*ptr=head;
		while(ptr->next!=0){
			ptr=ptr->next;
		}		
		ptr->next=temp;
		temp->prev=ptr;
		return;
	
	}
}
void specp(int id,string name,int sem,float gpa,int pos)
{
	node*temp=new node;
	temp->id=id;
	temp->name=name;
	temp->sem=sem;
	temp->gpa=gpa;
	temp->next=0;
	if(pos!=1)
	{
		node*ptr=head;
		int count=1;
		while(count<pos-1)
		{
			ptr=ptr->next;
			count++;
		}
		temp->next=ptr->next;
		temp->prev=ptr;
		ptr->next=temp;
		temp->next->prev=temp;
		return;
		
	}
	else{cout<<"use other function to add node";
	}
}
void dstart(){
	if(head==0){
		cout<<"list is empty.\n";
		return;
	}
	node*ptr=head;
	head=ptr->next;
    head->prev=0;
    delete ptr;
    cout<<"node delete at start";
}
void dend()
{
	if(head==0){
		cout<<"list is empty.\n";
		return;
	}
	node*ptr=head;
	while(ptr!=0){
		ptr=ptr->next;
	}
	ptr->prev->next=0;
	delete ptr;
	cout<<"dlt node from last\n";
}
void dspec(int pos)
{
	if(head==0){
		cout<<"list is empty.\n";
		return;
	}
	node*ptr=head;
	int count=1;
	while(count<pos){
		ptr=ptr->next;
		count++;
	}
	ptr->prev->next=ptr->next;
	ptr->next->prev=ptr->prev;
	delete ptr;
	cout<<"dlt at"<<pos;
}
void displayfw(){
	if(head==0){
		cout<<"no student record.\n";
		return;
	}
	node*ptr=head;
	cout<<"student record(start to end):.\n";
	while(ptr!=0)
	{
		cout<<"id:"<<ptr->id<<",name:"<<ptr->name<<",semester:"<<ptr->sem<<",gpa:"<<ptr->gpa<<endl;
		ptr=ptr->next;
   }
}
void displaybw(){
	if(head==0){
		cout<<"no student record.\n";
		return;
	}
	node*ptr=head;
	while(ptr->next!=0){
		ptr=ptr->next;
	}
	cout<<"\nstudent record(end to start):\n";
	while(ptr!=0){
		cout<<"id:"<<ptr->id<<",name:"<<ptr->name<<",semester:"<<ptr->sem<<",gpa:"<<ptr->gpa<<endl;
		ptr=ptr->prev;
	}
}
  
  int main(){
  	int choice;
  	while(1){
  		cout<<"\n----student enrollmennt management---\n";
  		cout<<"1.insert at beginning\n";
  		cout<<"2.insert at end\n";
  		cout<<"3.insert at position\n";
  		cout<<"4.delete from beginning \n";
  		cout<<"5.delete from end\n";
  		cout<<"6.delete from position\n";
  		cout<<"7.display forward\n";
  		cout<<"8.display backward\n";
  		cout<<"9.exit\n";
  		cout<<"enter choice:";
  		cin>>choice;
  		int id  ,sem , pos;
  		float gpa;
  		string name;
  		
  		if(choice==1){
  			cout<<"enter id name  semester gpa:";
  			cin>>id>>name>>sem>>gpa;
  			ist(id,name,sem,gpa);
		  }
		  else if(choice==2){
		  	cout<<"enter id name semester gpa:";
		  	cin>>id>>name>>sem>>gpa;
		  	end(id, name,sem,gpa);
		  }
		  else if(choice==3){
		  	cout<<"enter id name semester gpa:";
		  	cin>>id>>name>>sem>>gpa;
		  	specp(id,name,sem,gpa,pos);
		  }
		  else if(choice==4){
		  	dstart();
		  }
		  else if(choice==5){
		  	dend();
		  }
		  else if(choice==6){
		  	cout<<"enter position:";
		  	cin>>pos;
		  	dspec(pos);
		  }
		  else if(choice==7){
		  	displayfw();
		  }
		  else if(choice==8){
		  	displaybw();
		  }
		  else if(choice==9){
		  	cout<<"exiting program.\n";
		  	break;
		  }
		  else{
		  	cout<<"invalid choice!\n";
		  }
	  }
	  return 0;
  }

				