/****************************
 * Project 3: Shape List
 *
 * Course: CS 251, Fall 2023
 * System: WindowsOS using VSCode
 * Program Language: C++
 * Student Author: Zaid Khan Mohammed
 * *** **********************/

/// @file tests.cpp
/// @author NO NAME
/// @date October 2, 2023
/// @brief Provided testing file to implement Catch 1.x framework tests. 
///   The example below uses the Catch testing framework version that uses
///   a single .hpp file. Initial file authored by:
///   Adam T Koehler, PhD - University of Illinois Chicago

// The tutorial for Catch 1.x can be found at:
// https://github.com/catchorg/Catch2/blob/Catch1.x/docs/tutorial.md

// This tells Catch to provide a main() - do not remove
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "shape.h"
#include "canvaslist.h"

using namespace std;

TEST_CASE("(0) no tests") 
{

}

////////////////////////////////////////////
// Tests for Shape class member functions //
////////////////////////////////////////////

// TEST CASE 1: Shape() constructor
// Requires: default values set correctly
TEST_CASE("Test 1: Shape()") 
{
  Shape* myShape=new Shape();
  REQUIRE(myShape->getX()==0);
  REQUIRE(myShape->getY()==0);
  delete myShape;
}

// TEST CASE 2: Shape() constructor
// Requires: coordinate values set correctly
TEST_CASE("Test 2: Shape(x,y)") 
{
  Shape* myShape=new Shape(1,3);
  REQUIRE(myShape->getX()==1);
  REQUIRE(myShape->getY()==3);
  delete myShape;
}

// TEST CASE 3: Shape copy()
// Requires: copy values set correctly
TEST_CASE("Test 3: Shape copy()") 
{
  Shape* myShape=new Shape(1,3);
  Shape* shapeCopy=myShape->copy();
  REQUIRE(shapeCopy->getX()==1);
  REQUIRE(shapeCopy->getY()==3);
  delete myShape;
  delete shapeCopy;
}

// TEST CASE 4: Shape printShape()
// Requires: return correct string
TEST_CASE("Test 4: Shape printShape()") 
{
  Shape* myShape=new Shape(1,3);
  REQUIRE(myShape->printShape()=="It's a Shape at x: 1, y: 3");
  delete myShape;
}


/////////////////////////////////////////////
// Tests for Circle class member functions //
/////////////////////////////////////////////

// TEST CASE 5: Circle() constructor
// Requires: default values set correctly
TEST_CASE("Test 5: Circle()") 
{
  Circle* myCircle=new Circle();
  REQUIRE(myCircle->getX()==0);
  REQUIRE(myCircle->getY()==0);
  REQUIRE(myCircle->getRadius()==0);
  delete myCircle;
}

// TEST CASE 6: Circle() constructor
// Requires: radius set correctly
TEST_CASE("Test 6: Circle(r)") 
{
  Circle* myCircle=new Circle(7);
  REQUIRE(myCircle->getX()==0);
  REQUIRE(myCircle->getY()==0);
  REQUIRE(myCircle->getRadius()==7);
  delete myCircle;
}

// TEST CASE 7: Circle() constructor
// Requires: all values set correctly
TEST_CASE("Test 7: Circle(r)") 
{
  Circle* myCircle=new Circle(1,3,7);
  REQUIRE(myCircle->getX()==1);
  REQUIRE(myCircle->getY()==3);
  REQUIRE(myCircle->getRadius()==7);
  delete myCircle;
}

// TEST CASE 8: Circle copy()
// Requires: copy values set correctly
TEST_CASE("Test 8: Circle copy()") 
{
  Circle* myCircle=new Circle(1,3,7);
  Circle* circleCopy=myCircle->copy();
  REQUIRE(circleCopy->getX()==1);
  REQUIRE(circleCopy->getY()==3);
  REQUIRE(circleCopy->getRadius()==7);
  delete myCircle;
  delete circleCopy;
}

