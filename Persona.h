#ifndef PERSONA_H
#define PERSONA_H


//0 de 24 carreiras
typedef struct carrer {
    int id; int term; int rank; bool basicTraining;
} carrer;

typedef struct persona {
    carrer carreira; char name[15];int str; int des; int res; int Int; int edu; int car;
    char strH; char desH; char resH; char intH; char eduH; char carH;
    int age; int totalTerm; 
} persona;

//Para o RNG
enum skills {
    admin,
    advocate,
    animals, //2 {3-6}
    farming,
    riding,
    survival,
    vetMed,
    athletics,
    battleDress,
    bribery,
    broker,
    carousing,
    comms,
    computer,
    demolitions,
    electronics,
    engineering,
    gambling,
    gravitics,
    jackO,
    leadership,
    linguistics,
    liaison,
    mechanics,
    medicine,
    navigation,
    piloting,
    recon,
    sciences, //28 {29-32}
    lifeSci,
    physicalSci,
    socialSci,
    spaceSci,
    steward,
    streetwise,
    tactics,
    zeroG,
    gunCombat, //37 {38-43}
    archery,
    energyPistol,
    energyRifle,
    shotgun,
    slugPistol,
    slugRifle,
    gunnery, //44 {45-49}
    bayWeaps,
    heavyWeaps,
    screens,
    spinalMounts,
    turretWeaps,
    meleeCombat, //50 {51-54}
    bludgeonWeaps,
    naturalWeaps,
    piercingWeaps,
    slashingWeaps,
    vehicle, //55 {56-67}
    aircraft, //56 {57-59}
    grav,
    rotor,
    winged,
    mole,
    tracked,
    watercraft, //62 {63-66}
    motorboats,
    oceanShips,
    sailingShips,
    submarine,
    wheeled
};

enum carrerPool { Drifter, AirForce, Marine, Navy, SpaceNavy, Scout, Army }; //Apenas drifter e as carreiras para draft

struct skill {
    int id; int level;
};

void carreerStep(persona x);
void carrerApply(persona x);
void carrerDraft();
void carrerSurvival();
void carrerPromotion();
void ageCheck();
void carrerReenlist();
void carrerRetire();
void retireBenefits();

#endif
