/****************************
 * Project 3: Shape List
 *
 * Course: CS 251, Fall 2023
 * System: WindowsOS using VSCode
 * Program Language: C++
 * Student Author: Zaid Khan Mohammed
 * *** **********************/


// inclidung headers and libraries
#include "canvaslist.h"
#include <iostream>


// CanvasList default constructo. No parameters or return value
CanvasList::CanvasList(){
    // initializing default values 
    listSize=0;
    listFront=nullptr;
}


// CanvasList constructor. Takes a CanvasList object as parameter. No return value
CanvasList::CanvasList(const CanvasList& other){ // copy constructor
    // initializing values
    listSize=0;
    listFront=nullptr;
    ShapeNode* curr = other.listFront;
    while (curr!=nullptr){
        // iterating through reference list, deep copying, and adding new elements to our list 
        Shape* shapecpy=curr->value->copy();
        push_back(shapecpy);
        curr=curr->next;
    }
}


// operator=. Takes a CanvasList object as parameter. No return value 
CanvasList& CanvasList::operator=(const CanvasList &other){
    clear(); // emptying our list first and initializing it
    listSize=0;
    listFront=nullptr;
    ShapeNode* curr = other.front();
    while (curr!=nullptr){
        // iterating through reference list, deep copying, and adding new elements to our list
        Shape* shapecpy=curr->value->copy();
        push_back(shapecpy);
        curr=curr->next;
    }
    return *this; // returning pointer to our new list
}


// CanvasList destructor. No parameters or return value
CanvasList::~CanvasList() {
    clear();  // list destructor clears whole list
}


// CanvasList clear(). Empties the list, deletes all nodes, and frees up memory. No parameters or return value
void CanvasList::clear(){
    while (listSize>0){
        delete pop_back(); // remove last element until list is empty
    } 
    
}


// CanvasList insertAfter(int, shape*). Inserts a shapeNode with value=shape* at specified index. Takes an int and shape pointer as parameters. No return value
void CanvasList::insertAfter(int index,Shape* shape){
    ShapeNode* curr=listFront;
    if (index<0 || index>=listSize) { // checking if index is valid
        cout<<"Invalid index"<<endl;
        return;
    }
    // creating list node
    ShapeNode* shapeNode=new ShapeNode();
    shapeNode->value=shape;
    
    for (int i=0;i<index;++i){
        curr=curr->next; // iterating to index
    }
    // inserting the node after given index
    shapeNode->next=curr->next;
    curr->next=shapeNode;
    ++listSize;

}


// CanvasList push_front(shape*). adds shapeNode to front of list. Takes shape pointer as parameter. No return value.
void CanvasList::push_front(Shape* shape) {
    if (listSize==0){ // handling edge case where list is empty
        listFront=nullptr;
    }
    // creating list node
    ShapeNode* shapeNode=new ShapeNode();
    shapeNode->value=shape;
    // adding node to the start of list and updating listFront
    shapeNode->next=listFront;
    listFront=shapeNode;
    ++listSize;
}


// CanvasList push_back(shape*). adds shapeNode to back of list. Takes shape pointer as parameter. No return value.
void CanvasList::push_back(Shape* shape) {
    if (listSize==0){ // handling edge case where list is empty
        // create list node and add it to list
        ShapeNode* shapeNode=new ShapeNode();
        shapeNode->value=shape;
        shapeNode->next=nullptr;
        listFront=shapeNode;
        ++listSize;
        return;
    }
    // adding as last element if list is not empty
    insertAfter(listSize-1, shape); // this doesn't work if list is empty because listSize-1=-1 which is not a valid index
}


// CanvasList removeAt(int). removes shapeNode at specified index. Takes int as parameter. No return value.
void CanvasList::removeAt(int index){
    ShapeNode* curr=listFront;
    if (index<0 || index>=listSize) { // checking if index is valid
        return;
    }
    if (index==0) { // removing first element if index=0
        delete pop_front(); // delete list node and the shape* returned using pop()
    }
    else if (index==listSize-1) { // removing last element if index=listSize-1
        delete pop_back();
    }
    else{
        for (int i=0;i<index-1;++i){
            curr=curr->next;
        }
        ShapeNode* del=curr->next;
        curr->next=curr->next->next;
        delete del->value; // deleting shape*
        delete del; // deleting actual list node
        --listSize;
    }
}


