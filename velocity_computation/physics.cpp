#include<iostream>
#include"physics.h"


physics::physics(/* args */)
{
    std::cout<<"Default physics constructor called"<<std::endl;
}

physics::~physics()
{
    std::cout<<"Default physics desstructor called"<<std::endl;
}

double physics::angleRadian2Degree(double rad)
{
    double angleDegrees = rad * (180/PI);

    return angleDegrees;
}



double physics::angleDegree2Radians(double degree)
{
    double angleRadians = degree * (PI/180);

    return angleRadians;

}