// TEST CASE 9: Circle printShape()
// Requires: returns correct string
TEST_CASE("Test 9: Circle printShape()") 
{
  Circle* myCircle=new Circle(1,3,7);
  REQUIRE(myCircle->printShape()=="It's a Circle at x: 1, y: 3, radius: 7");
  delete myCircle;
}


///////////////////////////////////////////
// Tests for Rect class member functions //
///////////////////////////////////////////

// TEST CASE 10: Rect() constructor
// Requires: default values set correctly
TEST_CASE("Test 10: Rect()") 
{
  Rect* myRect=new Rect();
  REQUIRE(myRect->getX()==0);
  REQUIRE(myRect->getY()==0);
  REQUIRE(myRect->getWidth()==0);
  REQUIRE(myRect->getHeight()==0);
  delete myRect;
}

// TEST CASE 11: Rect() constructor
// Requires: width and height set correctly
TEST_CASE("Test 11: Rect(w,h)") 
{
  Rect* myRect=new Rect(5,7);
  REQUIRE(myRect->getX()==0);
  REQUIRE(myRect->getY()==0);
  REQUIRE(myRect->getWidth()==5);
  REQUIRE(myRect->getHeight()==7);
  delete myRect;
}

// TEST CASE 12: Rect() constructor
// Requires: all values set correctly
TEST_CASE("Test 12: Rect(x,y,w,h)") 
{
  Rect* myRect=new Rect(1,3,5,7);
  REQUIRE(myRect->getX()==1);
  REQUIRE(myRect->getY()==3);
  REQUIRE(myRect->getWidth()==5);
  REQUIRE(myRect->getHeight()==7);
  delete myRect;
}

// TEST CASE 13: Rect copy()
// Requires: copy values set correctly
TEST_CASE("Test 13: Rect copy()") 
{
  Rect* myRect=new Rect(1,3,5,7);
  Rect* rectCopy=myRect->copy();
  REQUIRE(rectCopy->getX()==1);
  REQUIRE(rectCopy->getY()==3);
  REQUIRE(rectCopy->getWidth()==5);
  REQUIRE(rectCopy->getHeight()==7);
  delete myRect;
  delete rectCopy;
}

// TEST CASE 14: Rect printShape()
// Requires: returns correct string
TEST_CASE("Test 14: Rect printShape()") 
{
  Rect* myRect=new Rect(1,3,5,7);
  REQUIRE(myRect->printShape()=="It's a Rectangle at x: 1, y: 3 with width: 5 and height: 7");
  delete myRect;
}


////////////////////////////////////////////////////
// Tests for RightTriangle class member functions //
////////////////////////////////////////////////////

// TEST CASE 15: RightTriangle() constructor
// Requires: default values set correctly
TEST_CASE("Test 15: RightTriangle()") 
{
  RightTriangle* myRightTriangle=new RightTriangle();
  REQUIRE(myRightTriangle->getX()==0);
  REQUIRE(myRightTriangle->getY()==0);
  REQUIRE(myRightTriangle->getBase()==0);
  REQUIRE(myRightTriangle->getHeight()==0);
  delete myRightTriangle;
}

// TEST CASE 16: RightTriangle() constructor
// Requires: base and height set correctly
TEST_CASE("Test 16: RightTriangle(b,h)") 
{
  RightTriangle* myRightTriangle=new RightTriangle(5,7);
  REQUIRE(myRightTriangle->getX()==0);
  REQUIRE(myRightTriangle->getY()==0);
  REQUIRE(myRightTriangle->getBase()==5);
  REQUIRE(myRightTriangle->getHeight()==7);
  delete myRightTriangle;
}

// TEST CASE 17: Rect() constructor
// Requires: all values set correctly
TEST_CASE("Test 17: RightTriangle(x,y,b,h)") 
{
  RightTriangle* myRightTriangle=new RightTriangle(1,3,5,7);
  REQUIRE(myRightTriangle->getX()==1);
  REQUIRE(myRightTriangle->getY()==3);
  REQUIRE(myRightTriangle->getBase()==5);
  REQUIRE(myRightTriangle->getHeight()==7);
  delete myRightTriangle;
}

