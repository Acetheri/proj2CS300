#include <string>
#include "gwindow.h"
#include "shape.h"
using namespace std;




Shape::Shape(){
  setColor("BLACK");
}

void Shape::setLocation(double x, double y){
  this ->x = x;
  this ->y = y;
}

void Shape::move(double dx, double dy){
  x += dx;
  y += dy;
}

void Shape::setColor(string color) {
  this->color = color;
}

Line::Line(double x1, double y1, double x2, double y2){
  this ->x = x1;
  this ->y = y1;
  this ->dx = x2-x1;
  this ->dy = y2-y1;
}

void Line::draw(GWindow & gw) {
  gw.setColor(color);
  gw.drawLine(x, y, x + dx, y + dy);
}

bool Line::contains(double x, double y){
  double x1 = this-> x1;
  double x2 = this-> x2;
  double y1 = this-> y1;
  double y2 = this-> y2;

  double distance = (abs((x2 - x1)(y1 - y) - (x1 - x)(y2 - y1) ) /
		     sqrt((x2 - x1)^2 + (y2-y1)^2));

  return (distance <= .5);
}


Rect::Rect(double x, double y, double width, double height){
  this ->x = x;
  this ->y = y;
  this ->width = width;
  this ->height = height;
}

void Rect::draw(GWindow & gw) {
  gw.setColor(color);
  gw.fillRect(x, y, width, height);
}


bool Rect::contains(double x, double y){
  double x1 = this -> x;
  double x2 = this -> width;
  bool check1 = (x1 <= x <= x1 +x2);
  double y1 = this -> y;
  double y2 = this -> height;
  bool check2 = (y1 <= y <= y2);
  return (check1 && check2);
}

Oval::Oval(double x, double y, double width, double height){
  this ->x = x;
  this ->y = y;
  this ->width = width;
  this ->height = height;
}

void Oval::draw(GWindow & gw) {
  gw.setColor(color);
  gw.fillOval(x,y,width,height);

}

bool Oval::contains(double x, double y){
  double x1 = this -> x;
  double y1 = this -> y;
  double h = this -> width;
  double k = this -> height;

  return( (((x-h)^2)/(x1^2) + ((y-k)^2)/(b^2) ) <= 1);
}


Sqaure::Square(double x, double y, double size){
  this ->x = x;
  this ->y = y;
  this size -> size
}

bool Square::contains(double x, double y){
  double x1 = this -> x;
  double y1 = this -> y;
  double c1 = this -> size;
  bool check1 = (x1 <= x <= x1 + c1);
  bool check2 = (y1 <= y <= y2 + c1);
  return (check1 && check2);
  
}

void Square::draw(Gwindow & gw) {
  gw.setColor(color);
  gw.fillRect(x,y,size,size);
}
