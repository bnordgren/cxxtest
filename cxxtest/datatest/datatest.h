//#include "DataTestDescription.h"

namespace CxxTest {
  namespace DataTest {

    typedef enum { 
        HIGH_Conf_Good,
        MED_Conf_Good,
        LOW_Conf_Good,
        NEUTRAL,
        LOW_Conf_Bad,
        MED_Conf_Bad,
        HIGH_Conf_Bad,
        UNKNOWN
    } RATING_TYPE ; 

    extern "C" { 
//        void rate(DataTestDescription, RATING_TYPE, const char *);
        void createFortranDataTest(RATING_TYPE) ; 
        void createFortranDataTestSuite() ; 
    } ;

  };
};
