typedef enum{
    Ending,
    Bifurcation,
    Unknown
}MinutiaType;

typedef struct{
    unsigned short x;
    unsigned short y;
    float angle;
    MinutiaType type;
}Minutia;

typedef struct{
    Minutia* minutiae;
    unsigned short length;
}MinutiaArray;

Minutia* createMinutia(unsigned short x, unsigned short y, float angle, MinutiaType type);

MinutiaArray* createMinutiaArray(const unsigned short length);

void releaseMinutiaArray(MinutiaArray * mA);

double computeDistance(const Minutia * const m1, const Minutia * const m2);

Minutia* findCentroid(const MinutiaArray * const mA, double(* computeDistance)(const Minutia *const m1,const Minutia *const m2));

int testFindCentroid();


