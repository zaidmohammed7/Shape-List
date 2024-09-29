/****************************
 * Project 3: Shape List
 *
 * Course: CS 251, Fall 2023
 * System: WindowsOS using VSCode
 * Program Language: C++
 * Student Author: Zaid Khan Mohammed
 * *** **********************/


// include headers and libraries
#include "shape.h"
#include <iostream>
using namespace std;

//////////////////////////////////////
// Shape class and member functions //
//////////////////////////////////////

// Shape default constructor. No parameters or return values 
Shape::Shape(){
    // dafualt values are 0s
    x=0;
    y=0;
}


// Shape constructor. takes 2 int parameters. no return value
Shape::Shape(int x, int y){
    this->x=x; // using this keyword to distinguish between private variable and function parameter
    this->y=y;
}


// Shape destructor. No parameters or return value
Shape::~Shape(){

}


// Shape copy(). Creates new shape with same properties and returns a pointer to it. No parameters.
Shape* Shape::copy() {
    return new Shape(x, y); // using new to create a deep copy
}


// Shape getX(). returns x value. no parameters.
int Shape::getX() const{
    return x;
}


// Shape getY(). returns y value. no parameters.
int Shape::getY() const{
    return y;
}


// Shape setX(). sets x value. 1 int parameter. no return value
void Shape::setX(int x) {
    this->x = x;
}


// Shape setY(). sets y value. 1 int parameter. no return value
void Shape::setY(int y) {
    this->y = y;
}


// Shape printShape(). returns string of shape details. no parameters.
string Shape::printShape() const {
    return "It's a Shape at x: "+to_string(x)+", y: "+to_string(y); // converting appropriate ints to string and returning modified string
}


/////////////////////////////////////
// Rect class and member functions //
///////////////////////////////////// 

// Rect default constructor. No parameters or return value
Rect::Rect(){
    // default values are 0s
    setX(0);
    setY(0);
    width=0;
    height=0;
}


// Rect constructor. tkes 2 int parameters. no return value
Rect::Rect(int w, int h){
    // default x and y, and set w and h
    setX(0);
    setY(0);
    width=w;
    height=h;
}


// Rect constructor. tkes 4 int parameters. no return value
Rect::Rect(int x, int y, int w, int h){
    // set all values
    setX(x);
    setY(y);
    width=w;
    height=h;
}


// Rect destructor. No parameters or return value.
Rect::~Rect(){

}


// Rect copy(). creates new rect with same properties and return pointer to it. No return value.
Rect* Rect::copy(){
    return new Rect(getX(),getY(),width,height);
}


// Rect getWidth(). returns width. no parameters
int Rect::getWidth() const{
    return width;
}


// Rect getHeight(). returns height. no parameters
int Rect::getHeight() const{
    return height;
}


// Rect setWidth(int). sets width. 1 int parameter. no return value
void Rect::setWidth(int w) {
    width=w;
}


// Rect setHeight(int). sets height. 1 int parameter. no return value
void Rect::setHeight(int h) {
    height=h;
}



// Rect printShape(). returns string of rect details. no parameters.
string Rect::printShape() const{
    return "It's a Rectangle at x: "+to_string(getX())+", y: "+to_string(getY())+" with width: "+to_string(width)+" and height: "+to_string(height);
}


///////////////////////////////////////
// Circle class and member functions //
///////////////////////////////////////

// Circle default constructor. No parameters or return value.
Circle::Circle(){
    setX(0);
    setY(0);
    radius=0;
}


// Circle constructor. 1 int parameter. no return value
Circle::Circle(int r){
    setX(0);
    setY(0);
    radius=r;
}


// Circle constructor. 2 int parameters. no return value
Circle::Circle(int x, int y, int r){
    setX(x);
    setY(y);
    radius=r;
}


// Circle destructor. No parameters or return value
Circle::~Circle(){

}


// Circle copy(). creates circle with same properties and returns pointer to it. no parameters
Circle* Circle::copy(){
    return new Circle(getX(),getY(),radius);
}


// Circle getRadius(). returns int radius. no paramters
int Circle::getRadius() const{
    return radius;
}


// Circle setRadius(int). Sets radius. takes 1 int parameter. no return value 
void Circle::setRadius(int r){
    radius=r;
}


// Circle printShape(). Returns string of circle details. no parameters
string Circle::printShape() const{
    return "It's a Circle at x: "+to_string(getX())+", y: "+to_string(getY())+", radius: "+to_string(radius);
}


//////////////////////////////////////////////
// RightTriangle class and member functions //
//////////////////////////////////////////////

// RightTriangle dafault constructor. No parameters or return value.
RightTriangle::RightTriangle(){
    setX(0);
    setY(0);
    base=0;
    height=0;
}


// RightTriangle constructor. 2 int parameters. no return value
RightTriangle::RightTriangle(int b, int h){
    setX(0);
    setY(0);
    base=b;
    height=h;
}


// RightTriangle constructor. 4 int parameters. no return value
RightTriangle::RightTriangle(int x, int y, int b, int h){
    setX(x);
    setY(y);
    base=b;
    height=h;
}


// RightTriangle destructor. No parameters or return value
RightTriangle::~RightTriangle(){
    
}


// RightTriangle cop(). creates new RightTriangle with same properties and returns a pointer to it. No parameters
RightTriangle* RightTriangle::copy(){
    return new RightTriangle(getX(),getY(),base, height);
}


// RightTriangle getBase(). return int base. no parameters
int RightTriangle::getBase() const{
    return base;
}


// RightTriangle getHeight(). return int height. no parameters
int RightTriangle::getHeight() const{
    return height;
}


// RightTriangle setBase(int). sets base value. takes 1 int parameter. no return value
void RightTriangle::setBase(int b){
    base=b;
}


// RightTriangle setHeight(int). sets height value. takes 1 int parameter. no return value
void RightTriangle::setHeight(int h){
    height=h;
}


// RightTriangle printShape(). returns string of RightTriangle details. No parameters.
string RightTriangle::printShape() const{
    return "It's a Right Triangle at x: "+to_string(getX())+", y: "+to_string(getY())+" with base: "+to_string(base)+" and height: "+to_string(height);
}

