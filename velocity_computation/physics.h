#if !defined(PHYSICS)
#define PHYSICS

#include<cmath>

class physics
{
private:
    /* data */
    const double PI = acos(-1);
public:
    physics(/* args */);
    virtual ~physics();

    double angleRadian2Degree(double rad);
    double angleDegree2Radians(double degree);
    double computeVelocityTurboPropEngineFan(double time);
    double computeAccelerationTurboPropEngineFan(double velocity);
};

#endif // PHYSICS