// CanvasList removeEveryOther(). removes alternate shapeNodes from the list. No parameter or return value.
void CanvasList::removeEveryOther(){
    if (listSize<2){ // making sure list has 2 or more elements
        return;
    }
    for (int i=listSize-1;i>0;--i){ // iterating through the list in reverse and deleting elements at odd indexes
        // it is important to go in reverse because forward iteration will change indexes when items are popped
        if(i%2==1){
            removeAt(i);
        }
    }
}


// CanvasList pop_front(). removes shapeNode from front of list and returns its value. No parameters.
Shape* CanvasList::pop_front(){
    if(listSize==0){ // can't pop anything if list is empty
        return nullptr;
    }
    ShapeNode* del=listFront;
    Shape* val=del->value; // storing value (shape*) to return
    listFront=listFront->next;
    delete del;
    --listSize;
    return val;
}


// CanvasList pop_back(). removes shapeNode from back of list and returns its value. No parameters.
Shape* CanvasList::pop_back(){
    if(listSize==0){ // can't pop anything if list is empty
        return nullptr;
    }
    if(listSize==1){ // handling edge case with single element separately
        ShapeNode* del=listFront;
        Shape* val=del->value;
        listFront=nullptr;
        delete del;
        --listSize;
        return val;
    }
    ShapeNode* curr=listFront;
    for (int i = 0; i < listSize - 2; i++) { // iterating to 2nd last element
        curr = curr->next;
    }
    // setting the 2nd last element's next=nullptr and deleting last element
    ShapeNode* del=curr->next;
    // deleting the node but storing and returning its value (shape*)
    Shape* val=del->value;
    curr->next=nullptr;
    delete del; 
    --listSize;
    return val;
}


// CanvasList front(). returns ponter to front of list.
ShapeNode* CanvasList::front() const{
    return listFront;
}


// CanvasList front(). returns true if list is empty and false if not.
bool CanvasList::isempty() const {
    return listSize==0;
}


// CanvasList size(). returns integer size of list.
int CanvasList::size() const {
    return listSize;
}


// CanvasList find(int,int). returns integer index of first element that matches specific coordinates. takes 2 integers as parameters.
int CanvasList::find(int x, int y) const{
    int index=0; // setting initial value that will be incremented as we search the list
    ShapeNode* curr=listFront;
    while (curr != nullptr) {
        if (curr->value->getX() == x && curr->value->getY() == y) {
            return index; // return index of first element found
        }
        curr=curr->next;
        index++; // incrementing index if element does not match
    }
    return -1; // return -1 if function exits loop without match
}


// CanvasList shapeAt(int). returns ponter to node at specific index. Takes one int parameter.
Shape* CanvasList::shapeAt(int index) const{
    if (index<0 || index>=listSize) { // chacking if index is valid
        return nullptr;
    }
    ShapeNode* curr=listFront;
    for (int i=0;i<index;++i){ // iterating to given index
        curr=curr->next;
    }
    return curr->value; // returning desired shape pointer
}


// CanvasList draw(). Prints shape details of all nodes in list. No parameters or return value.
void CanvasList::draw() const {
    ShapeNode *curr = listFront;
    while (curr!=nullptr) {
        cout<<curr->value->printShape()<<endl; // printing all shapes in list
        curr=curr->next;
    }
}


// CanvasList printAddresses(). prints addresses of nodes and shapes in list. No parameters or return value.
void CanvasList::printAddresses() const {
    ShapeNode *curr = listFront;
    while (curr!=nullptr) {
        cout<<"Node Address: "<<curr<<"\tShape Address: "<<curr->value<<endl; // printing node and shape addresses
        curr=curr->next;
    }
}
