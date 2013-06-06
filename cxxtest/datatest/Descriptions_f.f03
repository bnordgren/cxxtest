module Descriptions

implicit none
private 
public :: TestDescription

integer, parameter :: stringlen = 64 ; 

type :: TestDescription
    private 
    character, dimension(stringlen) :: name

contains
    procedure :: getName ; 
end type

interface TestDescription
    procedure td_construct
end interface TestDescription

contains

function getName(self) 
    implicit none
    character, dimension(stringlen) :: getName ; 
    CLASS(TestDescription) :: self ; 
    getName = self%name ; 
end function getName

function td_construct(name)
    implicit none
    character(*)  :: name ; 
    TYPE(TestDescription), pointer :: td_construct ; 

    ALLOCATE(td_construct)
    call string_to_array(name, td_construct%name)
end function

subroutine string_to_array(string, array)
    implicit none
    character(*), intent(in) :: string
    character, dimension(stringlen), intent(out):: array
    integer :: i, inbytes, copybytes

    inbytes = LEN(string)
    copybytes = inbytes
    if (copybytes > stringlen) then
        copybytes = stringlen
    end if
    
    do i=1,copybytes
        array(i) = string(i:i)
    end do
end subroutine

end module
