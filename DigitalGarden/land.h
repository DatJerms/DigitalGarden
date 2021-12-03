
#ifndef land_H
#define land_H

#include <string>
#include <vector>
#include <cstdlib>
#include "crops.h"
#include "carrot.h"
#include "corn.h"
#include "potato.h"



 class land
{  
    public:
    land();
    land(carrot);
    land(corn);
    land(potato);
    ~land();
  


 
    std::string getMsg() {
    return msg;
    }
    bool plant(carrot c);
    bool removeCrop(carrot c);
    std::string getCropName(carrot c);
    std::string getCropState(carrot c);
    float getCropDuration(carrot c);
    bool plant(corn c);
    bool removeCrop(corn c);
    std::string getCropName(corn c);
    std::string getCropState(corn c);
    float getCropDuration(corn c);
    bool plant(potato c);
    bool removeCrop(potato c);
    std::string getCropName(potato c);
    std::string getCropState(potato c);
    float getCropDuration(potato c);

    bool getOccupancy();



private:
  carrot *cropptr = nullptr;
  corn *cornptr = nullptr;
  potato* potptr = nullptr;
  bool occupancy;
  std::string msg;  
}; 

#endif