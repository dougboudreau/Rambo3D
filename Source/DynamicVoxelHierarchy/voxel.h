#ifndef VOXEL_H
#define VOXEL_H

#include <stdio.h>

#include <qgl.h>

//** This object represent the voxel data that will be used for the project.
//** Voxels can be requested, found, and returned in order to be displayed.
class Voxel
{
    char* ID;
    int ResolutionX;
    int ResolutionY;
    int ResolutionZ;

    char* dataLocation;
    FILE* Data;

public:
    Voxel();
    Voxel(char* ID, int ResolutionX, int ResolutionY, int ResolutionZ, char* dataLocation);


    void printData();
    char* getID();

};

#endif // VOXEL_H