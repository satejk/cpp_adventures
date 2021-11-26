#include<iostream>
#include<cmath>
#include<string>
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

    point ORIGIN(0,0);
    point ONE_POINT(0,1);
    point TWO_POINT(0,2);


    std::string s1 = (ONE_POINT == TWO_POINT) ? "EQUAL": "NOT EQUAL";
    std::cout<<"ONE_POINT AND TWO_POINT are "<< s1 <<"."<<std::endl;

    std::cout<<"ONE_POINT - TWO_POINT ycoord = "<< ONE_POINT - TWO_POINT <<std::endl;
    

    return 0;
}