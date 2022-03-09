//
// Created by user on 09.03.2022.
//
#include "custom_vector.h"
CustomVector CustomVector::sum(CustomVector v){
    CustomVector vector = CustomVector();
    vector.x_coord = this->x_coord + v.x_coord;
    vector.y_coord = this->y_coord + v.y_coord;
    return vector;
}
CustomVector CustomVector::muptiply(float a){
    CustomVector vector = CustomVector();
    vector.y_coord = this->y_coord * a;
    vector.x_coord = this->x_coord * a;
    return vector;
}
