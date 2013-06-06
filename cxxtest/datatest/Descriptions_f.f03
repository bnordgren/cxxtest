module Descriptions

use iso_c_binding
implicit none
private 
public :: TestDescription

integer, parameter :: stringlen = 64 ; 

type :: TestDescription
    private 
    character(kind=c_char), dimension(stringlen) :: name

contains
    procedure :: getName ; 
end type

interface TestDescription
    procedure td_construct
    procedure td_construct_chararray
end interface TestDescription

contains

function getName(self) 
    implicit none
    character(kind=c_char), dimension(stringlen) :: getName ; 
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

function td_construct_chararray(name)
    implicit none
    character(kind=c_char), dimension(:) :: name
    type(TestDescription), pointer :: td_construct_chararray

    allocate(td_construct_chararray)
    call copy_array(name, td_construct_chararray%name)
end function

function F_td_construct(name_c) bind(C, name='F_td_construct')
    implicit none
    type(c_ptr) :: name_c
    type(c_ptr) :: F_td_construct
    character(kind=c_char), dimension(:), pointer :: name_f

    call c_to_f_array(name_c, name_f)

    F_td_construct = c_loc(TestDescription(name_f))
end function

function F_td_getName(td) bind(C, name='F_td_getName')
    implicit none
    type(c_ptr) :: td
    type(c_ptr) :: F_td_getName
    type(TestDescription), pointer :: td_f
    character(kind=c_char), dimension(stringlen) :: name_f

    call c_f_pointer(td, td_f, [1])

    name_f = td_f%getName()
    F_td_getName = c_loc(name_f)
end function

    
subroutine c_to_f_array(c_array, f_array)
    implicit none
    type(c_ptr), intent(in) :: c_array
    character(kind=c_char), dimension(:), pointer, intent(out) :: f_array

    integer length
    character(kind=c_char), dimension(:), pointer :: test

    call c_f_pointer(c_array, test, [stringlen])
    length = 1 
    do while (test(length) .ne. c_null_char) 
        length=length+1
    end do

    call c_f_pointer(c_array, f_array, [ length ] )
end subroutine


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


subroutine copy_array(from, to) 
    implicit none
    character(kind=c_char), dimension(stringlen), intent(in)  :: from
    character(kind=c_char), dimension(stringlen), intent(out) :: to

    integer :: i
    do i=1,stringlen
        to(i) = from(i)
    end do
end subroutine

end module
