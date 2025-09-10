#include <string.h>

int VoteOn(void* Instances[], int nInstances, int nSize){
    int i, j; 
    int curRep = 0, maxRep = 0, maxIndex = -1;
    for(i = 0; i < nInstances; i++){
        curRep = 0;
        for(j = i+1; j < nInstances; j++){
            if(memcmp(Instances[i], Instances[j], nSize) == 0){
                curRep++;
            }
        }
        if(curRep > maxRep){
            maxRep = curRep;
            maxIndex = i;
        }
    }
    return maxIndex;
}