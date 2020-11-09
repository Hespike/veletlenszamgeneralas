#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int dice(){
srand(time(NULL));
int r = rand();
return (r % 6) + 1;
}

int main(){

    printf("random szamom: %d\n", dice());
    
    return 0;
}