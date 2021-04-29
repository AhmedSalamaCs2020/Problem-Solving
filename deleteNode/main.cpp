#include <iostream>
#include <iterator>
#include <set>
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

    cout<<temp->value<<" ";
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
/////////////////////////////////////////
public:void  RemoveDuplicatesfromSortedList(){
set<int>st;
Node * ptr=new Node;
ptr=head;
while (ptr!=NULL){
        st.insert(ptr->value);
        //cout<<ptr->value;
        ptr=ptr->next;

}
ptr=head;
set<int>::iterator it;
   for( it=st.begin();it!=st.end();it++)
        {

          ptr->value = *it;
          ptr=ptr->next;
        }
delete ptr;


}
////////////////////////////////////////
public: void middle(){
Node * a=new Node;
Node * b=new Node;
a=head;
b=head;
while (b != tail && b->next != tail) {
 a = a->next;
 b = b->next->next;
}
//
if (b == tail)
cout<<(a->value);
 else
cout<<(a->value);
cout<<a->next->value;
}
};


int main()
{
LinkedList a,b;
a.add(1);//0
a.add(2);//1
a.add(3);//2
a.add(4);//3
a.middle();
//a.RemoveDuplicatesfromSortedList();
//a.display();
//a.removeFirst();


    return 0;
}