// TEST CASE 18: Rect copy()
// Requires: copy values set correctly
TEST_CASE("Test 18: RightTriangle copy()") 
{
  RightTriangle* myRightTriangle=new RightTriangle(1,3,5,7);
  RightTriangle* rightTriangleCopy=myRightTriangle->copy();
  REQUIRE(rightTriangleCopy->getX()==1);
  REQUIRE(rightTriangleCopy->getY()==3);
  REQUIRE(rightTriangleCopy->getBase()==5);
  REQUIRE(rightTriangleCopy->getHeight()==7);
  delete myRightTriangle;
  delete rightTriangleCopy;
}

// TEST CASE 19: RightTriangle printShape()
// Requires: returns correct string
TEST_CASE("Test 19: RightTriangle printShape()") 
{
  RightTriangle* myRightTriangle=new RightTriangle(1,3,5,7);
  REQUIRE(myRightTriangle->printShape()=="It's a Right Triangle at x: 1, y: 3 with base: 5 and height: 7");
  delete myRightTriangle;
}


/////////////////////////////////////////////////
// Tests for CanvasList class member functions //
/////////////////////////////////////////////////

// TEST CASE 20: CanvasList() constructor
// Requires: default values set correctly
TEST_CASE("Test 20: CanvasList()") 
{
  CanvasList myCanvas;
  REQUIRE(myCanvas.size()==0);
  REQUIRE(myCanvas.front()==nullptr);
}

// TEST CASE 21: CanvasList() copy constructor
// Requires: copied values set correctly
TEST_CASE("Test 21: CanvasList(other)") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  CanvasList canvasCopy(myCanvas);
  //canvasCopy.draw(); // for manual checking
  REQUIRE(canvasCopy.size()==4);
}

// TEST CASE 22: CanvasList() copy operator=
// Requires: copied values set correctly
TEST_CASE("Test 22: CanvasList operator=") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  CanvasList canvasCopy=myCanvas;
  // checking if string values of printShape() match because the addresses won't match (deep copy)
  REQUIRE(canvasCopy.front()->value->printShape()==myCanvas.front()->value->printShape());
  REQUIRE(canvasCopy.front()->next->value->printShape()==myCanvas.front()->next->value->printShape());
  REQUIRE(canvasCopy.front()->next->next->value->printShape()==myCanvas.front()->next->next->value->printShape());
  REQUIRE(canvasCopy.front()->next->next->next->value->printShape()==myCanvas.front()->next->next->next->value->printShape());
  REQUIRE(canvasCopy.size()==4);
}

// TEST CASE 23: CanvasList clear()
// Requires: clears correctly
TEST_CASE("Test 23: CanvasList clear()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  myCanvas.clear();
  REQUIRE(myCanvas.size()==0);
}

// TEST CASE 24: CanvasList insertAfter() 
// Requires: inserts correctly
TEST_CASE("Test 24: CanvasList insertAfter()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape4);
  myCanvas.insertAfter(1,shape3);
  REQUIRE(myCanvas.size()==4);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
  REQUIRE(myCanvas.front()->next->next->next->value==shape4);
}

// TEST CASE 25: CanvasList insertAfter() last element 
// Requires: inserts correctly at end of list
TEST_CASE("Test 25: CanvasList insertAfter() end of list") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.insertAfter(2,shape4);
  REQUIRE(myCanvas.size()==4);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
  REQUIRE(myCanvas.front()->next->next->next->value==shape4);
}

// TEST CASE 26: CanvasList push_front() 
// Requires: pushes correctly to the front of list
TEST_CASE("Test 26: CanvasList push_front()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  myCanvas.push_front(shape1);
  REQUIRE(myCanvas.size()==4);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
  REQUIRE(myCanvas.front()->next->next->next->value==shape4);
}

