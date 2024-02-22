#include <iostream>
using namespace std;

class Student{
	public:
		int id;
		int age;
		string name;
		Student* next;
		
		Student(int id, int age, string name) {
			this->id = id;
			this->age = age;
			this->name = name;
			next = NULL;
		}
};

void display(Student* n) {
	while(n != NULL) {
		cout << n->id << " " << n->name << " " << n->age << endl;
		n = n->next;
	}
}


int main(){
   
   	Student n1(1,20,"John");
   	Student n2(2,16,"Michaella");

  	n1.next = &n2;

  	Student *head = &n1;

	Student *n3=new Student(3,17,"Peter");
	Student *n4=new Student(4,18,"Maureen");

  	n2.next=n3;

	n3->next=n4;
	display(head);
   	return 0;
}

