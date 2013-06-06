#include <cxxtest/datatest/datatest.h>
#include <cxxtest/datatest/DataDescriptions.h>
#include <cxxtest/TestListener.h>

#ifndef __datatest__datatestlistener_h
#define __datatest__datatestlistener_h

using namespace CxxTest ; 

namespace CxxTest { 
  namespace DataTest {

    class DataTestListener : public TestListener {
        public:
        virtual void rate(DataTestDescription &info,
                RATING_TYPE rating, 
                const char *msg) = 0 ;
    } ; 


  } ; 
}; 
#endif
