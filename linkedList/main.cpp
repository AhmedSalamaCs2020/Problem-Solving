 #include <iostream>

using namespace std;
class Node{
public: int value;
public: Node *next;
public: Node *prev;
};
class LinkedList{
Node * head;
Node *tail;

public:LinkedList(){//constractor
    head=NULL;
    tail=NULL;
}
public: void add(int item){
  Node *tmp=new Node;
  tmp->value=item;
  tmp->next=NULL;
  if(head==NULL){
    head=tmp;
    tail=tmp;
  }
  else{
    tail->next=tmp;
    tail=tail->next;
  }

}
public: void display(){
    Node *temp=new Node;
    temp=head;
while (temp!=NULL){

    cout<<temp->value<<endl;
    temp=temp->next;
}

}
public: int indexOf(int item){
    int index=0;
    Node *temp=new Node;
    temp=head;
    while (temp!=NULL){
        if(temp->value==item){
            return index;
        }
        ++index;
        temp=temp->next;
    }
return -1;
}
public: bool contains(int item){
Node *ptr=new Node;
ptr=head;
while(ptr!=NULL){
    if(ptr->value==item){
        return true;
    }
    ptr=ptr->next;
}
return false;
}
public: void removeFirst(){

Node * ptr=new Node;
ptr=head;
head=ptr->next;
delete ptr;
}
public: void removeLast(){
Node *temp=new Node;
Node *prev=new Node;
temp=head;
while(temp->next!=NULL){
     prev=temp;
      temp=temp->next;
}
tail=prev;
tail->next=NULL;
delete temp;

}
public:int sizeList(){
int counter=0;
Node *temp=new Node;
temp=head;
while (temp!=NULL){
   counter++;
    temp=temp->next;
}
return counter;
}
public: int * convertToArray(){
int arr[10];
int counter=0;
Node *temp=new Node;
temp=head;
while (temp!=NULL){
    arr[counter++]=temp->value;
    temp=temp->next;
}

return arr;
}


};

int main()
{
LinkedList a,b;
a.add(5);//0
a.add(10);//1
a.add(15);//2
a.add(20);//3
cout<< a.convertToArray()[0];
//a.removeFirst();
//a.removeFirst();

//a.display();
    return 0;
}