// TEST CASE 27: CanvasList push_front() empty list
// Requires: pushes correctly to the front of empty list
TEST_CASE("Test 27: CanvasList push_front() empty") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  myCanvas.push_front(shape1);
  REQUIRE(myCanvas.size()==1);
  REQUIRE(myCanvas.front()->value==shape1);
}

// TEST CASE 28: CanvasList push_back() 
// Requires: pushes correctly to the back of list
TEST_CASE("Test 28: CanvasList push_back()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.size()==4);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
  REQUIRE(myCanvas.front()->next->next->next->value==shape4);
}

// TEST CASE 29: CanvasList push_back() empty list
// Requires: pushes correctly to the back of empty list
TEST_CASE("Test 29: CanvasList push_back() empty") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  myCanvas.push_back(shape1);
  REQUIRE(myCanvas.size()==1);
  REQUIRE(myCanvas.front()->value==shape1);
}

// TEST CASE 30: CanvasList removeAt() 
// Requires: correctly removes element at index
TEST_CASE("Test 30: CanvasList removeAt()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape4);
  myCanvas.push_back(shape3);
  myCanvas.removeAt(2);
  REQUIRE(myCanvas.size()==3);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
}

// TEST CASE 31: CanvasList removeAt() first element
// Requires: correctly removes element at index 0
TEST_CASE("Test 31: CanvasList removeAt(0)") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape4);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.removeAt(0);
  REQUIRE(myCanvas.size()==3);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
}

// TEST CASE 32: CanvasList removeAt() last element
// Requires: correctly removes element at last index
TEST_CASE("Test 32: CanvasList removeAt(listSize-1)") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  myCanvas.removeAt(3);
  REQUIRE(myCanvas.size()==3);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
}

// TEST CASE 33: CanvasList removeEveryOther() even listSize
// Requires: correctly removes alternate elements
TEST_CASE("Test 33: CanvasList removeEveryOther() even") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  myCanvas.removeEveryOther();
  REQUIRE(myCanvas.size()==2);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape3);
}

// TEST CASE 34: CanvasList removeEveryOther() odd listSize
// Requires: correctly removes alternate elements
TEST_CASE("Test 34: CanvasList removeEveryOther() odd") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.removeEveryOther();
  REQUIRE(myCanvas.size()==2);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape3);
}

// TEST CASE 35: CanvasList removeEveryOther() listSize<2
// Requires: correctly removes alternate elements
TEST_CASE("Test 35: CanvasList removeEveryOther() listSize<2") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  myCanvas.push_back(shape1);
  myCanvas.removeEveryOther(); // Should do nothing
  REQUIRE(myCanvas.size()==1);
  REQUIRE(myCanvas.front()->value==shape1);
}

// TEST CASE 36: CanvasList pop_front()
// Requires: correctly removes first element
TEST_CASE("Test 36: CanvasList pop_front()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape4);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  REQUIRE(myCanvas.pop_front()==shape4);
  REQUIRE(myCanvas.size()==3);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
}

// TEST CASE 37: CanvasList pop_front() one element
// Requires: correctly removes first and only element
TEST_CASE("Test 37: CanvasList pop_front() one element") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  myCanvas.push_back(shape1);
  REQUIRE(myCanvas.pop_front()==shape1);
  REQUIRE(myCanvas.size()==0);
  REQUIRE(myCanvas.front()==nullptr);
}

// TEST CASE 38: CanvasList pop_front() empty list
// Requires: correctly executes pop_front() on empty list
TEST_CASE("Test 38: CanvasList pop_front() empty list") 
{
  CanvasList myCanvas;
  REQUIRE(myCanvas.pop_front()==nullptr);
  REQUIRE(myCanvas.size()==0);
  REQUIRE(myCanvas.front()==nullptr);
}

// TEST CASE 39: CanvasList pop_back()
// Requires: correctly removes last element
TEST_CASE("Test 39: CanvasList pop_back()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.pop_back()==shape4);
  REQUIRE(myCanvas.size()==3);
  REQUIRE(myCanvas.front()->value==shape1);
  REQUIRE(myCanvas.front()->next->value==shape2);
  REQUIRE(myCanvas.front()->next->next->value==shape3);
}

