#include "datatest.h"
#include "iostream"

using namespace std ;

namespace cxxtest { 
  namespace datatest { 
    extern "C" {
//        void rate(DataTestDescription test_info, 
//                  RATING_TYPE rating, const char *msg) 
//        {
//            cout << "Rating the data in C!\n" ; 
//        }
        void createFortranDataTest(RATING_TYPE rating) 
        {
            cout << "The Rating is: " << rating << "!\n" ; 
        }
    }  
  };
};

