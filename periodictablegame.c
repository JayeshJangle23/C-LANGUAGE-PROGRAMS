#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef struct elements
{
    int atomicno;
    char elementname[20];
    char symbol[5];
} elements;
int check1(char sym[3],char psym[3]){
    int count = 0;
    for(int i=0;i<=2;i++){
    if(sym[i]==psym[i]){
        count++;
    }
    else{
        count = 0;
    }
    if(count>=1){
        printf("**");
        return 1;
    }
    else    return 0;
}
}
int check2(int atono,int patono){
    if(atono==patono){
        printf("**");
        return 1;
    }
    else{
       return 0;
}
}

int main()
{
    elements periodictable[] = {
        {0,"NULL","NULL"},
        {1,"HYDROGEN","H"},
        {2, "HELIUM", "He"},
        {3,"LITHIUM","Li"},
        {4, "BERYLLIUM", "Be"},
        {5, "BORON", "B"},
        {6, "CARBON", "C"},
        {7, "NITROGEN", "N"},
        {8, "OXYGEN", "O"},
        {9, "FLORINE", "F"},
        {10, "NEON", "Ne"},
        {11, "SODIUM", "Na"},
        {12, "MAGNESIUM", "Mg"},
        {13, "ALUMINIUM", "Al"},
        {14, "SILICON", "Si"},
        {15, "PHOSPHORUS", "P"},
        {16, "SULPHUR", "S"},
        {17, "CHLORINE", "Cl"},
        {18, "ARGON", "Ar"},
        {19, "POTASSIUM", "K"},
        {20, "CALSIUM", "Ca"},
        {21, "SCANDIUM", "Sc"},
        {22, "TITANIUM", "Ti"},
        {23, "VANADIUM", "V"},
        {24, "CROMIUM", "Cr"},
        {25, "MANGNESE", "Mn"},
        {26, "IRON", "Fe"},
        {27, "COBALT", "Co"},
        {28, "NIKEL", "Ni"},
        {29, "COPPER", "Cu"},
        {30, "ZINC", "Zn"},
        {31, "GALLIUM", "Ga"},
        {32, "GERMANIUM", "Ge"},
        {33, "ARSENIC", "As"},
        {34, "SELENIUM", "Se"},
        {35, "BROMINE", "Br"},
        {36, "KRYPTON", "Kr"},
        {37, "RUBIDIUM", "Rb"},
        {38, "STRONTIUM", "Sr"},
        {39, "YTTRIUM", "Y"},
        {40, "ZIRCONIUM", "Zr"},
        {41, "NIOBIUM", "Nb"},
        {42, "MOLYBDENIUM", "Mo"},
        {43, "TECHNETIU,", "Tc"},
        {44, "RUTHENIUM", "Ru"},
        {45, "RHODIUM", "Rh"},
        {46, "PALLADIUM", "Pd"},
        {47, "SILVER", "Ag"},
        {48, "CADMIUM", "Cd"},
        {49, "INDIUM", "In"},
        {50, "TIN", "Sn"},
        {51, "ANTIMONY", "Sb"},
        {52, "TELLURIUM", "Te"},
        {53, "IODINE", "I"},
        {54, "XENON", "Xe"},
        {55, "CESIUM", "Cs"},
        {56, "BARIUM", "Ba"},
        {57, "LANTHANUM", "La"},
        {58, "CERIUM", "Ce"},
        {59, "PRASEODYMIUM", "Pr"},
        {60, "NEODYMIUM", "Nd"},
        {61, "PROMTHIUM", "Pm"},
        {62, "SAMARIUM", "Sm"},
        {63, "EUROPIUM", "Eu"},
        {64, "GADOLINIUM", "Gd"},
        {65, "TERBIUM", "Tb"},
        {66, "DYSPROSIUM", "Dy"},
        {67, "HOLMIUM", "Ho"},
        {68, "ERBIUM", "Er"},
        {69, "THULIUM", "Tm"},
        {70, "YTTERBIUM", "Yb"},
        {71, "LUTETIUM", "Lu"},
        {72, "HAFNIUM", "Hf"},
        {73, "TANTALUM", "Ta"},
        {74, "TUNGSTON", "W"},
        {75, "RHENIUM", "Re"},
        {76, "OSMIUM", "Os"},
        {77, "IRIDUM", "Ir"},
        {78, "PLATIUM", "Pt"},
        {79, "GOLD", "Au"},
        {80, "MERCURY", "Hg"},
        {81, "THALIUM", "Tl"},
        {82, "LEAD", "Pb"},
        {83, "BISMUTH", "Bi"},
        {84, "POLONIUM", "Po"},
        {85, "ASTATINE", "At"},
        {86, "RADON", "Rn"},
        {87, "FRANSIUM", "Fr"},
        {88, "RADIUM", "Ra"},
        {89, "ACTINIUM", "Ac"},
        {90, "THORIUM", "Th"},
        {91, "PROTECTIUM", "Pa"},
        {92, "URANIUM", "U"},
        {93, "NEPTUNIUM", "Np"},
        {94, "PLUTONIUM", "Pu"},
        {95, "AMERICIUM", "Am"},
        {96, "CURIUM", "Cm"},
        {97, "BERKELIUM", "Bk"},
        {98, "CALIFORNIUM", "Cf"},
        {99, "EINSTEINIUM", "Es"},
        {100, "FERMIUM", "Fm"},
        {101, "MENDEKIVIUM", "Md"},
        {102, "NOBELIUM", "No"},
        {103, "LAWRENSIUM", "Lr"},
        {104, "RUTHERFORDIUM", "Rf"},
        {105, "DUBNIUM", "Db"},
        {106, "SEABORGIUM", "Sg"},
        {107, "BOHRIUM", "Bh"},
        {108, "HASSIUM", "Hs"},
        {109, "MEITNERIUM", "Mt"},
        {110, "DARMSTADIUM", "Ds"},
        {111, "ROENTGENIUM", "Rg"},
        {112, "COPERNICIUM", "Cn"},
        {113, "NIHONIUM", "Nh"},
        {114, "FLEROVIUM", "Fl"},
        {115, "MOSCOVIUM", "Mc"},
        {116, "LIVERMORIUM", "Lv"},
        {117, "TENNESINE", "Ts"},
        {118, "OGANESSON", "Og"},
};
    int i = 1;
    while (i != 0)
    {
        int n;
        printf("ENTER 1 TO PLAY WITH ATOMIC NUMBER TO SYMBOL ,\n");
        printf("ENTER 2 TO PLAY WITH SYMBOL TO ATOMIC NUMBER , \n");
        printf("ENTER 0 TO EXIT THE GAME :");
        scanf("%d",&n);
        if(n==0){
            printf("THANKYOU FOR JOINING US , HAVE A NICE DAY");
            break;
        }
        if(n==1){
            int win=0;
            int loss=0;
            for(int j=1;j<=5;j++){
            printf("**** YOU SELECT 1 TO PLAY WITH ATOMIC NUMBER TO SYMBOL ****\n");
            srand(time(NULL));
            int rn = rand()%118;
            char symbol[3];
            printf("ATOMIC NUMBER = %d \t ENTER ITS SYMBOL :",rn);
            scanf("%s",&symbol);
            int c=check1(symbol,periodictable[rn].symbol);
            if(c==1){
                printf("CONGRATULATIONS YOU WON %d ROUND...\n",j);
                printf("ATOMIC NUMBER --> %d\n",periodictable[rn].atomicno);
                printf("ELEMENT NAME --> %s\n",periodictable[rn].elementname);
                printf("SYMBOL --> %s\n\n",periodictable[rn].symbol);
                win++;
                }
            else{
                printf("SORRY , YOU LOSS %d ROUND...\n",j);
                printf("ATOMIC NUMBER --> %d\n",periodictable[rn].atomicno);
                printf("ELEMENT NAME --> %s\n",periodictable[rn].elementname);
                printf("SYMBOL --> %s\n\n",periodictable[rn].symbol);
                loss++;
            }
            }
            if(win>loss){
                printf("YOU WIN THE GAME WITH %d POINTS....\n\n\n",win);
            }
            else{
                printf("YOU LOSS THE GAME WITH %d POINTS....\n\n\n",loss);
            }
        }
        if(n==2){
            int win=0;
            int loss=0;
            for(int j=1;j<=5;j++){
            printf("**** YOU SELECT 2 TO PLAY WITH SYMBOL TO ATOMIC NUMBER ****\n");
            srand(time(NULL));
            int rn = rand()%118;
            int atono;
            char symbol[3];
            printf("SYMBOL : %s \t ENTER ITS ATOMIC NUMBER :",periodictable[rn].elementname);
            scanf("%d",&atono);
            int c=check2(atono,periodictable[rn].atomicno);
            if(c==1){
                printf("CONGRATULATIONS YOU WON %d ROUND...\n",j);
                printf("ATOMIC NUMBER --> %d\n",periodictable[rn].atomicno);
                printf("ELEMENT NAME --> %s\n",periodictable[rn].elementname);
                printf("SYMBOL --> %s\n\n",periodictable[rn].symbol);
                win++;
                }
            else{
                printf("SORRY , YOU LOSS %d ROUND...\n",j);
                printf("ATOMIC NUMBER --> %d\n",periodictable[rn].atomicno);
                printf("ELEMENT NAME --> %s\n",periodictable[rn].elementname);
                printf("SYMBOL --> %s\n\n",periodictable[rn].symbol);
                loss++;
            }
            }
        
        if(win>loss){
                printf("YOU WIN THE GAME WITH %d POINTS....\n\n\n",win);
            }
        else{
                printf("YOU LOSS THE GAME WITH %d POINTS....\n\n\n",loss);
            }
        }
        
}
}