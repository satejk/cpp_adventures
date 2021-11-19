//INCLUDES
#include "point.h"
#include<iostream>

//CONSTRUCTOR DEFINITIONS
point::point(/* args */)
{
    std::cout<<"Default constructor called"<<std::endl;
    xCoord = 0.0;
    yCoord = 0.0;
}

point::point(double x, double y)
{
    std::cout<<"Parameterized constructor called"<<std::endl;
    xCoord = x;
    yCoord = y;
}

//DESTRUCTOR DEFINITIONS
point::~point()
{
    std::cout<<"Destructor called"<<std::endl;
}

//Function definitions
double point::getXcoord()
{
    return xCoord;
}

double point::getYcoord()
{
    return yCoord;
}

