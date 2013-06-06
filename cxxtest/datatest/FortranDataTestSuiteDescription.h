#include <cxxtest/RealDescriptions.h>

#ifndef __datatest__fortrandatatestsuitedesc__h
#define __datatest__fortrandatatestsuitedesc__h

namespace CxxTest { 
  namespace DataTest { 

    class FortranDataTestSuiteDescription : public RealSuiteDescription {
        private: 
        unsigned num_tests ; 

        public:
        FortranDataTestSuiteDescription(unsigned num_tests) ; 
        unsigned numTests() const ; 
        TestDescription *firstTest() ; 
        const TestDescription *firstTest() const ; 
        void activateAllTests() ;
    };

    inline unsigned
    FortranDataTestSuiteDescription::numTests() const
    {
        return num_tests ;
    }

  };
};

#endif
