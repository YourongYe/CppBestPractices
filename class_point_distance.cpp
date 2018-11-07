/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

struct Point{
    int x, y, z;
    Point(int x_v,int y_v,int z_v){
        x = x_v;
        y = y_v;
        z = z_v;
    }
    
    double Distance(Point a){
        double x_distance, y_distance, z_distance;
        x_distance = pow(a.x-x, 2);
        y_distance = pow(a.y-y, 2);
        z_distance = pow(a.z-z, 2);
        double distance;
        distance = sqrt(x_distance + y_distance + z_distance);
        return distance;
    }
};

int main()
{
    Point A(2,3,4);
    Point B(6,5,9);
    cout<<A.Distance(B);
}
