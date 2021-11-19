#if !defined(POINT_H)
#define POINT_H

class point
{
private:
    /* data */
    double xCoord;
    double yCoord;
    
public:
    point(/* args */);
    point(double x, double y);
    virtual ~point();

    double getXcoord();
    double getYcoord();
};


#endif // POINT_H