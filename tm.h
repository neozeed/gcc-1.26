/*at&t
//#include "tm-i386v.h"
//bsd
//#include "tm-bsd386.h"
*/
/* Implicit library calls should use memcpy, not bcopy, etc.  */

#define TARGET_MEM_FUNCTIONS 1

#include "tm-seq386.h"