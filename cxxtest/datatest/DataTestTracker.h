#include "datatest.h"
#include "TestTracker.h"
#include "DataTestListener.h"
#include "DataTestDescription.h"

using namespace CxxTest ; 

namespace CxxTest { 
  namespace DataTest { 

    class DataTestTracker : public TestTracker, public DataTestListener {
        void rate(DataTestTracker &info, RATING_TYPE rating, const char *msg);
    } ; 

  };
};
