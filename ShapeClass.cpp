#include <iostream>
#include "gwindow.h"
#include "shape.h"
#include "vector.h"

using namespace std;



class ShapeList : Vector<Shape *>{

  
  Shape* getShapeAt(double x, double y){

    int size = this -> size();

    for(int i = 0; i < size; i++){
      if(this->get(i)->contains()){
	return this->get(i);
      }
    }

    
  }


}
