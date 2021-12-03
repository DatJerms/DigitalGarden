#include <string>
#include <vector>
#include <iostream>
//#include <future>
#include "land.h"
#include "carrot.h"
#include "crops.h"

using namespace std;


land::land()
{
  occupancy = false;
}
land::~land() {}

bool land::getOccupancy() {
    return occupancy;
}

land::land(carrot c) {
    cropptr = &c;
    c.plant();
    plant(c);
}


bool land::removeCrop(carrot c)
{
    //delete crop
    //occupancy =false
    //delete c;
    if (c.getCState() == "crop") {
        c.~carrot();
        occupancy = false;
        return true;
    }
    return false;
}


string land::getCropName(carrot c)
{
  return c.getName();
}


string land::getCropState(carrot c)
{
  return c.getCState(); 
}

float land::getCropDuration(carrot c)
{
  return c.getDuration();
}


bool land::plant(carrot c)
{

  if (occupancy==false)
  {
    cropptr = &c;
    msg = "Planted!";
    
    //c.grow();
    occupancy = true;
  }
  else{
    //print sorry occupied
    msg = "Sorry it is occupied";
    
  }
  return true;
}
land::land(corn c) {
    cornptr = &c;
    c.plant();
    plant(c);
}


bool land::removeCrop(corn c)
{
    //delete crop
    //occupancy =false
    //delete c;
    if (c.getCState() == "crop") {
        c.~corn();
        occupancy = false;
        return true;
    }
    return false;
}


string land::getCropName(corn c)
{
    return c.getName();
}


string land::getCropState(corn c)
{
    return c.getCState();
}

float land::getCropDuration(corn c)
{
    return c.getDuration();
}


bool land::plant(corn c)
{

    if (occupancy == false)
    {
        cornptr = &c;
        msg = "Planted!";

        //c.grow();
        occupancy = true;
    }
    else {
        //print sorry occupied
        msg = "Sorry it is occupied";

    }
    return true;
}
land::land(potato c) {
    potptr = &c;
    c.plant();
    plant(c);
}


bool land::removeCrop(potato c)
{
    //delete crop
    //occupancy =false
    //delete c;
    if (c.getCState() == "crop") {
        c.~potato();
        occupancy = false;
        return true;
    }
    return false;
}


string land::getCropName(potato c)
{
    return c.getName();
}


string land::getCropState(potato c)
{
    return c.getCState();
}

float land::getCropDuration(potato c)
{
    return c.getDuration();
}


bool land::plant(potato c)
{

    if (occupancy == false)
    {
        potptr = &c;
        msg = "Planted!";

        //c.grow();
        occupancy = true;
    }
    else {
        //print sorry occupied
        msg = "Sorry it is occupied";

    }
    return true;
}