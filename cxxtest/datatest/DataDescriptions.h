#include "Descriptions.h"

using namespace CxxTest ; 

namespace CxxTest { 

  namespace DataTest {
    class DataTestDescription : public TestDescription {
        virtual const char *getTestName(void) = 0 ; 
        virtual const char *getDataID(void) = 0 ;
    };

  };
};
