#include <cxxtest/Descriptions.h>
#include <cxxtest/datatest/FortranDataTestSuiteDescription.h>

using namespace CxxTest ; 

namespace CxxTest {
  namespace DataTest {


FortranDataTestSuiteDescription::FortranDataTestSuiteDescription(unsigned tests)
{
    num_tests = tests ; 
}

void
FortranDataTestSuiteDescription::activateAllTests() { ; } 

TestDescription *
FortranDataTestSuiteDescription::firstTest()
{
    return (TestDescription *)0;
}

const TestDescription *
FortranDataTestSuiteDescription::firstTest() const
{
    return (TestDescription *)0;
}

  }; 
};
