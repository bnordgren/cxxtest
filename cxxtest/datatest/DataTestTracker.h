#include <cxxtest/TestTracker.h>
#include <cxxtest/datatest/datatest.h>
#include <cxxtest/datatest/DataTestListener.h>
#include <cxxtest/datatest/DataDescriptions.h>

#ifndef __datatest__datatesttracker__h
#define __datatest__datatesttracker__h

using namespace CxxTest ; 

namespace CxxTest { 
  namespace DataTest { 

    class DataTestTracker : public TestTracker, public DataTestListener {
        public: 
        void rate(DataTestDescription &info, RATING_TYPE rating, const char *msg);
    } ; 

  };
};

#endif
