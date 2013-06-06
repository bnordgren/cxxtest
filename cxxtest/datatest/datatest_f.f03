
module datatest
    use iso_c_binding 
    implicit none

    private
    public :: c_createFortranDataTest
    public :: HIGH_Conf_Good, MED_Conf_Good, LOW_Conf_Good
    public :: NEUTRAL, LOW_Conf_Bad, MED_Conf_Bad, HIGH_Conf_Bad
    public :: UNKNOWN

    enum, bind(c)
        enumerator :: HIGH_Conf_Good
        enumerator :: MED_Conf_Good
        enumerator :: LOW_Conf_Good
        enumerator :: NEUTRAL
        enumerator :: LOW_Conf_Bad
        enumerator :: MED_Conf_Bad
        enumerator :: HIGH_Conf_Bad
        enumerator :: UNKNOWN
    end enum

    interface 
        subroutine c_rate(info, rating, message) bind(C, NAME='rate')
          use iso_c_binding
          implicit none 
          TYPE(c_ptr) :: info  
          INTEGER(c_int), value :: rating  
          TYPE(c_ptr) :: message 
        end subroutine c_rate
    end interface

    interface
        subroutine c_createFortranDataTest(rating) bind(C, name='createFortranDataTest')
            use iso_c_binding
            implicit none
            INTEGER (c_int), value :: rating
        end subroutine c_createFortranDataTest
    end interface


end module datatest

