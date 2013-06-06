#include "datatest.h"
#include "DataTestDescription.h"
#include "TestTracker.h"

using namespace CxxTest ; 

namespace CxxTest { 
  namespace DataTest { 

void
rate(DataTestDescription &info, RATING_TYPE rating, const char *msg)
{
    tracker().rate(info, rating, msg) ; 
}


  };
};
