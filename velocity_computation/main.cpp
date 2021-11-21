#include<iostream>
#include<iomanip>
#include"physics.h"



int main()
{
    std::cout<<"--------velocity computation-------------"<<std::endl;

    physics TurboPropEngineFan;


    double angleRadians;
    double angleDegrees;

    //get angle from user
    std::cout<<"Enter a angle in radians:"<<std::endl;
    std::cin>>angleRadians;

    angleDegrees = TurboPropEngineFan.angleRadian2Degree(angleRadians);

    std::cout << std::fixed << std::setprecision(2);
    
    std::cout<<"The angle in degrees is :"<<angleDegrees<<std::endl;


    return 0;
}