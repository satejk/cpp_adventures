#include<iostream>
#include<cmath>
#include "point.h"

int main()
{
    std::cout<<"--------point Class-------------"<<std::endl;


    point pt1(2,10);
    point pt2(5,20);

    //calculate the distance between two points

    double distance = 0;

    double side_1 = pt2.getXcoord() - pt1.getXcoord();
    double side_2 = pt2.getYcoord() - pt1.getYcoord();

    distance = sqrt(pow(side_1,2) + pow(side_2, 2));

    std::cout<<"Distance between the points is "<<distance<<"."<<std::endl;
    

    return 0;
}