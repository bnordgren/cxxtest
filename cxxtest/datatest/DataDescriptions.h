#include <cxxtest/Descriptions.h>

#ifndef __datatest__datatestdescriptions__h
#define __datatest__datatestdescriptions__h

using namespace CxxTest ; 

namespace CxxTest { 

  namespace DataTest {
    class DataTestDescription : public TestDescription {
        virtual const char *getTestName(void) = 0 ; 
        virtual const char *getDataID(void) = 0 ;
    };

  };
};

#endif
