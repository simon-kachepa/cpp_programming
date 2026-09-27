#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder{
    private:
        double radius {1.0};
        double height {1.0};

    public:
        //Constructors
        Cylinder() = default;
        Cylinder(double radius, double height);

        //Setters
        void setRadius(double radius);
        void setHeight(double height);

        //Getters
        double getRadius();
        double getHeight();

        //Calculate Volume
        double volume();

        //Calculate Total surface area
        double total_surface_area();
};

#endif