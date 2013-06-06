#include "DataTestTracker.h"
#include "datatest.h"
#include "DataTestDescription.h"
#include "DataTestListener.h"

using namespace CxxTest ; 

namespace CxxTest { 
  namespace DataTest { 


    void 
    DataTestTracker::rate(DataTestDescription &info, 
        RATING_TYPE rating,
        const char *message) 
    {
        ((DataTestListener *)_l)->rate(info, rating, message);  
    }

  };
};
