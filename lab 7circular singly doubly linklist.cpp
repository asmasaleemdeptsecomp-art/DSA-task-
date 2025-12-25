#include<iostream>
using namespace std;

struct track{
	int id;
	string name;
	string artist;
	float duration;
	track*next;
	};
	track*head=NULL;
	void insertAtBeginning(int id,string name,string artist,float duration){
		track*newtrack=new track{id,name,artist,duration,NULL};
		if(head==NULL){
			head=newtrack;
			head->next=head;
		}else{
			track*temp=head;
			while(temp->next!=head)
			temp=temp->next;
			newtrack->next=head;
			temp->next=newtrack;
			head=newtrack;

		}
	}
	void insertAtEnd(int id,string name,string artist,float duration){
		track*newtrack=new track{id,name,artist,duration,NULL};
		if(head==NULL){
			head=newtrack;
			head->next=head;
		}else{
			track*temp=head;
			while(temp->next!=head)
			temp=temp->next;
			temp->next=newtrack;
			newtrack->next=head;
			
		}
	}
	void insertAtPosition(int pos,int id,string name,string artist,float duration){
		if(pos==1){
			 insertAtPosition(pos,id,name,artist,duration);
			return;
		}
		track*newtrack=new track{id,name,artist,duration,NULL};
		track*temp=head;
		for(int i=1;i<pos-1;i++){
			temp=temp->next;
			if(temp==head){
				cout<<"invalid position!\n";
				return;
			}
		}
		newtrack->next=temp->next;
		temp->next=newtrack;
	}
	void deleteFirst(){
		if(head==NULL)
		return;
		if(head->next=head){
		 delete head;
		 head=NULL;
		 return;
		}
		track*temp=head;
		track*last=head;
		while(last->next!=head)
		last=last->next;
		
		head=head->next;
		last->next=head;
		delete temp;
	}
	void deleteLast(){
		
		if(head==NULL)
		return;
		track*temp=head;
		track*prev=NULL;
		while(temp->next!=head){
			prev=temp;
			temp=temp->next;
		}
		if(prev==NULL){
			delete head;
			head=NULL;
		}else{
			prev->next=head;
			delete temp;
		}
			}
			void deleteByID(int id){
				if(head==NULL)
				return;
				track*temp=head;
				track*prev=NULL;
			//if the ffirst node is to be delete
			if(head->id==id){
				deleteFirst();
				return;
		}
		while(temp->next!=head&&temp->id!=id)
		prev=temp;
		temp=temp->next;

if(temp->id=id){
	prev->next=temp->next;
	delete temp;
}else{
	cout<<"track not found!\n";
}
}
void display(){
	if(head==NULL){
		cout<<"playlist is empty!\n";
		return;
	}
	track*temp=head;
	do{
		cout<<"track ID:"<<temp->id<<"name:"<<temp->name<<"artist:"<<temp->artist<<"duration:"<<temp->duration<<"min\n";
		temp=temp->next;
	}while(temp!=head);
}
int main(){
	insertAtBeginning(1,"song A\n","Artist X\n",3.5);
	insertAtEnd(2,"song B\n","Artist Y\n",4.0);
	insertAtPosition(2,3,"song c\n","Artist Z\n",2.9);
	cout<<"\n----playlist---\n";
	display();
	cout<<"\ndeleting first track...\n";
	deleteFirst();
	display();
	cout<<"\ndelete last track....\n";
	deleteLast();
	display();
	cout<<"\ndeleting track with id3..\n";
	deleteByID(3);
	return 0;
	
}
	

		
	
	
