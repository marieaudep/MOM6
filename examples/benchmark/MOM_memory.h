!********+*********+*********+*********+*********+*********+*********+*
!*   This include file determines the compile-time settings for the   *
!* benchmark version of the Generalized Ocean Layered Dynamics (MOM) *
!* ocean model.                                                       *
!********+*********+*********+*********+*********+*********+*********+*

!  Specify the numerical domain.
#define NXTOT 360
#define NYTOT 180
                               !    NXTOT and NYTOT are the number of thickness
                               !  grid points in the zonal and meridional
                               !  directions of the physical domain.
#define NZ 22
                               !    The number of layers.

#undef  STATIC_MEMORY
                               !    If STATIC_MEMORY is defined, the principle
                               !  variables will have sizes that are statically
                               !  determined at compile time.  Otherwise the
                               !  sizes are not determined until run time. The
                               !  STATIC option is substantially faster, but
                               !  does not allow the PE count to be changed at
                               !  run time.
#define SYMMETRIC_MEMORY
                               !    If defined, the velocity point data domain
                               !  includes every face of the thickness points.
                               !  In other words, some arrays are larger than
                               !  others, depending on where they are on the 
                               !  staggered grid.

# define NXPROC 12
                               !    NXPROC is the number of processors in the
                               !  x-direction.
# define NYPROC 6
                               !    NYPROC is the number of processors in the
                               !  y-direction.

#define MAX_FIELDS 100
                               !    The maximum permitted number (each) of
                               !  restart variables, time derivatives, etc.
                               !  This is mostly used for the size of pointer
                               !  arrays, so it should be set generously.

#define NX_HALO 4
#define NY_HALO 4
                               !   NX_HALO and NY_HALO are the sizes of the
                               ! memory halos on each side.

#include <MOM_memory_macros.h>
