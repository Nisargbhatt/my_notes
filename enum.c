#include <stdio.h>
//the enum is defined for the week which have following days

enum week{mon=1,tue,wed,thur,fri,sat,sun};


int main()
{  
    enum week day;
    day = wed;
    printf("%d",day);
    return 0;


}
