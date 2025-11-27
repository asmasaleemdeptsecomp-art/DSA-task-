#include<iostream>
using namespace std;
 
struct Node{
	int patientID;
	Node*next;
};
class LinkedList{
	private:
		Node*head;
	 public:
	 	LinkedList():head(nullptr){}
	 	//insert patient at the end
	 	void insertAtEnd(int id){
        Node*newNode=new Node();
		newNode->patientID=id;
		newNode->next=nullptr;
		if(head==nullptr){
			head=newNode;
		}else{
			Node*temp=head;
			while(temp->next!=nullptr){
				temp=temp->next;
			}
			temp->next=newNode;
		}	 		
		 }
		 void insertAtBegining(int id){
		 	Node*newNode=new Node();
		 	newNode->patientID=id;
		 	newNode->next=head;
		 	head=newNode;
		 }
		 void displaypatients(){
		 	if(head==nullptr){
		 		cout<<"no patients in the list"<<endl;
		 		return;
			 }
			 Node*temp=head;
			 while(temp!=nullptr){
			 	cout<<"patientID:"<<temp->patientID<<endl;
			 	temp=temp->next;
			 }
		 }
	 	};
	 	int main(){
	 		LinkedList patientList;
	 		patientList.insertAtEnd(101);
	 		patientList.insertAtEnd(102);
	 		patientList.insertAtBegining(103);
	 		cout<<"current patient:"<<endl;
	 		patientList.displaypatients();
	 		return 0;
		 }
		