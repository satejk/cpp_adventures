#include<iostream>
#include<iomanip>
#include"physics.h"



int main()
{
    std::cout<<"--------velocity computation-------------"<<std::endl;

    physics TurboPropEngineFan;


    double angleRadians;
    double angleDegrees;
    double timeSeconds;

    //get angle from user
    std::cout<<"Enter a angle in radians:"<<std::endl;
    std::cin>>angleRadians;

    angleDegrees = TurboPropEngineFan.angleRadian2Degree(angleRadians);

    std::cout << std::fixed << std::setprecision(5);
    
    std::cout<<"The angle in degrees is :"<<angleDegrees<<std::endl;

    std::cout<<"Enter time in seconds:"<<std::endl;
    std::cin>>timeSeconds;

    double velocity = TurboPropEngineFan.computeVelocityTurboPropEngineFan(timeSeconds);
    double velocity_2 = TurboPropEngineFan.computeVelocityTurboPropEngineFan(timeSeconds - 1);
    double acc = TurboPropEngineFan.computeAccelerationTurboPropEngineFan(velocity);

    std::cout<<"Velocity after "<<timeSeconds<<"seconds = "<< velocity << " m/s"<<std::endl;
    std::cout<<"Velocity after "<<timeSeconds - 1 <<"seconds = "<< velocity_2 << " m/s"<<std::endl;
    std::cout<<"Actual Acceleration = "<< velocity - velocity_2 << "m/s^2"<<std::endl;
    std::cout<<"Acceleration from formula at "<<timeSeconds<<"seconds = "<< acc << " m/s^2"<<std::endl;

    return 0;
}