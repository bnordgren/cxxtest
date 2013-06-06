#include <cxxtest/datatest/datatest.h>
#include <cxxtest/datatest/DataTestTracker.h>
#include <cxxtest/datatest/DataDescriptions.h>
#include <cxxtest/datatest/DataTestListener.h>

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
