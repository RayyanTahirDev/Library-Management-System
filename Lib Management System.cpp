#include<iostream>
using namespace std;
class Library{
	public:
     string name;
     string author;
Library(){	
}

Library(string name,string author){
	this-> name=name;
	this->author=author;
	
}

void display(){
	cout<<"The book name is "<<name<<endl;
	cout<<"The Author of book is: "<<endl;
}

};

int main(){
	Library book[100];
	int numofbooks=0;
	int arraysize=100;
	cout<<"1,To add a book in library"<<endl;
     cout<<"2,To display a library book"<<endl;
     cout<<"3,To search a book in library"<<endl;
     cout<<"4,To remove a book in  library"<<endl;

    int option;
    cout<<"Enter option"<<endl;
    cin>>option;
    switch(option)
    {
   	case 1:
	if(numofbooks<arraysize)
	{
		string name;
		string author;
		cout<<"Enter Book Name"<<endl;
		getline(cin>>ws,name);
		cout<<"Enter Author Name"<<endl;
		getline(cin>>ws,author);
		book[numofbooks]=Library(name,author);
		numofbooks++;
		cout<<"Book added succesfully..."<<endl;
		}
	else
	{
		cout<<"Sorry the library is full, no space to add a book"<<endl;
	}
	break;
	case 2:
		cout<<"List of Book"<<endl;
	 	cout<<"........................................................."<<endl;
	 	cout<<"........................................................."<<endl;
		
		for(int i=0;i<numofbooks;i++){
			book[i].display();
		}	
	
	}
	
    


}



