#include <cxxtest/datatest/datatest.h>
#include <cxxtest/datatest/DataDescriptions.h>
#include <cxxtest/datatest/DataTestTracker.h>
#include <cxxtest/TestTracker.h>

using namespace CxxTest ; 

namespace CxxTest { 
  namespace DataTest { 

void
rate(DataTestDescription &info, RATING_TYPE rating, const char *msg)
{
    DataTestTracker *t = dynamic_cast<DataTestTracker *>(&(tracker())) ;
    t->rate(info, rating, msg) ; 
}


  };
};
