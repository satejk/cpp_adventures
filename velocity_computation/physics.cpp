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

double physics::computeVelocityTurboPropEngineFan(double time)
{
    const double alpha = 0.00001;
    const double beta =  0.00488;
    const double gamma = 0.75795;
    const double delta = 181.3566;

    double velocity = alpha * pow(time,3) - beta * pow(time,2) + gamma * time + delta;

    return velocity;
}

double physics::computeAccelerationTurboPropEngineFan(double velocity)
{

    const double sigma = 0.000062;
    double acc = 3 - sigma * (velocity * velocity);

    return acc;
}
