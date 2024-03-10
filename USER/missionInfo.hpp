/*  Allgemeine Info über die Mission.
*   Ist in description.ext eingebunden, kann also auch für andere Configs benutzt werden.
*/

author = "nomisum für Gruppe Adler";                                               //Missionsersteller (Du)
onLoadName = "H U N T I N G   H O P P E R S";                                                    //Name der Mission
onLoadMission = "";                                                             //Beschreibung der Mission (wird im Ladebildschirm unterhalb des Ladebildes angezeigt)
loadScreen = "USER\data\loading.paa";                                                //Ladebild

class cfgMission {
    markerVariance_1 = 1000;
    markerVariance_2 = 500;
    markerVariance_3 = 250;
    markerVariance_4 = 150;
    markerVariance_5 = 0;

    markerInterval[] = {10,10};
    markerFadeout = 11;
};

class GRAD_vehicleRespawn {
    class RHS_MELB_MH6M {
        customCode = "(_this select 0) addMagazineCargoGlobal ['gm_30Rnd_556x45mm_B_DM11_g36_blk', 20]; (_this select 0) addMagazineCargoGlobal ['gm_120Rnd_762x51mm_B_T_DM21_mg3_grn', 20];"; // _this select 0 is the vehicle
    };

    class UK3CB_TKA_O_GAZ_Vodnik_PKT {
        customCode = "(_this select 0) addMagazineCargoGlobal ['gm_30Rnd_545x39mm_B_7N6_ak74_org', 20]; (_this select 0) addMagazineCargoGlobal ['gm_75Rnd_762x39mm_B_57N231_ak47_blk', 20];"; // _this select 0 is the vehicle
    };

    class UK3CB_TKA_O_Tigr_FFV {
        customCode = "(_this select 0) addMagazineCargoGlobal ['gm_30Rnd_545x39mm_B_7N6_ak74_org', 20]; (_this select 0) addMagazineCargoGlobal ['gm_75Rnd_762x39mm_B_57N231_ak47_blk', 20];"; // _this select 0 is the vehicle
    };
};
