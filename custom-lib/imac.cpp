/** Automatically generated template file **/
#include "imac.h"

int myFib(int max){
    if (max<0){
        return -1;
    }
    if (max<2){
        return 1;
    }
    else
        return myFib(max - 1) + myFib(max - 2);
}