// TEST CASE 40: CanvasList pop_back() one element
// Requires: correctly removes last and only element
TEST_CASE("Test 40: CanvasList pop_back() one element") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  myCanvas.push_back(shape1);
  REQUIRE(myCanvas.pop_back()==shape1);
  REQUIRE(myCanvas.size()==0);
  REQUIRE(myCanvas.front()==nullptr);
}

// TEST CASE 41: CanvasList pop_back() empty list
// Requires: correctly executes pop_back() on empty list
TEST_CASE("Test 41: CanvasList pop_back() empty list") 
{
  CanvasList myCanvas;
  REQUIRE(myCanvas.pop_back()==nullptr);
  REQUIRE(myCanvas.size()==0);
  REQUIRE(myCanvas.front()==nullptr);
}

// TEST CASE 42: CanvasList front()
// Requires: correctly returns front of list
TEST_CASE("Test 42: CanvasList front()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.front()->value==shape1);
}

// TEST CASE 43: CanvasList front() empty list
// Requires: correctly returns front of empty list
TEST_CASE("Test 43: CanvasList front() empty list") 
{
  CanvasList myCanvas;
  REQUIRE(myCanvas.front()==nullptr);
}

// TEST CASE 44: CanvasList isEmpty() empty list
// Requires: correctly returns isEmpty() for empty list
TEST_CASE("Test 44: CanvasList isEmpty() empty list") 
{
  CanvasList myCanvas;
  REQUIRE(myCanvas.isempty()==true);
}

// TEST CASE 45: CanvasList isEmpty() non- empty list
// Requires: correctly returns isEmpty() for non-empty list
TEST_CASE("Test 45: CanvasList isEmpty() non-empty list") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  myCanvas.push_back(shape1);
  REQUIRE(myCanvas.isempty()==false);
}

// TEST CASE 46: CanvasList size()
// Requires: correctly returns size of list
TEST_CASE("Test 46: CanvasList size()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.size()==4);
}

// TEST CASE 47: CanvasList size() empty list
// Requires: correctly returns size of empty list
TEST_CASE("Test 47: CanvasList size() empty list") 
{
  CanvasList myCanvas;
  REQUIRE(myCanvas.size()==0);
}

// TEST CASE 48: CanvasList find()
// Requires: correctly returns index of list element
TEST_CASE("Test 48: CanvasList find()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.find(1,3)==0);
}

// TEST CASE 49: CanvasList find() not found
// Requires: correctly returns index of list element (-1)
TEST_CASE("Test 49: CanvasList find() not found") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.find(3,1)==-1);
}

// TEST CASE 50: CanvasList shapeAt()
// Requires: correctly returns shape at index
TEST_CASE("Test 50: CanvasList shapeAt()") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.shapeAt(2)==shape3);
}

// TEST CASE 51: CanvasList shapeAt()
// Requires: correctly returns shape at index less than 0
TEST_CASE("Test 51: CanvasList shapeAt(<0)") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.shapeAt(-1)==nullptr);
}

// TEST CASE 52: CanvasList shapeAt()
// Requires: correctly returns shape at index that does not exist
TEST_CASE("Test 52: CanvasList shapeAt(>=listSize)") 
{
  CanvasList myCanvas;
  Shape* shape1=new Shape(1,3);
  Shape* shape2=new Circle(1,3,5);
  Shape* shape3=new Rect(1,3,5,7);
  Shape* shape4=new RightTriangle(1,3,5,7);
  myCanvas.push_back(shape1);
  myCanvas.push_back(shape2);
  myCanvas.push_back(shape3);
  myCanvas.push_back(shape4);
  REQUIRE(myCanvas.shapeAt(5)==nullptr);
}

// CanvasList draw() must be checked manually as it prints to console
// CanvasList printAddresses must be checked manually as it prints to console
