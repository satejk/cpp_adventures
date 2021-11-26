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
double point::getXcoord() const 
{
    return xCoord;
}

double point::getYcoord() const
{
    return yCoord;
}


double point::operator -(const point& rhs) const
{
    double valueX = rhs.getXcoord() - xCoord;
    double valueY = rhs.getYcoord() - yCoord;

    return valueY;

}


bool point::operator ==(const point& rhs) const
{
    if (rhs.getXcoord() == xCoord && rhs.getYcoord() == yCoord)
    {
        /* code */
        return true;
    }
    else
    {
        /* code */
        return false;
    }
    
}
