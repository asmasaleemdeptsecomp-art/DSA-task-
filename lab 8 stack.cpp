#include<iostream>
using namespace std;
#define MAX 10
class bookstack{
	string books[MAX];
	int top;
	public:
		bookstack(){ 
			top=-1;
		}
		//push a book
        void push(string bookname){
        	if(top==MAX-1){
        		cout<<"stack is full! cannot add more books.\n";
			}else{
				top++;
				books[top]=bookname;
				cout<<"book added successfully.\n";
			}
		}
		//pop a book
		void pop(){
			if(top==-1){
				cout<<"stack is empty!no book to remove.\n";
			}
			else{
				cout<<"remove book:"<<books[top]<<endl;
				top--;
			}
		}
		//peek top book
		void peek(){
			if(top==-1){
				cout<<"stack is empty!\n";
			}
			else{
				cout<<"top book:"<<books[top]<<endl;
			}
		}
		//display all book
		void display(){
			if(top==-1){
				cout<<"no book in stack.\n";
			}else
			{
				cout<<"books in stack(top to bottom):.\n";
				for(int i=top;i>=0;i--){
					cout<<books[i]<<endl;
				}
			}
		}
		//check empty
		void isempty(){
			if(top==-1)
			cout<<"stack is empty.\n";
			else
			cout<<"stack is not empty.\n";
		}
};
int main(){
	bookstack bs;
	int choice;
	string book;
	
	do{
	cout<<"\n====book management system====\n";
	cout<<"1.add book\n";
	cout<<"2.remove book\n";
	cout<<"3.view top book\n";
	cout<<"4.display all books\n";
	cout<<"5.check stack empty\n";
	cout<<"6.exit\n";
	cout<<"enter your choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			bs.push(book);
			break;
			case 2:
				bs.pop();
				break;
				case 3:
					bs.peek();
					break;
					case 4:
						bs.display();
						break;
						case 5:
							bs.isempty();
							break;
							case 6:
								cout<<"program ended.\n";
								break;
								default:
									cout<<"invalid choice!\n";
	}	
	}while(choice!=6);
	return 0;
}