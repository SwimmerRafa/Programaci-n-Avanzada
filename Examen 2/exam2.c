#include "exam2.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

Minutia *createMinutia(unsigned short x, unsigned short y, float angle, MinutiaType type){
    Minutia *m = malloc(sizeof(Minutia));
    m->x = x;
    m->y = y;
    m->angle = angle;
    m->type = type;
    return m;
}

MinutiaArray* createMinutiaArray(const unsigned short length){
    MinutiaArray * mA = malloc(sizeof(MinutiaArray));
    mA -> length = length;
    mA -> minutiae = calloc(length,sizeof(Minutia));
    return mA;
}

double computeDistance(const Minutia *const m1, const Minutia *const m2){
    return sqrt((pow(m2->x - m1->x , 2)) + (pow(m2->y - m1->y, 2)) );
}

Minutia* findCentroid(const MinutiaArray * const mA, double(* computeDistance)(const Minutia * const m1,const Minutia * const m2)){

    double minutiaeDistance,pMinutiaeDistance = 0;
    int index;
    
    for (int i = 0; i < (mA->length);i++){
        for (int j = 0; j < (mA->length);j++){
            if (i!=j)
                pMinutiaeDistance += computeDistance(&mA->minutiae[i],&mA->minutiae[j]);
        }
        if (i==0){
            minutiaeDistance = pMinutiaeDistance;
            index = 0;
        }else if (pMinutiaeDistance <= minutiaeDistance){
            minutiaeDistance = pMinutiaeDistance;
            index = i;
        }
        pMinutiaeDistance = 0;
    }
    return &mA->minutiae[index];
}

void releaseMinutiaArray(MinutiaArray * mA){
    free(mA->minutiae);
    free(mA);
}

int testFindCentroid(){
    MinutiaArray* minutiaArrayTest = createMinutiaArray(10);

    // Test 1.
    Minutia * minutiaTestOne = createMinutia(1, 1, 1, Bifurcation);
    minutiaArrayTest -> minutiae[0] = *minutiaTestOne;
    free(minutiaTestOne);

    // Test 2.
    Minutia * minutiaTestTwo = createMinutia(7, 17, 14, Bifurcation);
    minutiaArrayTest -> minutiae[1] = *minutiaTestTwo;
    free(minutiaTestTwo);

    // Test 3.
    Minutia* minutiaTestThree = createMinutia(9, 12, 19, Unknown);
    minutiaArrayTest -> minutiae[2] = *minutiaTestThree;
    free(minutiaTestThree);

    // Test 4.
    Minutia* minutiaTestFour = createMinutia(5, 5, 1, Unknown);
    minutiaArrayTest -> minutiae[3] = *minutiaTestFour;
    free(minutiaTestFour);

    // Test 5.
    Minutia* minutiaTestFive = createMinutia(8, 8, 1, Bifurcation);
    minutiaArrayTest -> minutiae[4] = *minutiaTestFive;
    free(minutiaTestFive);

    // Test 6.
    Minutia* minutiaTestSix = createMinutia(4, 7, 13, Unknown);
    minutiaArrayTest -> minutiae[5] = *minutiaTestSix;
    free(minutiaTestSix);

    // Test 7.
    Minutia* minutiaTestSeven = createMinutia(23, 16, 19, Bifurcation);
    minutiaArrayTest -> minutiae[6] = *minutiaTestSeven;
    free(minutiaTestSeven);

    // Test 8.
    Minutia* minutiaTestEight = createMinutia(6, 15, 2, Unknown);
    minutiaArrayTest -> minutiae[7] = *minutiaTestEight;
    free(minutiaTestEight);

    // Test 9.
    Minutia* minutiaTestNine = createMinutia(25, 8, 4, Unknown);
    minutiaArrayTest -> minutiae[8] = *minutiaTestNine;
    free(minutiaTestNine);

    // Test 10.
    Minutia* minutiaTestTen = createMinutia(15, 4, 10, Bifurcation);
    minutiaArrayTest -> minutiae[9] = *minutiaTestTen;
    free(minutiaTestTen);

    Minutia* centroid = findCentroid(minutiaArrayTest, &computeDistance);

    if(&minutiaArrayTest->minutiae[4] == centroid){
        releaseMinutiaArray(minutiaArrayTest);
        return 1;
    }else{
        releaseMinutiaArray(minutiaArrayTest);
        return 0;
    }
}

int main(){
    printf("\n%d\n",testFindCentroid());
}