#include <stdio.h>
#include <string.h>
typedef struct elements
{
    //int sno;
    int atomicno;
    char elementname[20];
    char symbol[5];
    int atomicwt;
    char nature[5];
} elements;
int main()
{
    elements periodictable[] = {
        {1,"HYDROGEN","H",1,"GAS"},{3,"LITHIUM","Li",1,"SOLID"},{4, "BERYLLIUM", "Be", 1,"SOLID"},{11, "SODIUM", "Na", 1,"SOLID"},
        {12, "MAGNESIUM", "Mg", 1,"SOLID"},{19, "POTASSIUM", "K", 1,"SOLID"},{20, "CALSIUM", "Ca", 1,"SOLID"},{37, "RUBIDIUM", "Rb", 1,"SOLID"},
        {38, "STRONTIUM", "Sr", 1,"SOLID"},{55, "CESIUM", "Cs", 1,"SOLID"},{56, "BARIUM", "Ba", 1,"SOLID"},{87, "FRANSIUM", "Fr", 1,"SOLID"},{88, "RADIUM", "Ra", 1,"SOLID"},
        {2, "HELIUM", "He", 2, "GAS"}, // P BLOCK ELEMENTS
        {5, "BORON", "B", 1, "GAS"},{6, "CARBON", "C", 1, "GAS"},{7, "NITROGEN", "N", 1, "GAS"},{8, "OXYGEN", "O", 1, "GAS"},
        {9, "FLORINE", "F", 1, "GAS"},{10, "NEON", "Ne", 1, "GAS"},{13, "ALUMINIUM", "Al", 1, "SOLID"},{14, "SILICON", "Si", 1,"SOLID"},
        {15, "PHOSPHORUS", "P", 1,"SOLID"},{16, "SULPHUR", "S", 1,"SOLID"},{17, "CHLORINE", "Cl", 1, "GAS"},{18, "ARGON", "Ar", 1, "GAS"},
        {10, "NEON", "Ne", 1, "GAS"},{31, "GALLIUM", "Ga",69.723,"SOLID"},{32, "GERMANIUM", "Ge",72.63,"SOLID"},{33, "ARSENIC", "As",74.92,"SOLID"},
        {34, "SELENIUM", "Se",78.97,"SOLID"},{35, "BROMINE", "Br",79.90, "LIQUID"},{36, "KRYPTON", "Kr",83.80, "GAS"},{49, "INDIUM", "Ne",114.818,"SOLID"},
        {50, "TIN", "Al",118.71,"SOLID"},{51, "ANTIMONY", "Si",121.760,"SOLID"},{52, "TELLURIUM", "P",127.6,"SOLID"},{53, "IODINE", "S",126.9045,"SOLID"},
        {54, "XENON", "Cl",131.29, "GAS"},{81, "THALIUM", "Ar",204.383, "GAS"},{82, "LEAD", "Ne",207,"SOLID"},{83, "BISMUTH", "Al",208.980,"SOLID"},
        {84, "POLONIUM", "Si",208.982, "GAS"},{85, "ASTATINE", "P",209.987, "GAS"},{86, "RADON", "S",222.017, "GAS"},{113, "NIHONIUM", "Cl",286.182, "GAS"},
        {114, "FLEROVIUM", "Ar",290.192, "GAS"},{115, "MOSCOVIUM", "Cl",290.196, "GAS"},{116, "LIVERMORIUM", "Ar",293.205, "GAS"},{117, "TENNESINE", "Cl",294.211, "GAS"},{118, "OGANESSON", "Ar",295.216, "GAS"},
        {21, "SCANDIUM", "He", 2, "SOLID"},  // D BLOCK ELEMENTS
        {22, "TITANIUM", "B", 1,"SOLID"},{23, "VANADIUM", "C", 1,"SOLID"},{24, "CROMIUM", "N", 1,"SOLID"},{25, "MANGNESE", "O", 1,"SOLID"},
        {26, "IRON", "F", 1,"SOLID"},{27, "COBALT", "Ne", 1,"SOLID"},{28, "NIKEL", "Al", 1,"SOLID"},{29, "COPPER", "Si", 1,"SOLID"},
        {30, "ZINC", "P", 1,"SOLID"},{39, "YTTRIUM", "S", 1,"SOLID"},{40, "ZIRCONIUM", "Cl", 1,"SOLID"},{41, "NIOBIUM", "Ar", 1,"SOLID"},
        {42, "MOLYBDENIUM", "Ne", 1,"SOLID"},{43, "TECHNETIU,", "Al", 1,"SOLID"},{44, "RUTHENIUM", "Si", 1,"SOLID"},{45, "RHODIUM", "P", 1,"SOLID"},
        {46, "PALLADIUM", "S", 1,"SOLID"},{47, "SILVER", "Cl", 1,"SOLID"},{48, "CADMIUM", "Ar", 1,"SOLID"},{57, "LANTHANUM", "Ne", 1, "GAS"},{72, "HAFNIUM", "Al", 1, "GAS"},
        {73, "TANTALUM", "Si", 1, "GAS"},{74, "TUNGSTON", "P", 1, "GAS"},{75, "RHENIUM", "S", 1, "GAS"},{76, "OSMIUM", "Cl", 1, "GAS"},
        {77, "IRIDUM", "Ar", 1, "GAS"},{78, "PLATIUM", "Ne", 1, "GAS"},{79, "GOLD", "Al", 1, "GAS"},{80, "MERCURY", "Si", 1, "GAS"},
        {89, "ACTINIUM", "P", 1, "GAS"},{104, "RUTHERFORDIUM", "S", 1, "GAS"},{105, "DUBNIUM", "Cl", 1, "GAS"},{106, "SEABORGIUM", "Ar", 1, "GAS"},
        {107, "BOHRIUM", "Cl", 1, "GAS"},{108, "HASSIUM", "Ar", 1, "GAS"},{109, "MEITNERIUM", "Cl", 1, "GAS"},{110, "DARMSTADIUM", "Ar", 1, "GAS"},
        {111, "ROENTGENIUM", "S", 1, "GAS"},{112, "COPERNICIUM", "Cl", 1, "GAS"},
        {77, "IRIDUM", "Ar", 1, "GAS"},{78, "PLATIUM", "Ne", 1, "GAS"},{79, "GOLD", "Al", 1, "GAS"},{80, "MERCURY", "Si", 1, "GAS"},
        {58, "CERIUM", "P", 1, "GAS"},  //  F BLOCK ELEMENTS
        {59, "PRASEODYMIUM", "S", 1, "SOLID"},{60, "NEODYMIUM", "Cl", 1, "SOLID"},
        {61, "PROMTHIUM", "Ar", 1, "SOLID"},{62, "SAMARIUM", "Cl", 1, "SOLID"},{63, "EUROPIUM", "Ar", 1,"SOLID"},{64, "GADOLINIUM", "Cl", 1,"SOLID"},
        {65, "TERBIUM", "Ar", 1, "SOLID"},{66, "DYSPROSIUM", "S", 1, "SOLID"},{67, "HOLMIUM", "Cl", 1, "SOLID"},{68, "ERBIUM", "Ar", 1,"SOLID"},
        {69, "THULIUM", "Ne", 1, "SOLID"},{70, "YTTERBIUM", "Al", 1, "SOLID"},{71, "LUTETIUM", "Si", 1,"SOLID"},{90, "THORIUM", "P", 1,"SOLID"},
        {91, "PROTECTIUM", "S", 1, "SOLID"},{92, "URANIUM", "Cl", 1, "SOLID"},{93, "NEPTUNIUM", "Ar", 1,"SOLID"},{94, "PLUTONIUM", "Cl", 1, "SOLID"},
        {95, "AMERICIUM", "Cl", 1, "SOLID"},{96, "CURIUM", "Ar", 1, "SOLID"},{97, "BERKELIUM", "Cl", 1,"SOLID"},{98, "CALIFORNIUM", "Ar", 1,"SOLID"},
        {99, "EINSTEINIUM", "S", 1, "SOLID"},{100, "FERMIUM", "Cl", 1, "SOLID"},{101, "MENDEKIVIUM", "S", 1,"SOLID"},{102, "NOBELIUM", "Cl", 1,"SOLID"},{103, "LAWRENSIUM", "Cl", 1,"SOLID"},
};
    int i = 1;
    while (i != 0)
    {
        int atono;
        char n;
        printf("ENTER BLOCK(s,p,d,f) TO PRINT ELEMENTS OR EXIT TO 0 : ");
        scanf("%c",&n);
        if(n=='0'){
            printf("THANKYOU FOR JOINING US , HAVE A NICE DAY");
            break;
        }
        if (n == 's' || n == 'S')
        {
            for (int j = 0; j <= 12; j++)
            {
                printf("\t %d \t | \t %s \t | \t", periodictable[j].atomicno, periodictable[j].elementname);
                printf("%s \t | \t %d \t | \t %s \t |\n", periodictable[j].symbol, periodictable[j].atomicwt, periodictable[j].nature);
            }
        }
        if (n == 'p' || n == 'P')
        {
            for (int j = 13; j <= 50; j++)
            {
                printf("\t %d \t | \t %s \t | \t", periodictable[j].atomicno, periodictable[j].elementname);
                printf("%s \t | \t %d \t | \t %s \t |\n", periodictable[j].symbol, periodictable[j].atomicwt, periodictable[j].nature);
            }
        }
        if (n == 'd' || n == 'D')
        {
            for (int j = 51; j <= 90; j++)
            {
                printf("\t %d \t | \t %s \t | \t", periodictable[j].atomicno, periodictable[j].elementname);
                printf("%s \t | \t %d \t | \t %s \t |\n", periodictable[j].symbol, periodictable[j].atomicwt, periodictable[j].nature);
            }
        }
        if (n == 'f' || n == 'F')
        {
            for (int j = 96; j <= 118; j++)
            {
                printf("\t %d \t | \t %s \t | \t", periodictable[j].atomicno, periodictable[j].elementname);
                printf("%s \t | \t %d \t | \t %s \t |\n", periodictable[j].symbol, periodictable[j].atomicwt, periodictable[j].nature);
            }
        }
        /*printf("ENTER ATOMIC NO OF ELEMENT WHICH WE PROVIDE MORE INFORMATION : ");
        scanf("%d",&atono);
        printf("\t %d \t | \t %s \t | \t", periodictable[atono-1].atomicno, periodictable[atono-1].elementname);
        printf("%s \t | \t %d \t | \t %s \t |\n", periodictable[atono-1].symbol, periodictable[atono-1].atomicwt, periodictable[atono-1].nature);*/
    }
}