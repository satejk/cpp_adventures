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

    double getXcoord() const;
    double getYcoord() const;

    //overloaded operators
    double operator -(const point& rhs) const;
    bool operator ==(const point& rhs) const;
};


#endif // POINT_H