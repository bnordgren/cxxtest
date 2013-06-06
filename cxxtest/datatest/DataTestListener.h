#include "datatest.h"
#include "DataDescriptions.h"
#include "TestListener.h"

using namespace CxxTest ; 

namespace CxxTest { 
  namespace DataTest {

    class DataTestListener : public TestListener {
        virtual void rate(DataTestDescription &info,
                RATING_TYPE rating, 
                const char *msg) = 0 ;
    } ; 


  } ; 
}; 
