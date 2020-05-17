/****************************************
*
*             Created By -
*         Ayush Sharma (ayushVGX) 
*
*
*****************************************/
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void Graphical_Periodic_Table();       // Method for graphical display of PERIODIC TABLE
void Elements();                       // Method for searching Elements By Atomic Number

void INTERFACE()                 // MAIN INTERFACE 
{
	FLAG:
	system("cls");
	cout<<"\n\n\t";
	cout<<R"(
                  
             _____          _           _ _        _______    _     _      
            |  __ \        (_)         | (_)      |__   __|  | |   | |     
            | |__) |__ _ __ _  ___   __| |_  ___     | | __ _| |__ | | ___ 
            |  ___/ _ \ '__| |/ _ \ / _` | |/ __|    | |/ _` | '_ \| |/ _ \
            | |  |  __/ |  | | (_) | (_| | | (__     | | (_| | |_) | |  __/
            |_|   \___|_|  |_|\___/ \__,_|_|\___|    |_|\__,_|_.__/|_|\___|
                                                                
                                                                                                                                                 
	        )";
	cout<<"\n\n\t\t\tWelcome To the Periodic Table Program!";
	cout<<"\n\n\t\t\t1. Graphical Periodic Table"
	    <<"\n\t\t\t2. Search By Atomic Number"
	    <<"\n\t\t\t3. Exit";

	    int choice;  //CHOICE OF USER

	    cout<<"\n\n\t\t\tEnter Your Choice : ";
	    cin>>choice;

	    if(choice==1)
	    	Graphical_Periodic_Table();
	    else if(choice==2)
	    	Elements();
	    else if(choice==3)
	         exit(0); 
	    else
	      cerr<<"\n\n\t\t\tMAKE A CORRECT CHOICE!!!";
	      getch();
	      goto FLAG;
	        
}

void Graphical_Periodic_Table()         //Method For displaying graphical Periodic Table
{
	system("cls");
	cout<<"\n\n";
    cout<<R"(
 __________________________________________________________________________ 
|   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18 |
|                                                                          |
|1  H                                                                   He |
|                                                                          |
|2  Li  Be                                          B   C   N   O   F   Ne |
|                                                                          |
|3  Na  Mg                                          Al  Si  P   S   Cl  Ar |
|                                                                          |
|4  K   Ca  Sc  Ti  V   Cr  Mn  Fe  Co  Ni  Cu  Zn  Ga  Ge  As  Se  Br  Kr |
|                                                                          |
|5  Rb  Sr  Y   Zr  Nb  Mo  Tc  Ru  Rh  Pd  Ag  Cd  In  Sn  Sb  Te  I   Xe |
|                                                                          |
|6  Cs  Ba  *   Hf  Ta  W   Re  Os  Ir  Pt  Au  Hg  Tl  Pb  Bi  Po  At  Rn |
|                                                                          |
|7  Fr  Ra  **  Rf  Db  Sg  Bh  Hs  Mt  Ds  Rg  Cn  Nh  Fl  Mc  Lv  Ts  Og |
|__________________________________________________________________________|
|                                                                          |
|                                                                          |
| Lanthanoid*   La  Ce  Pr  Nd  Pm  Sm  Eu  Gd  Tb  Dy  Ho  Er  Tm  Yb  Lu |
|                                                                          |
|  Actinoid**  Ac  Th  Pa  U   Np  Pu  Am  Cm  Bk  Cf  Es  Fm  Md  No  Lr  |
|__________________________________________________________________________|


             )";

             getch();
             INTERFACE();
}

void Elements()
{
	system("cls");

	int a_num;  // For Atomic Number

	cout<<"\n\nTotal Number of Elements in Modern Periodic Table : "<<118;

	cout<<"\n\nEnter the Atomic Number : ";
	cin>> a_num;

	system("cls");

	switch(a_num) {

           case 1: cout<<R"(Hydrogen

Relative atomic mass: 1.00794 +- 0.00007

Atomic number: 1
Group numbers: 1
Period: 1
Standard state (20 oC): gas

Discovery: 1766 Sir Henry Cavendish (GB)

Electronic configuration: 1s1
Formal oxidation number: -1 +1
Atomic radius: 37.3 pm

Electronegativities: 2.2
Thermal conductivity: 0.183 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -259.34 oC
Boiling point: 252.87 oC

Heat of fusion: 0.12 kJ/mol
Heat of vaporization: 0.46 kJ/mol
Heat of atomization: 216.003 kJ/mol)";
break;

   
    case 2: cout<<R"(Helium

Relative atomic mass: 4.002602 +- 0.000002

Atomic number: 2
Group numbers: 18
Period: 1
Standard state (20 oC): gas

Discovery: 1868 Pierre Jules Cesar Janssen (FR); Sir Joseph Norman Lockyer (GB)

Electronic configuration: 1s2
Formal oxidation number: 0
Atomic radius: 128 pm

Electronegativities: -
Thermal conductivity: 0.155 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -272.2 oC
Boiling point: -268.93 oC

Heat of fusion: 0.021 kJ/mol
Heat of vaporization: 0.082 kJ/mol
Heat of atomization: 0 kJ/mol
    )"; 
    break;  

    case 3: cout<<R"(Lithium

Relative atomic mass: 6.941 +- 0.002

Atomic number: 3
Group numbers: 1
Period: 2
Standard state (20 oC): solid

Discovery: 1817 Johan August Arfvedsonn (SE)

Electronic configuration: [He] 2s1
Formal oxidation number: +1
Atomic radius: 152 pm

Electronegativities: 0.98
Thermal conductivity: 84.7 W/(m K)
Electrical resistivity (20 oC): 8.55 microOhm cm

Melting point: 180.5 oC
Boiling point: 1342 oC

Heat of fusion: 4.6 kJ/mol
Heat of vaporization: 147.7 kJ/mol
Heat of atomization: 157.8 kJ/mol
    )";
    break;

    case 4: cout<<R"(Beryllium

Relative atomic mass: 9.012182 +- 0.000003

Atomic number: 4
Group numbers: 2
Period: 2
Standard state (20 oC): solid

Discovery: 1798 Louis-Nicholas Vauquelin (FR)

Electronic configuration: [He] 2s2
Formal oxidation number: +2
Atomic radius: 111.3 pm

Electronegativities: 1.57
Thermal conductivity: 200 W/(m K)
Electrical resistivity (20 oC): 4 microOhm cm

Melting point: 1287 oC
Boiling point: 2471 oC

Heat of fusion: 9.8 kJ/mol
Heat of vaporization: 308.8 kJ/mol
Heat of atomization: 320.3 kJ/mol
    )";
    break;

    case 5: cout<<R"(Boron

Relative atomic mass: 10.811 +- 0.007

Atomic number: 5
Group numbers: 13
Period: 2
Standard state (20 oC): solid

Discovery: 1808 Sir Humphry Davy (GB); Joseph-Louis Gay-Lussac, Louis-Jaques Thenard (FR)

Electronic configuration: [He] 2s2 2p1
Formal oxidation number: +3
Atomic radius: 79.5 pm

Electronegativities: 2.04
Thermal conductivity: 27 W/(m K)
Electrical resistivity (20 oC): 1.8E+12 microOhm cm

Melting point: 2075 oC
Boiling point: 4000 oC

Heat of fusion: 22.2 kJ/mol
Heat of vaporization: 504.5 kJ/mol
Heat of atomization: 557.64 kJ/mol
    )";
    break;

    case 6: cout<<R"(Carbon

Relative atomic mass: 12.0107 +- 0.0008

Atomic number: 6
Group numbers: 14
Period: 2
Standard state (20 oC): solid

Discovery: - -
Carbon has been known since ancient times. The origin of the name comes from the Latin word carbo meaning charcoal. Carbon has three forms: graphite, diamond and c60. Graphite form of carbon is a black, odourless, slippery solid and sublimes at 3825 °C. 

Electronic configuration: [He] 2s2 2p2
Formal oxidation number: -4 +2 +4
Atomic radius: 77.2 pm

Electronegativities: 2.55
Thermal conductivity: 5.7 W/(m K)
Electrical resistivity (20 oC): 1375 microOhm cm

Melting point: 3550 oC
Boiling point: 4827 oC

Heat of fusion: 105 kJ/mol
Heat of vaporization: 710.9 kJ/mol
Heat of atomization: 711.2 kJ/mol
    )";
    break;

    case 7: cout<<R"(Nitrogen

Relative atomic mass: 14.0067 +- 0.0002

Atomic number: 7
Group numbers: 15
Period: 2
Standard state (20 oC): gas

Discovery: 1772 Daniel Rutherford (GB)

Electronic configuration: [He] 2s2 2p3
Formal oxidation number: -3 -2 -1 +1 +2 +3 +4 +5
Atomic radius: 54.9 pm

Electronegativities: 3.04
Thermal conductivity: 0.0258 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -210.00 oC
Boiling point: -195.8 oC

Heat of fusion: 0.72 kJ/mol
Heat of vaporization: 5.577 kJ/mol
Heat of atomization: 470.842 kJ/mol
    )";
    break;

   case 8 : cout<<R"(Oxygen

Relative atomic mass: 15.9994 +- 0.0003

Atomic number: 8
Group numbers: 16
Period: 2
Standard state (20 oC): gas

Discovery: 1772 Carl William Scheele (SE)

Electronic configuration: [He] 2s2 2p4
Formal oxidation number: -2
Atomic radius: 60.4 pm

Electronegativities: 3.44
Thermal conductivity: 0.0263 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -218.7916 oC
Boiling point: -182.95 oC

Heat of fusion: 0.444 kJ/mol
Heat of vaporization: 6.82 kJ/mol
Heat of atomization: 246.785 kJ/mol
   )";
   break;

    case 9 : cout<<R"(Fluorine

Relative atomic mass: 18.9984032 +- 0.0000005

Atomic number: 9
Group numbers: 17
Period: 2
Standard state (20 oC): gas

Discovery: 1886 Henri Moissan (FR)

Electronic configuration: [He] 2s2 2p5
Formal oxidation number: -1
Atomic radius: 70.9 pm

Electronegativities: 3.98
Thermal conductivity: 0.0256 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -219.62 oC
Boiling point: -188.12 oC

Heat of fusion: 1.02 kJ/mol
Heat of vaporization: 3.26 kJ/mol
Heat of atomization: 76.9 kJ/mol
    )";
    break;

    case 10: cout<<R"(Neon

Relative atomic mass: 20.1797 +- 0.0006

Atomic number: 10
Group numbers: 18
Period: 2
Standard state (20 oC): gas

Discovery: 1898 Sir William Ramsay, Morris William Travers (GB)

Electronic configuration: [He] 2s2 2p6
Formal oxidation number: 0
Atomic radius: 154 pm

Electronegativities: -
Thermal conductivity: 0.0491 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -248.59 oC
Boiling point: -246.08 oC

Heat of fusion: 0.324 kJ/mol
Heat of vaporization: 1.736 kJ/mol
Heat of atomization: 0 kJ/mol
    )";
    break;

    case 11: cout<<R"(Sodium

Relative atomic mass: 22.98976928 +- 0.00000002

Atomic number: 11
Group numbers: 1
Period: 3
Standard state (20 oC): solid

Discovery: 1807 Sir Humphry Davy (GB)

Electronic configuration: [Ne] 3s1
Formal oxidation number: +1
Atomic radius: 185.8 pm

Electronegativities: 0.93
Thermal conductivity: 141 W/(m K)
Electrical resistivity (20 oC): 4.2 microOhm cm

Melting point: 97.72 oC
Boiling point: 883 oC

Heat of fusion: 2.64 kJ/mol
Heat of vaporization: 99.2 kJ/mol
Heat of atomization: 107.566 kJ/mol
     )";
     break;

     case 12: cout<<R"(Magnesium

Relative atomic mass: 24.3050 +- 0.0006

Atomic number: 12
Group numbers: 2
Period: 3
Standard state (20 oC): solid

Discovery: 1808 Sir Humphry Davy (GB)

Electronic configuration: [Ne] 3s2
Formal oxidation number: +2
Atomic radius: 159.9 pm

Electronegativities: 1.31
Thermal conductivity: 156 W/(m K)
Electrical resistivity (20 oC): 4.45 microOhm cm

Melting point: 650 oC
Boiling point: 1090 oC

Heat of fusion: 9.04 kJ/mol
Heat of vaporization: 127.6 kJ/mol
Heat of atomization: 146.499 kJ/mol
     )";
     break;

     case 13: cout<<R"(Aluminium

Relative atomic mass: 26.9815386 +- 0.0000008

Atomic number: 13
Group numbers: 13
Period: 3
Standard state (20 oC): solid

Discovery: 1825 Hans Christian Orsted (DK)

Electronic configuration: [Ne] 3s2 3p1
Formal oxidation number: +3
Atomic radius: 143.2 pm

Electronegativities: 1.61
Thermal conductivity: 237 W/(m K)
Electrical resistivity (20 oC): 2.65 microOhm cm

Melting point: 660.32 oC
Boiling point: 2519 oC

Heat of fusion: 10.67 kJ/mol
Heat of vaporization: 290.8 kJ/mol
Heat of atomization: 324.01 kJ/mol
     )";
     break;

     case 14: cout<<R"(Silicon

Relative atomic mass: 28.0855 +- 0.0003

Atomic number: 14
Group numbers: 14
Period: 3
Standard state (20 oC): solid

Discovery: 1824 Jons Jacob Berzelius (SE)

Electronic configuration: [Ne] 3s2 3p2
Formal oxidation number: -4 +2 +4
Atomic radius: 117.6 pm

Electronegativities: 1.9
Thermal conductivity: 148 W/(m K)
Electrical resistivity (20 oC): 10 microOhm cm

Melting point: 1414 oC
Boiling point: 3265 oC

Heat of fusion: 39.6 kJ/mol
Heat of vaporization: 383.3 kJ/mol
Heat of atomization: 451.29 kJ/mol
     )";
     break;

     case 15: cout<<R"(Phosphorus

Relative atomic mass: 30.973762 +- 0.000002

Atomic number: 15
Group numbers: 15
Period: 3
Standard state (20 oC): solid

Discovery: 1669 Hennig Brandt (DE)

Electronic configuration: [Ne] 3s2 3p3
Formal oxidation number: -3 +3 +5
Atomic radius: 110.5 pm

Electronegativities: 2.19
Thermal conductivity: 0.235 W/(m K)
Electrical resistivity (20 oC): 1E+17 microOhm cm

Melting point: 44.15 oC
Boiling point: 280.5 oC

Heat of fusion: 2.51 kJ/mol
Heat of vaporization: 51.9 kJ/mol
Heat of atomization: 314 kJ/mol
     )";
     break;

     case 16: cout<<R"(Sulfur

Relative atomic mass: 32.065 +- 0.005

Atomic number: 16
Group numbers: 16
Period: 3
Standard state (20 oC): solid

Discovery: - -
Sulfur has been known since ancient times. The origin of the name comes from the Sanskrit word sulvere meaning sulfur; also from the Latin word sulphurium meaning sulfur.

Electronic configuration: [Ne] 3s2 3p4
Formal oxidation number: -2 +4 +6
Atomic radius: 103.5 pm

Electronegativities: 2.58
Thermal conductivity: 0.269 W/(m K)
Electrical resistivity (20 oC): 2E+23 microOhm cm

Melting point: 115.21 oC
Boiling point: 444.60 oC

Heat of fusion: 1.7175 kJ/mol
Heat of vaporization: 9.62 kJ/mol
Heat of atomization: 276.6 kJ/mol   

     )";
     break;

     case 17: cout<<R"(Chlorine

Relative atomic mass: 35.453 +- 0.002

Atomic number: 17
Group numbers: 17
Period: 3
Standard state (20 oC): gas

Discovery: 1774 Carl William Scheele (SE)

Electronic configuration: [Ne] 3s2 3p5
Formal oxidation number: -1 +1 +5 +7
Atomic radius: 99.4 pm

Electronegativities: 3.16
Thermal conductivity: 0.0089 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -101.5 oC
Boiling point: -34.04 oC

Heat of fusion: 6.41 kJ/mol
Heat of vaporization: 20.4033 kJ/mol
Heat of atomization: 120 kJ/mol
     )";
     break;

     case 18: cout<<R"(Argon

Relative atomic mass: 39.948 +- 0.001

Atomic number: 18
Group numbers: 18
Period: 3
Standard state (20 oC): gas

Discovery: 1894 Lord Raleigh, Sir William Ramsay (GB)

Electronic configuration: [Ne] 3s2 3p6
Formal oxidation number: 0
Atomic radius: 188 pm

Electronegativities: -
Thermal conductivity: 0.0179 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -189.34 oC
Boiling point: -185.89 oC

Heat of fusion: 1.21 kJ/mol
Heat of vaporization: 6.53 kJ/mol
Heat of atomization: 0 kJ/mol

     )";
     break;

     case 19: cout<<R"(Potassium

Relative atomic mass: 39.0983 +- 0.0001

Atomic number: 19
Group numbers: 1
Period: 4
Standard state (20 oC): solid

Discovery: 1807 Sir Humphry Davy (GB)

Electronic configuration: [Ar] 4s1
Formal oxidation number: +1
Atomic radius: 227.2 pm

Electronegativities: 0.82
Thermal conductivity: 102 W/(m K)
Electrical resistivity (20 oC): 6.15 microOhm cm

Melting point: 63.28 oC
Boiling point: 759 oC

Heat of fusion: 2.4 kJ/mol
Heat of vaporization: 79.1 kJ/mol
Heat of atomization: 90.14 kJ/mol

     )";
     break;

     case 20: cout<<R"(Calcium

Relative atomic mass: 40.078 +- 0.004

Atomic number: 20
Group numbers: 2
Period: 4
Standard state (20 oC): solid

Discovery: 1808 Sir Humphry Davy (GB)

Electronic configuration: [Ar] 4s2
Formal oxidation number: +2
Atomic radius: 197.4 pm

Electronegativities: 1
Thermal conductivity: 190 W/(m K)
Electrical resistivity (20 oC): 3.91 microOhm cm

Melting point: 842 oC
Boiling point: 1484 oC

Heat of fusion: 9.33 kJ/mol
Heat of vaporization: 150.6 kJ/mol
Heat of atomization: 177.74 kJ/mol
     )";
     break;

     case 21: cout<<R"(Scandium

Relative atomic mass: 44.955912 +- 0.000006

Atomic number: 21
Group numbers: 3
Period: 4
Standard state (20 oC): solid

Discovery: 1879 Lars Fredrik Nilson (SE)

Electronic configuration: [Ar] 3d1 4s2
Formal oxidation number: +3
Atomic radius: 160.6 pm

Electronegativities: 1.36
Thermal conductivity: 15.8 W/(m K)
Electrical resistivity (20 oC): 61 microOhm cm

Melting point: 1541 oC
Boiling point: 2836 oC

Heat of fusion: 15.9 kJ/mol
Heat of vaporization: 376.1 kJ/mol
Heat of atomization: 376.02 kJ/mol

     )";
     break;

     case 22: cout<<R"(Titanium

Relative atomic mass: 47.867 +- 0.001

Atomic number: 22
Group numbers: 4
Period: 4
Standard state (20 oC): solid

Discovery: 1791 William Gregor (GB)

Electronic configuration: [Ar] 3d2 4s2
Formal oxidation number: +2 +3 +4
Atomic radius: 144.8 pm

Electronegativities: 1.54
Thermal conductivity: 21.9 W/(m K)
Electrical resistivity (20 oC): 42 microOhm cm

Melting point: 1668 oC
Boiling point: 3287 oC

Heat of fusion: 20.9 kJ/mol
Heat of vaporization: 425.5 kJ/mol
Heat of atomization: 467.14 kJ/mol
     )";
     break;

     case 23: cout<<R"(Vanadium

Relative atomic mass: 50.9415 +- 0.0001

Atomic number: 23
Group numbers: 5
Period: 4
Standard state (20 oC): solid

Discovery: 1801 Andres Manuel del Rio (MX)

Electronic configuration: [Ar] 3d3 4s2
Formal oxidation number: +2 +3 +4 +5
Atomic radius: 131.1 pm

Electronegativities: 1.63
Thermal conductivity: 30.7 W/(m K)
Electrical resistivity (20 oC): 19.68 microOhm cm

Melting point: 1910 oC
Boiling point: 3407 oC

Heat of fusion: 17.6 kJ/mol
Heat of vaporization: 459.7 kJ/mol
Heat of atomization: 510.95 kJ/mol
     )";
     break;

     case 24: cout<<R"(Chromium

Relative atomic mass: 51.9961 +- 0.0006

Atomic number: 24
Group numbers: 6
Period: 4
Standard state (20 oC): solid

Discovery: 1797 Louis-Nicholas Vauquelin (FR)

Electronic configuration: [Ar] 3d5 4s1
Formal oxidation number: +2 +3 +6
Atomic radius: 124.9 pm

Electronegativities: 1.66
Thermal conductivity: 93.7 W/(m K)
Electrical resistivity (20 oC): 12.9 microOhm cm

Melting point: 1907 oC
Boiling point: 2671 oC

Heat of fusion: 15.3 kJ/mol
Heat of vaporization: 341.8 kJ/mol
Heat of atomization: 394.51 kJ/mol
     )";
     break;

     case 25: cout<<R"(Manganese

Relative atomic mass: 54.938045 +- 0.000005

Atomic number: 25
Group numbers: 7
Period: 4
Standard state (20 oC): solid

Discovery: 1774 Johan Gottlieb Gahn (SE)

Electronic configuration: [Ar] 3d5 4s2
Formal oxidation number: +2 +3 +4 +7
Atomic radius: 136.7 pm

Electronegativities: 1.55
Thermal conductivity: 7.82 W/(m K)
Electrical resistivity (20 oC): 144 microOhm cm

Melting point: 1246 oC
Boiling point: 2061 oC

Heat of fusion: 14.4 kJ/mol
Heat of vaporization: 220.5 kJ/mol
Heat of atomization: 279.37 kJ/mol
     )";
     break;

     case 26: cout<<R"(Iron

Relative atomic mass: 55.845 +- 0.002

tomic number: 26
Group numbers: 8
Period: 4
Standard state (20 oC): solid

Discovery: - -
Iron has been known since ancient times. The origin of the name comes from the Latin word ferrum meaning iron. It is a malleable, ferromagnetic, ductile, silvery-white metal. Exposed surfaces form red-brown oxides. Iron forms very strong alloys (steel). 

Electronic configuration: [Ar] 3d6 4s2
Formal oxidation number: +2 +3
Atomic radius: 124.1 pm

Electronegativities: 1.83
Thermal conductivity: 80.2 W/(m K)
Electrical resistivity (20 oC): 9.71 microOhm cm

Melting point: 1538 oC
Boiling point: 2861 oC

Heat of fusion: 14.9 kJ/mol
Heat of vaporization: 340.2 kJ/mol
Heat of atomization: 413.96 kJ/mol
     )";
     break;

     case 27: cout<<R"(Cobalt

Relative atomic mass: 58.933195 +- 0.000005

Atomic number: 27
Group numbers: 9
Period: 4
Standard state (20 oC): solid

Discovery: 1739 Georg Brandt (DE)

Electronic configuration: [Ar] 3d7 4s2
Formal oxidation number: +2 +3
Atomic radius: 125.3 pm

Electronegativities: 1.88
Thermal conductivity: 100 W/(m K)
Electrical resistivity (20 oC): 6.24 microOhm cm

Melting point: 1495 oC
Boiling point: 2927 oC

Heat of fusion: 15.2 kJ/mol
Heat of vaporization: 382.4 kJ/mol
Heat of atomization: 423.082 kJ/mol
     )";
     break;

     case 28: cout<<R"(Nickel

Relative atomic mass: 58.6934 +- 0.0002

Atomic number: 28
Group numbers: 10
Period: 4
Standard state (20 oC): solid

Discovery: 1751 Axel Fredrik Cronstedt (SE)

Electronic configuration: [Ar] 3d8 4s2
Formal oxidation number: +2 +3
Atomic radius: 124.6 pm

Electronegativities: 1.91
Thermal conductivity: 90.7 W/(m K)
Electrical resistivity (20 oC): 6.84 microOhm cm

Melting point: 1455 oC
Boiling point: 2913 oC

Heat of fusion: 17.6 kJ/mol
Heat of vaporization: 374.8 kJ/mol
Heat of atomization: 427.659 kJ/mol

     )";
     break;

     case 29: cout<<R"(Copper

Relative atomic mass: 63.546 +- 0.003

Atomic number: 29
Group numbers: 11
Period: 4
Standard state (20 oC): solid

Discovery: - -
Copper has been known since ancient times. The origin of the name comes from the Latin word cuprum meaning the island of Cyprus famed for its copper mines. It is a malleable, ductile, reddish-brown metal, resistant to air and water. 

Electronic configuration: [Ar] 3d10 4s1
Formal oxidation number: +1 +2
Atomic radius: 127.8 pm

Electronegativities: 1.9
Thermal conductivity: 401 W/(m K)
Electrical resistivity (20 oC): 1.673 microOhm cm

Melting point: 1084.62 oC
Boiling point: 2562 oC

Heat of fusion: 13 kJ/mol
Heat of vaporization: 306.7 kJ/mol
Heat of atomization: 337.15 kJ/mol
     )";
     break;

     case 30: cout<<R"(Zinc

Relative atomic mass: 65.409 +- 0.004

Atomic number: 30
Group numbers: 12
Period: 4
Standard state (20 oC): solid

Discovery: - -
Zinc has been known since ancient times. The origin of the name comes from the German word zink. It is a bluish-silver, ductile metal that reacts with alkalis and acids. Zinc tarnishes in air. Zinc is found in the minerals zinc blende (sphalerite) (ZnS), calamine, franklinite, smithsonite (ZnCO3), willemite and zincite (ZnO). 

Electronic configuration: [Ar] 3d10 4s2
Formal oxidation number: +2
Atomic radius: 133.5 pm

Electronegativities: 1.65
Thermal conductivity: 116 W/(m K)
Electrical resistivity (20 oC): 5.964 microOhm cm

Melting point: 419.53 oC
Boiling point: 907 oC

Heat of fusion: 6.67 kJ/mol
Heat of vaporization: 114.2 kJ/mol
Heat of atomization: 130.181 kJ/mol
     )";
     break;

     case 31: cout<<R"(Gallium

Relative atomic mass: 69.723 +- 0.001

Atomic number: 31
Group numbers: 13
Period: 4
Standard state (20 oC): solid

Discovery: 1875 Paul Emile Lecoq de Boisbaudran (FR)

Electronic configuration: [Ar] 3d10 4s2 4p1
Formal oxidation number: +3
Atomic radius: 122.1 pm

Electronegativities: 1.81
Thermal conductivity: 40.6 W/(m K)
Electrical resistivity (20 oC): 17.4 microOhm cm

Melting point: 29.76 oC
Boiling point: 2204 oC

Heat of fusion: 5.59 kJ/mol
Heat of vaporization: 270.3 kJ/mol
Heat of atomization: 276 kJ/mol
     )";
     break;

     case 32: cout<<R"(Germanium

Relative atomic mass: 72.64 +- 0.01

Atomic number: 32
Group numbers: 14
Period: 4
Standard state (20 oC): solid

Discovery: 1886 Clemens Alexander Winkler (DE)

Electronic configuration: [Ar] 3d10 4s2 4p2
Formal oxidation number: +2 +4
Atomic radius: 122.5 pm

Electronegativities: 2.01
Thermal conductivity: 59.9 W/(m K)
Electrical resistivity (20 oC): 46000000 microOhm cm

Melting point: 938.25 oC
Boiling point: 2833 oC

Heat of fusion: 34.7 kJ/mol
Heat of vaporization: 327.6 kJ/mol
Heat of atomization: 373.8 kJ/mol
     )";
     break;

 case 33:   cout<<R"(Arsenic

Relative atomic mass: 74.92160 +- 0.00002

Atomic number: 33
Group numbers: 15
Period: 4
Standard state (20 oC): solid

Discovery: 1250 Albertus Magnus (DE)

Electronic configuration: [Ar] 3d10 4s2 4p3
Formal oxidation number: -3 +3 +5
Atomic radius: 124.5 pm

Electronegativities: 2.18
Thermal conductivity: 50 W/(m K)
Electrical resistivity (20 oC): 33.3 microOhm cm

Melting point: 817 oC
Boiling point: 614 oC

Heat of fusion: 27.7 kJ/mol
Heat of vaporization: 31.9 kJ/mol
Heat of atomization: 301.42 kJ/mol
     )";
     break;

     case 34: cout<<R"(Selenium

Relative atomic mass: 78.96 +- 0.03

Atomic number: 34
Group numbers: 16
Period: 4
Standard state (20 oC): solid

Discovery: 1817 Jons Jacob Berzelius (SE)

Electronic configuration: [Ar] 3d10 4s2 4p4
Formal oxidation number: -2 +4 +6
Atomic radius: 116 pm

Electronegativities: 2.55
Thermal conductivity: 2.04 W/(m K)
Electrical resistivity (20 oC): 12 microOhm cm

Melting point: 221 oC
Boiling point: 685 oC

Heat of fusion: 5.1 kJ/mol
Heat of vaporization: 90 kJ/mol
Heat of atomization: 226.4 kJ/mol
     )";
     break;

     case 35: cout<<R"(Bromine

Relative atomic mass: 79.904 +- 0.001

Atomic number: 35
Group numbers: 17
Period: 4
Standard state (20 oC): liquid

Discovery: 1826 Antoine-Jerome Balard (FR)

Electronic configuration: [Ar] 3d10 4s2 4p5
Formal oxidation number: -1 +1 +5
Atomic radius: 114.5 pm

Electronegativities: 2.96
Thermal conductivity: 0.0047 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -7.2 oC
Boiling point: 58.78 oC

Heat of fusion: 10.8 kJ/mol
Heat of vaporization: 30.5 kJ/mol
Heat of atomization: 117.943 kJ/mol
     )";
     break;

   case 36: cout<<R"(Krypton

Relative atomic mass: 83.798 +- 0.002

Atomic number: 36
Group numbers: 18
Period: 4
Standard state (20 oC): gas

Discovery: 1898 Sir William Ramsay, Morris William Travers (GB)

Electronic configuration: [Ar] 3d10 4s2 4p6
Formal oxidation number: 0
Atomic radius: 202 pm

Electronegativities: -
Thermal conductivity: 0.0095 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -157.36 oC
Boiling point: -153.22 oC

Heat of fusion: 1.64 kJ/mol
Heat of vaporization: 9.05 kJ/mol
Heat of atomization: 0 kJ/mol
   )";
   break;

  case 37: cout<<R"(Rubidium

Relative atomic mass: 85.4678 +- 0.0003

Atomic number: 37
Group numbers: 1
Period: 5
Standard state (20 oC): solid

Discovery: 1861 Robert Wilhelm Bunsen, Gustav Robert Kirchhoff (DE)

Electronic configuration: [Kr] 5s1
Formal oxidation number: +1
Atomic radius: 247.5 pm

Electronegativities: 0.82
Thermal conductivity: 52.8 W/(m K)
Electrical resistivity (20 oC): 12.5 microOhm cm

Melting point: 39.31 oC
Boiling point: 688 oC

Heat of fusion: 2.2 kJ/mol
Heat of vaporization: 75.7 kJ/mol
Heat of atomization: 82.17 kJ/mol

   )";
   break;

   case 38: cout<<R"(Strontium

Relative atomic mass: 87.62 +- 0.01

Atomic number: 38
Group numbers: 2
Period: 5
Standard state (20 oC): solid

Discovery: 1789 Adair Crawford (GB)

Electronic configuration: [Kr] 5s2
Formal oxidation number: +2
Atomic radius: 215.1 pm

Electronegativities: 0.95
Thermal conductivity: 49 W/(m K)
Electrical resistivity (20 oC): 23 microOhm cm

Melting point: 777 oC
Boiling point: 1382 oC

Heat of fusion: 9.16 kJ/mol
Heat of vaporization: 154.4 kJ/mol
Heat of atomization: 164.4 kJ/mol
   )";
   break;

   case 39: cout<<R"(Yttrium

Relative atomic mass: 88.90585 +- 0.00002

Atomic number: 39
Group numbers: 3
Period: 5
Standard state (20 oC): solid

Discovery: 1794 Johan Gadolin (FI)

Electronic configuration: [Kr] 4d1 5s2
Formal oxidation number: +3
Atomic radius: 177.6 pm

Electronegativities: 1.22
Thermal conductivity: 17.2 W/(m K)
Electrical resistivity (20 oC): 57 microOhm cm

Melting point: 1522 oC
Boiling point: 3345 oC

Heat of fusion: 17.2 kJ/mol
Heat of vaporization: 367.4 kJ/mol
Heat of atomization: 420.45 kJ/mol
   )";
   break;

   case 40: cout<<R"(Zirconium

Relative atomic mass: 91.224 +- 0.002

Atomic number: 40
Group numbers: 4
Period: 5
Standard state (20 oC): solid

Discovery: 1789 Martin Heinrich Klaproth (DE)

Electronic configuration: [Kr] 4d2 5s2
Formal oxidation number: +4
Atomic radius: 159 pm

Electronegativities: 1.33
Thermal conductivity: 22.7 W/(m K)
Electrical resistivity (20 oC): 42.1 microOhm cm

Melting point: 1855 oC
Boiling point: 4409 oC

Heat of fusion: 23 kJ/mol
Heat of vaporization: 566.7 kJ/mol
Heat of atomization: 607.47 kJ/mol

   )";
   break;

   case 41: cout<<R"(Niobium

Relative atomic mass: 92.90638 +- 0.00002

Atomic number: 41
Group numbers: 5
Period: 5
Standard state (20 oC): solid

Discovery: 1801 Charles Hatchett (GB)

Electronic configuration: [Kr] 4d4 5s1
Formal oxidation number: +3 +5
Atomic radius: 142.9 pm

Electronegativities: 1.6
Thermal conductivity: 53.7 W/(m K)
Electrical resistivity (20 oC): 12.5 microOhm cm

Melting point: 2477 oC
Boiling point: 4744 oC

Heat of fusion: 27.2 kJ/mol
Heat of vaporization: 680.19 kJ/mol
Heat of atomization: 722.819 kJ/mol

   )";
   break;

   case 42: cout<<R"(Molybdenum

Relative atomic mass: 95.94 +- 0.02

Atomic number: 42
Group numbers: 6
Period: 5
Standard state (20 oC): solid

Discovery: 1778 Carl Wilhelm Scheele (SE)

Electronic configuration: [Kr] 4d5 5s1
Formal oxidation number: +6
Atomic radius: 136.3 pm

Electronegativities: 2.16
Thermal conductivity: 138 W/(m K)
Electrical resistivity (20 oC): 5.34 microOhm cm

Melting point: 2623 oC
Boiling point: 4639 oC

Heat of fusion: 27.6 kJ/mol
Heat of vaporization: 589.9 kJ/mol
Heat of atomization: 656.55 kJ/mol

   )";
   break;

   case 43: cout<<R"(Technetium

Relative atomic mass: [98]

Atomic number: 43
Group numbers: 7
Period: 5
Standard state (20 oC): solid

Discovery: 1937 Carlo Perrier (IT), Emilio Segre (US)

Electronic configuration: [Kr] 4d6 5s1
Formal oxidation number: +4 +6 +7
Atomic radius: 135.2 pm

Electronegativities: 2.1
Thermal conductivity: 50.6 W/(m K)
Electrical resistivity (20 oC): 16.9 microOhm cm

Melting point: 2157 oC
Boiling point: 4265 oC

Heat of fusion: 23.81 kJ/mol
Heat of vaporization: 585.22 kJ/mol
Heat of atomization: 678 kJ/mol
   )";
   break;

   case 44: cout<<R"(Ruthenium

Relative atomic mass: 101.07 +- 0.02

Atomic number: 44
Group numbers: 8
Period: 5
Standard state (20 oC): solid

Discovery: 1844 Karl Karlovich Klaus (RU)

Electronic configuration: [Kr] 4d7 5s1
Formal oxidation number: +3
Atomic radius: 132.5 pm

Electronegativities: 2.2
Thermal conductivity: 117 W/(m K)
Electrical resistivity (20 oC): 7.6 microOhm cm

Melting point: 2334 oC
Boiling point: 4150 oC

Heat of fusion: 23.7 kJ/mol
Heat of vaporization: 567 kJ/mol
Heat of atomization: 641.031 kJ/mol
   )";
   break;

   case 45: cout<<R"(Rhodium

Relative atomic mass: 102.90550 +- 0.00002

Atomic number: 45
Group numbers: 9
Period: 5
Standard state (20 oC): solid

Discovery: 1803 William Hyde Wollaston (GB)

Electronic configuration: [Kr] 4d8 5s1
Formal oxidation number: +3
Atomic radius: 134.5 pm

Electronegativities: 2.28
Thermal conductivity: 150 W/(m K)
Electrical resistivity (20 oC): 4.51 microOhm cm

Melting point: 1964 oC
Boiling point: 3695 oC

Heat of fusion: 21.55 kJ/mol
Heat of vaporization: 494.34 kJ/mol
Heat of atomization: 555.59 kJ/mol
   )";
   break;

   case 46: cout<<R"(Palladium

Relative atomic mass: 106.42 +- 0.01

Atomic number: 46
Group numbers: 10
Period: 5
Standard state (20 oC): solid

Discovery: 1803 William Hyde Wollaston (GB)

Electronic configuration: [Kr] 4d10
Formal oxidation number: +2 +3
Atomic radius: 137.6 pm

Electronegativities: 2.2
Thermal conductivity: 71.8 W/(m K)
Electrical resistivity (20 oC): 10.8 microOhm cm

Melting point: 1554.9 oC
Boiling point: 2963 oC

Heat of fusion: 17.2 kJ/mol
Heat of vaporization: 361.5 kJ/mol
Heat of atomization: 377.4 kJ/mol
   )";
   break;

   case 47: cout<<R"(Silver

Relative atomic mass: 107.8682 +- 0.0002

Atomic number: 47
Group numbers: 11
Period: 5
Standard state (20 oC): solid

Discovery: - -
Silver has been known since ancient times. The origin of the name comes from the Latin word argentum meaning silver. It is a silvery-ductile and malleable metal, stable in water and oxygen. Silver reacts with sulfur compounds to form black sulfides. 

Electronic configuration: [Kr] 4d10 5s1
Formal oxidation number: +1
Atomic radius: 144.5 pm

Electronegativities: 1.93
Thermal conductivity: 429 W/(m K)
Electrical resistivity (20 oC): 1.59 microOhm cm

Melting point: 961.78 oC
Boiling point: 2162 oC

Heat of fusion: 11.3 kJ/mol
Heat of vaporization: 257.7 kJ/mol
Heat of atomization: 284.09 kJ/mol
   )";
   break;

   case 48: cout<<R"(Cadmium

Relative atomic mass: 112.411 +- 0.008

Atomic number: 48
Group numbers: 12
Period: 5
Standard state (20 oC): solid

Discovery: 1817 Friedrich Strohmeyer (DE)

Electronic configuration: [Kr] 4d10 5s2
Formal oxidation number: +2
Atomic radius: 148.9 pm

Electronegativities: 1.69
Thermal conductivity: 96.8 W/(m K)
Electrical resistivity (20 oC): 6.83 microOhm cm

Melting point: 312.07 oC
Boiling point: 767 oC

Heat of fusion: 6.11 kJ/mol
Heat of vaporization: 100 kJ/mol
Heat of atomization: 112.05 kJ/mol

   )";
   break;

   case 49: cout<<R"(Indium

Relative atomic mass: 114.818 +- 0.003

Atomic number: 49
Group numbers: 13
Period: 5
Standard state (20 oC): solid

Discovery: 1863 Ferdinand Reich, Hieronymus Theodor Richter (DE)

Electronic configuration: [Kr] 4d10 5s2 5p1
Formal oxidation number: +3
Atomic radius: 162.6 pm

Electronegativities: 1.78
Thermal conductivity: 81.6 W/(m K)
Electrical resistivity (20 oC): 8.37 microOhm cm

Melting point: 156.6 oC
Boiling point: 2072 oC

Heat of fusion: 3.27 kJ/mol
Heat of vaporization: 231.8 kJ/mol
Heat of atomization: 243.72 kJ/mol
   )";
   break;

   case 50: cout<<R"(Tin

Relative atomic mass: 118.710 +- 0.007

Atomic number: 50
Group numbers: 14
Period: 5
Standard state (20 oC): solid

Discovery: - -
Tin has been known since ancient times. The origin of the name comes from the Latin word stannum meaning tin. It is a silvery-white, soft, malleable and ductile metal that ressist oxygen and water but dissolves in acids and bases.

Electronic configuration: [Kr] 4d10 5s2 5p2
Formal oxidation number: +2 +4
Atomic radius: 140.5 pm

Electronegativities: 1.96
Thermal conductivity: 66.6 W/(m K)
Electrical resistivity (20 oC): 11 microOhm cm

Melting point: 231.928 oC
Boiling point: 2602 oC

Heat of fusion: 7.2 kJ/mol
Heat of vaporization: 296.2 kJ/mol
Heat of atomization: 302 kJ/mol

   )";
   break;

   case 51: cout<<R"(Antimony

Relative atomic mass: 121.760 +- 0.001

Atomic number: 51
Group numbers: 15
Period: 5
Standard state (20 oC): solid

Discovery: - -
Antimony has been known since ancient times. The origin of the name comes from the Latin word stibium meaning mineral stibnite. It is a hard, brittle, silvery-white semimetal that is stable in dry air. It is toxic by ingestion or inhalation.

Electronic configuration: [Kr] 4d10 5s2 5p3
Formal oxidation number: -3 +3 +5
Atomic radius: 145 pm

Electronegativities: 2.05
Thermal conductivity: 24.3 W/(m K)
Electrical resistivity (20 oC): 39 microOhm cm

Melting point: 630.63 oC
Boiling point: 1587 oC

Heat of fusion: 20.9 kJ/mol
Heat of vaporization: 165.8 kJ/mol
Heat of atomization: 262.04 kJ/mol
   )";
   break;

   case 52: cout<<R"(Tellurium

Relative atomic mass: 127.60 +- 0.03

Atomic number: 52
Group numbers: 16
Period: 5
Standard state (20 oC): solid

Discovery: 1782 Franz Joseph Muller von Reichstein (AT)

Electronic configuration: [Kr] 4d10 5s2 5p4
Formal oxidation number: -2 +4 +6
Atomic radius: 143.2 pm

Electronegativities: 2.1
Thermal conductivity: 2.35 W/(m K)
Electrical resistivity (20 oC): 436000 microOhm cm

Melting point: 449.51 oC
Boiling point: 988 oC

Heat of fusion: 13.5 kJ/mol
Heat of vaporization: 104.6 kJ/mol
Heat of atomization: - kJ/mol

   )";
   break;

   case 53: cout<<R"(Iodine

Relative atomic mass: 126.90447 +- 0.00003

Atomic number: 53
Group numbers: 17
Period: 5
Standard state (20 oC): solid

Discovery: 1811 Bernard Courtois (FR)

Electronic configuration: [Kr] 4d10 5s2 5p5
Formal oxidation number: -1 +1 +5 +7
Atomic radius: 133.1 pm

Electronegativities: 2.66
Thermal conductivity: 0.449 W/(m K)
Electrical resistivity (20 oC): 1.3E+15 microOhm cm

Melting point: 113.7 oC
Boiling point: 184.4 oC

Heat of fusion: 15.27 kJ/mol
Heat of vaporization: 41.67 kJ/mol
Heat of atomization: 107.24 kJ/mol
   )";
   break;

   case 54: cout<<R"(Xenon

Relative atomic mass: 131.293 +- 0.006


Atomic number: 54
Group numbers: 18
Period: 5
Standard state (20 oC): gas

Discovery: 1898 Sir William Ramsay, Morris William Travers (GB)

Electronic configuration: [Kr] 4d10 5s2 5p6
Formal oxidation number: 0
Atomic radius: 216 pm

Electronegativities: 2.6
Thermal conductivity: 0.0056 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -111.75 oC
Boiling point: -108.0 oC

Heat of fusion: 3.1 kJ/mol
Heat of vaporization: 12.65 kJ/mol
Heat of atomization: 0 kJ/mol
   )";
   break;

   case 55: cout<<R"(Caseium

Relative atomic mass: 132.9054519 +- 0.0000002

Atomic number: 55
Group numbers: 1
Period: 6
Standard state (20 oC): solid

Discovery: 1860 Robert Wilhelm Bunsen, Gustav Robert Kirchhoff (DE)

Electronic configuration: [Xe] 6s1
Formal oxidation number: +1
Atomic radius: 265.5 pm

Electronegativities: 0.79
Thermal conductivity: 35.9 W/(m K)
Electrical resistivity (20 oC): 20 microOhm cm

Melting point: 28.44 oC
Boiling point: 671 oC

Heat of fusion: 2.09 kJ/mol
Heat of vaporization: 66.5 kJ/mol
Heat of atomization: 77.58 kJ/mol
   )";
   break;

   case 56: cout<<R"(Barium

Relative atomic mass: 137.327 +- 0.007

Atomic number: 56
Group numbers: 2
Period: 6
Standard state (20 oC): solid

Discovery: 1808 Sir Humphry Davy (GB)

Electronic configuration: [Xe] 6s2
Formal oxidation number: +2
Atomic radius: 217.4 pm

Electronegativities: 0.89
Thermal conductivity: 18.4 W/(m K)
Electrical resistivity (20 oC): 50 microOhm cm

Melting point: 727 oC
Boiling point: 1897 oC

Heat of fusion: 7.66 kJ/mol
Heat of vaporization: 150.9 kJ/mol
Heat of atomization: 180.7 kJ/mol

   )";
   break;

   case 57: cout<<R"(Lanthanum

Relative atomic mass: 138.90547 +- 0.00007

Atomic number: 57
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1839 Carl Gustaf Mosander (SE)

Electronic configuration: [Xe] 5d1 6s2
Formal oxidation number: +3
Atomic radius: 187 pm

Electronegativities: 1.1
Thermal conductivity: 13.5 W/(m K)
Electrical resistivity (20 oC): 57 microOhm cm

Melting point: 918 oC
Boiling point: 3464 oC

Heat of fusion: 10.04 kJ/mol
Heat of vaporization: 402.1 kJ/mol
Heat of atomization: 431.29 kJ/mol
   )";
   break;

   case 58: cout<<R"(Cerium

Relative atomic mass: 140.116 +- 0.001

Atomic number: 58
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1803 Jons Jakob Berzelius, Wilhelm Hisinger (SE); Martin Heinrich Klaproth (DE)

Electronic configuration: [Xe] 4f2 6s2
Formal oxidation number: +3 +4
Atomic radius: 182.5 pm

Electronegativities: 1.12
Thermal conductivity: 11.4 W/(m K)
Electrical resistivity (20 oC): 75 microOhm cm

Melting point: 798 oC
Boiling point: 3443 oC

Heat of fusion: 8.87 kJ/mol
Heat of vaporization: 398 kJ/mol
Heat of atomization: 423.4 kJ/mol

   )";
   break;

   case 59: cout<<R"(Praseodymium

Relative atomic mass: 140.90765 +- 0.00002

Atomic number: 59
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1885 Carl Freiherr Auer von Welsbach (AT)

Electronic configuration: [Xe] 4f3 6s2
Formal oxidation number: +3
Atomic radius: 182 pm

Electronegativities: 1.13
Thermal conductivity: 12.5 W/(m K)
Electrical resistivity (20 oC): 68 microOhm cm

Melting point: 931 oC
Boiling point: 3520 oC

Heat of fusion: 11.3 kJ/mol
Heat of vaporization: 357 kJ/mol
Heat of atomization: 356.69 kJ/mol
   )";
   break;

   case 60: cout<<R"(Neodymium

Relative atomic mass: 144.242 +- 0.003

Atomic number: 60
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1885 Carl Freiherr Auer von Welsbach (AT)

Electronic configuration: [Xe] 4f4 6s2
Formal oxidation number: +3
Atomic radius: 181.4 pm

Electronegativities: 1.14
Thermal conductivity: 16.5 W/(m K)
Electrical resistivity (20 oC): 64 microOhm cm

Melting point: 1021 oC
Boiling point: 3074 oC

Heat of fusion: 7.113 kJ/mol
Heat of vaporization: 328 kJ/mol
Heat of atomization: 328.57 kJ/mol
   )";
   break;

   case 61: cout<<R"(Promethium

Relative atomic mass: [145]

Atomic number: 61
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1947 Jacob Akiba Marinsky, Lawrence Elgin Glendenin, Charles DuBois Coryell (US)

Electronic configuration: [Xe] 4f5 6s2
Formal oxidation number: +3
Atomic radius: 183.4 pm

Electronegativities: -
Thermal conductivity: 17.9 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 1042 oC
Boiling point: 3000 oC

Heat of fusion: 12.6 kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 308 kJ/mol

   )";
   break;

   case 62: cout<<R"(Samarium

Relative atomic mass: 150.36 +- 0.02

Atomic number: 62
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1879 Paul-Emile Lecoq de Boisbaudran (FR)

Electronic configuration: [Xe] 4f6 6s2
Formal oxidation number: +2 +3
Atomic radius: 180.4 pm

Electronegativities: 1.17
Thermal conductivity: 13.3 W/(m K)
Electrical resistivity (20 oC): 88 microOhm cm

Melting point: 1074 oC
Boiling point: 1794 oC

Heat of fusion: 10.9 kJ/mol
Heat of vaporization: 164.8 kJ/mol
Heat of atomization: 206.1 kJ/mol
   )";
   break;

   case 63: cout<<R"(Europium

Relative atomic mass: 151.964 +- 0.001

Atomic number: 63
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1896 Eugene-Anatole Demarcay (FR)

Electronic configuration: [Xe] 4f7 6s2
Formal oxidation number: +2 +3
Atomic radius: 199.5 pm

Electronegativities: -
Thermal conductivity: 13.9 W/(m K)
Electrical resistivity (20 oC): 90 microOhm cm

Melting point: 822 oC
Boiling point: 1529 oC

Heat of fusion: 10.5 kJ/mol
Heat of vaporization: 176 kJ/mol
Heat of atomization: 177.11 kJ/mol
   )";
   break;

   case 64: cout<<R"(Gadolinium

Relative atomic mass: 157.25 +- 0.03

Atomic number: 64
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1880 Jean Charles Galissard de Marignac (CH)

Electronic configuration: [Xe] 4f7 5d1 6s2
Formal oxidation number: +3
Atomic radius: 178.7 pm

Electronegativities: 1.2
Thermal conductivity: 10.6 W/(m K)
Electrical resistivity (20 oC): 140.5 microOhm cm

Melting point: 1313 oC
Boiling point: 3273 oC

Heat of fusion: 15.5 kJ/mol
Heat of vaporization: 301 kJ/mol
Heat of atomization: 398.94 kJ/mol

   )";
   break;

   case 65: cout<<R"(Terbium

Relative atomic mass: 158.92535 +- 0.00002

Atomic number: 65
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1843 Carl Gustav Mosander (SE)

Electronic configuration: [Xe] 4f9 6s2
Formal oxidation number: +3
Atomic radius: 176.3 pm

Electronegativities: -
Thermal conductivity: 11.1 W/(m K)
Electrical resistivity (20 oC): 116 microOhm cm

Melting point: 1356 oC
Boiling point: 3230 oC

Heat of fusion: 16.3 kJ/mol
Heat of vaporization: 391 kJ/mol
Heat of atomization: 390.62 kJ/mol
   )";
   break;

   case 66: cout<<R"(Dysprosium

Relative atomic mass: 162.500 +- 0.001

Atomic number: 66
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1886 Paul-Emile Lecoq de Boisbaudran (FR)

Electronic configuration: [Xe] 4f10 6s2
Formal oxidation number: +3
Atomic radius: 175.2 pm

Electronegativities: 1.22
Thermal conductivity: 10.7 W/(m K)
Electrical resistivity (20 oC): 57 microOhm cm

Melting point: 1412 oC
Boiling point: 2567 oC

Heat of fusion: 17.2 kJ/mol
Heat of vaporization: 293 kJ/mol
Heat of atomization: 293.05 kJ/mol

   )";
   break;

   case 67: cout<<R"(Holmium

Relative atomic mass: 164.93032 +- 0.00002

Atomic number: 67
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1879 Per Theodor Cleve (SE)

Electronic configuration: [Xe] 4f11 6s2
Formal oxidation number: +3
Atomic radius: 174.3 pm

Electronegativities: 1.23
Thermal conductivity: 16.2 W/(m K)
Electrical resistivity (20 oC): 87 microOhm cm

Melting point: 1474 oC
Boiling point: 2700 oC

Heat of fusion: 17.2 kJ/mol
Heat of vaporization: 303 kJ/mol
Heat of atomization: 302.63 kJ/mol
   )";
   break;

   case 68: cout<<R"(Erbium

Relative atomic mass: 167.259 +- 0.003

Atomic number: 68
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1843 Carl Gustav Mosander (SE)

Electronic configuration: [Xe] 4f12 6s2
Formal oxidation number: +3
Atomic radius: 173.4 pm

Electronegativities: 1.24
Thermal conductivity: 14.3 W/(m K)
Electrical resistivity (20 oC): 107 microOhm cm

Melting point: 1529 oC
Boiling point: 2868 oC

Heat of fusion: 17.2 kJ/mol
Heat of vaporization: 280 kJ/mol
Heat of atomization: 318.32 kJ/mol
   )";
   break;

   case 69: cout<<R"(Thulium

Relative atomic mass: 168.93421 +- 0.00002

Atomic number: 69
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1879 Per Theodor Cleve (SE)

Electronic configuration: [Xe] 4f13 6s2
Formal oxidation number: +3
Atomic radius: 172.4 pm

Electronegativities: 1.25
Thermal conductivity: 16.8 W/(m K)
Electrical resistivity (20 oC): 79 microOhm cm

Melting point: 1545 oC
Boiling point: 1950 oC

Heat of fusion: 18.4 kJ/mol
Heat of vaporization: 247 kJ/mol
Heat of atomization: 233.43 kJ/mol
   )";
   break;

   case 70: cout<<R"(Ytterbium

Relative atomic mass: 173.04 +- 0.03

Atomic number: 70
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1878 Jean Charles Galinard de Marignac (CH)

Electronic configuration: [Xe] 4f14 6s2
Formal oxidation number: +2 +3
Atomic radius: 194 pm

Electronegativities: -
Thermal conductivity: 34.9 W/(m K)
Electrical resistivity (20 oC): 29 microOhm cm

Melting point: 819 oC
Boiling point: 1196 oC

Heat of fusion: 9.2 kJ/mol
Heat of vaporization: 159 kJ/mol
Heat of atomization: 152.8 kJ/mol
   )";
   break;


   case 71: cout<<R"(Lutetium

Relative atomic mass: 174.967 +- 0.001

Atomic number: 71
Group numbers: 3
Period: 6
Standard state (20 oC): solid

Discovery: 1907 Georges Urbain (FR); Carl Freiherr Auer von Welsbach (AT)

Electronic configuration: [Xe] 4f14 5d1 6s2
Formal oxidation number: +3
Atomic radius: 171.8 pm

Electronegativities: 1
Thermal conductivity: 16.4 W/(m K)
Electrical resistivity (20 oC): 79 microOhm cm

Melting point: 1663 oC
Boiling point: 3402 oC

Heat of fusion: 19.2 kJ/mol
Heat of vaporization: 428 kJ/mol
Heat of atomization: 427.37 kJ/mol
   )";
   break;

   case 72: cout<<R"(Hafnium

Relative atomic mass: 178.49 +- 0.02

Atomic number: 72
Group numbers: 4
Period: 6
Standard state (20 oC): solid

Discovery: 1923 Dirk Coster (NL), George Charles von Hevesy (HU)

Electronic configuration: [Xe] 4f14 5d2 6s2
Formal oxidation number: +4
Atomic radius: 156.4 pm

Electronegativities: 1.3
Thermal conductivity: 23 W/(m K)
Electrical resistivity (20 oC): 33.08 microOhm cm

Melting point: 2233 oC
Boiling point: 4603 oC

Heat of fusion: 25.5 kJ/mol
Heat of vaporization: 570.7 kJ/mol
Heat of atomization: 618.9 kJ/mol
   )";
   break;

   case 73: cout<<R"(Tantalum

Relative atomic mass: 180.94788 +- 0.00002

Atomic number: 73
Group numbers: 5
Period: 6
Standard state (20 oC): solid

Discovery: 1802 Anders Gustaf Ekeberg (SE)

Electronic configuration: [Xe] 4f14 5d3 6s2
Formal oxidation number: +5
Atomic radius: 143 pm

Electronegativities: 1.5
Thermal conductivity: 57.5 W/(m K)
Electrical resistivity (20 oC): 13.15 microOhm cm

Melting point: 3017 oC
Boiling point: 5458 oC

Heat of fusion: 31.4 kJ/mol
Heat of vaporization: 758.22 kJ/mol
Heat of atomization: 781.425 kJ/mol
   )";
   break;

   case 74: cout<<R"(Tungsten

Relative atomic mass: 183.84 +- 0.01

Atomic number: 74
Group numbers: 6
Period: 6
Standard state (20 oC): solid

Discovery: 1783 Fausto Elhuyar, Juan Jose de Elhuyar (ES)

Electronic configuration: [Xe] 4f14 5d4 6s2
Formal oxidation number: +6
Atomic radius: 137 pm

Electronegativities: 1.7
Thermal conductivity: 174 W/(m K)
Electrical resistivity (20 oC): 5.4 microOhm cm

Melting point: 3422 oC
Boiling point: 5555 oC

Heat of fusion: 35.2 kJ/mol
Heat of vaporization: 824.2 kJ/mol
Heat of atomization: 848.1 kJ/mol
   )";
   break;

   case 75: cout<<R"(Rhenium

Relative atomic mass: 186.207 +- 0.001

Atomic number: 75
Group numbers: 7
Period: 6
Standard state (20 oC): solid

Discovery: 1925 Walter Noddack, Ida Tacke-Noddack, Otto Berg (DE)

Electronic configuration: [Xe] 4f14 5d5 6s2
Formal oxidation number: +4 +6 +7
Atomic radius: 137.1 pm

Electronegativities: 1.9
Thermal conductivity: 47.9 W/(m K)
Electrical resistivity (20 oC): 19.3 microOhm cm

Melting point: 3186 oC
Boiling point: 5596 oC

Heat of fusion: 33.1 kJ/mol
Heat of vaporization: 704.25 kJ/mol
Heat of atomization: 769 kJ/mol
   )";
   break;

   case 76: cout<<R"(Osmium

Relative atomic mass: 190.23 +- 0.03

Atomic number: 76
Group numbers: 8
Period: 6
Standard state (20 oC): solid

Discovery: 1803 Smithson Tennant (GB)

Electronic configuration: [Xe] 4f14 5d6 6s2
Formal oxidation number: +3 +4
Atomic radius: 133.8 pm

Electronegativities: 2.2
Thermal conductivity: 87.6 W/(m K)
Electrical resistivity (20 oC): 9.5 microOhm cm

Melting point: 3033 oC
Boiling point: 5012 oC

Heat of fusion: 29.3 kJ/mol
Heat of vaporization: 738.06 kJ/mol
Heat of atomization: 791 kJ/mol
   )";
   break;

   case 77: cout<<R"(Iridium

Relative atomic mass: 192.217 +- 0.003

Atomic number: 77
Group numbers: 9
Period: 6
Standard state (20 oC): solid

Discovery: 1803 Smithson Tennant (GB)

Electronic configuration: [Xe] 4f14 5d7 6s2
Formal oxidation number: +3 +4
Atomic radius: 135.7 pm

Electronegativities: 2.2
Thermal conductivity: 147 W/(m K)
Electrical resistivity (20 oC): 5.3 microOhm cm

Melting point: 2446 oC
Boiling point: 4428 oC

Heat of fusion: 26.4 kJ/mol
Heat of vaporization: 612.1 kJ/mol
Heat of atomization: 664.34 kJ/mol
   )";
   break;

   case 78: cout<<R"(Platinum

Relative atomic mass: 195.084 +- 0.009

Atomic number: 78
Group numbers: 10
Period: 6
Standard state (20 oC): solid

Discovery: 1557 Julius Caesar Scaliger (IT)

Electronic configuration: [Xe] 4f14 5d9 6s1
Formal oxidation number: +2 +4
Atomic radius: 137.3 pm

Electronegativities: 2.2
Thermal conductivity: 71.6 W/(m K)
Electrical resistivity (20 oC): 10.6 microOhm cm

Melting point: 1768.4 oC
Boiling point: 3825 oC

Heat of fusion: 19.7 kJ/mol
Heat of vaporization: 469 kJ/mol
Heat of atomization: 564.42 kJ/mol
   )";
   break;

   case 79: cout<<R"(Gold

Relative atomic mass: 196.966569 +- 0.000004

Atomic number: 79
Group numbers: 11
Period: 6
Standard state (20 oC): solid

Discovery: - -
Gold has been known since ancient times. The origin of the name comes from the Latin word aurum meaning gold. It is a soft, malleable, bright yellow metal that is unaffected by air, water, alkalis and most acids. 

Electronic configuration: [Xe] 4f14 5d10 6s1
Formal oxidation number: +1 +3
Atomic radius: 144.2 pm

Electronegativities: 2.4
Thermal conductivity: 317 W/(m K)
Electrical resistivity (20 oC): 2.35 microOhm cm

Melting point: 1064.18 oC
Boiling point: 2856 oC

Heat of fusion: 12.7 kJ/mol
Heat of vaporization: 343.1 kJ/mol
Heat of atomization: 365.93 kJ/mol

   )";
   break;

   case 80: cout<<R"(Mercury

Relative atomic mass: 200.59 +- 0.02

Atomic number: 80
Group numbers: 12
Period: 6
Standard state (20 oC): liquid

Discovery: - -
Mercury has been known since ancient times. The origin of the name comes from the Latin word hydrargyrum meaning liquid silver. It is a heavy, silver-white metal, liquid at ordinary temperatures, stable in air and water.

Electronic configuration: [Xe] 4f14 5d10 6s2
Formal oxidation number: +1 +2
Atomic radius: 150.3 pm

Electronegativities: 1.9
Thermal conductivity: 8.34 W/(m K)
Electrical resistivity (20 oC): 95.8 microOhm cm

Melting point: -38.83 oC
Boiling point: 356.73 oC

Heat of fusion: 2.331 kJ/mol
Heat of vaporization: 59.11 kJ/mol
Heat of atomization: 64.463 kJ/mol
   )";
   break;

   case 81: cout<<R"(Thallium

Relative atomic mass: 204.3833 +- 0.0002

Atomic number: 81
Group numbers: 13
Period: 6
Standard state (20 oC): solid

Discovery: 1861 Sir William Crookes (GB)

Electronic configuration: [Xe] 4f14 5d10 6s2 6p1
Formal oxidation number: +1 +3
Atomic radius: 170 pm

Electronegativities: 1.8
Thermal conductivity: 46.1 W/(m K)
Electrical resistivity (20 oC): 18 microOhm cm

Melting point: 304 oC
Boiling point: 1473 oC

Heat of fusion: 4.31 kJ/mol
Heat of vaporization: 166.1 kJ/mol
Heat of atomization: 182.845 kJ/mol
   )";
   break;

   case 82: cout<<R"(Lead

Relative atomic mass: 207.2 +- 0.1

Atomic number: 82
Group numbers: 14
Period: 6
Standard state (20 oC): solid

Discovery: - -
Lead has been known since ancient times. The origin of the name comes from the Latin word plumbum meaning liquid silver. It is a very soft, highly malleable and ductile, blue-white shiny metal that tarnishes in moist air but is stable in oxygen and water.

Electronic configuration: [Xe] 4f14 5d10 6s2 6p2
Formal oxidation number: +2 +4
Atomic radius: 175 pm

Electronegativities: 1.8
Thermal conductivity: 35.3 W/(m K)
Electrical resistivity (20 oC): 20.648 microOhm cm

Melting point: 327.46 oC
Boiling point: 1749 oC

Heat of fusion: 5.121 kJ/mol
Heat of vaporization: 177.8 kJ/mol
Heat of atomization: 195.74 kJ/mol
   )";
   break;

   case 83: cout<<R"(Bismuth

Relative atomic mass: 208.98040 +- 0.00001

Atomic number: 83
Group numbers: 15
Period: 6
Standard state (20 oC): solid

Discovery: 1450 Basil Valentine (DE)

Electronic configuration: [Xe] 4f14 5d10 6s2 6p3
Formal oxidation number: +3 +5
Atomic radius: 154.5 pm

Electronegativities: 1.9
Thermal conductivity: 7.87 W/(m K)
Electrical resistivity (20 oC): 106.8 microOhm cm

Melting point: 271.4 oC
Boiling point: 1564 oC

Heat of fusion: 10.48 kJ/mol
Heat of vaporization: 179.1 kJ/mol
Heat of atomization: 207.36 kJ/mol
   )";
   break;

   case 84: cout<<R"(Polonium

Relative atomic mass: [209]

Atomic number: 84
Group numbers: 16
Period: 6
Standard state (20 oC): solid

Discovery: 1898 Marie Sklodowska Curie, Pierre Curie (FR)

Electronic configuration: [Xe] 4f14 5d10 6s2 6p4
Formal oxidation number: +2 +4
Atomic radius: 167.3 pm

Electronegativities: 2
Thermal conductivity: 20 W/(m K)
Electrical resistivity (20 oC): 140 microOhm cm

Melting point: 254 oC
Boiling point: 962 oC

Heat of fusion: 10 kJ/mol
Heat of vaporization: 100.8 kJ/mol
Heat of atomization: 141 kJ/mol
   )";
   break;

   case 85: cout<<R"(Astatine

Relative atomic mass: [210]

Atomic number: 85
Group numbers: 17
Period: 6
Standard state (20 oC): solid

Discovery: 1940 Emilio Segre, Dale Raymond Corson, Kenneth Ross Mackenzie (US)

Electronic configuration: [Xe] 4f14 5d10 6s2 6p5
Formal oxidation number: 
Atomic radius: 145 pm

Electronegativities: 2.2
Thermal conductivity: 1.7 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 302 oC
Boiling point: 337 oC

Heat of fusion: 23.8 kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 91 kJ/mol
   )";
   break;

   case 86: cout<<R"(Radon

Relative atomic mass: [222]

Atomic number: 86
Group numbers: 18
Period: 6
Standard state (20 oC): gas

Discovery: 1899 Robert Bowie Owens, Ernest Rutherford (GB)

Electronic configuration: [Xe] 4f14 5d10 6s2 6p6
Formal oxidation number: 0
Atomic radius: 240 pm

Electronegativities: -
Thermal conductivity: 0.0036 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: -71 oC
Boiling point: -61.7 oC

Heat of fusion: 2.7 kJ/mol
Heat of vaporization: 18.1 kJ/mol
Heat of atomization: 0 kJ/mol
   )";
   break;

   case 87: cout<<R"(Francium

Relative atomic mass: [223]

Atomic number: 87
Group numbers: 1
Period: 7
Standard state (20 oC): solid

Discovery: 1939 Marguerite Perey (FR)

Electronic configuration: [Rn] 7s1
Formal oxidation number: +1
Atomic radius: 282 pm

Electronegativities: 0.7
Thermal conductivity: 15 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 27 oC
Boiling point: 677 oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 75 kJ/mol
   )";
   break;

   case 88: cout<<R"(Radium

Relative atomic mass: [226]

Atomic number: 88
Group numbers: 2
Period: 7
Standard state (20 oC): solid

Discovery: 1898 Marie Sklodowska Curie, Perre Curie (FR)

Electronic configuration: [Rn] 7s2
Formal oxidation number: +2
Atomic radius: 235 pm

Electronegativities: 0.9
Thermal conductivity: 18.6 W/(m K)
Electrical resistivity (20 oC): 100 microOhm cm

Melting point: 700 oC
Boiling point: 1140 oC

Heat of fusion: 7.15 kJ/mol
Heat of vaporization: 136.7 kJ/mol
Heat of atomization: 159 kJ/mol

   )";
   break;

   case 89: cout<<R"(Actinium

Relative atomic mass: [227]

Atomic number: 89
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1899 Andre-Louis Debierne (FR)

Electronic configuration: [Rn] 6d1 7s2
Formal oxidation number: +3
Atomic radius: 188 pm

Electronegativities: 1.1
Thermal conductivity: 12 W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 1051 oC
Boiling point: 3198 oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 406 kJ/mol
   )";
   break;

   case 90: cout<<R"(Thorium

Relative atomic mass: 232.03806 +- 0.00002

Atomic number: 90
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1828 Jons Jacob Berzelius (SE)

Electronic configuration: [Rn] 6d2 7s2
Formal oxidation number: +4
Atomic radius: 179.8 pm

Electronegativities: 1.3
Thermal conductivity: 54 W/(m K)
Electrical resistivity (20 oC): 13 microOhm cm

Melting point: 1750 oC
Boiling point: 4788 oC

Heat of fusion: 19.2 kJ/mol
Heat of vaporization: 513.67 kJ/mol
Heat of atomization: 598.65 kJ/mol

   )";
   break;

   case 91: cout<<R"(Protactinium

Relative atomic mass: 231.03588 +- 0.00002

Atomic number: 91
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1913 Kasimir Fajans, Otto H. Gohring (DE)

Electronic configuration: [Rn] 5f2 6d1 7s2
Formal oxidation number: +4 +5
Atomic radius: 156.1 pm

Electronegativities: 1.5
Thermal conductivity: 47 W/(m K)
Electrical resistivity (20 oC): 19.1 microOhm cm

Melting point: 1572 oC
Boiling point: - oC

Heat of fusion: 16.7 kJ/mol
Heat of vaporization: 481 kJ/mol
Heat of atomization: 607 kJ/mol
   )";
   break;

   case 92: cout<<R"(Uranium

Relative atomic mass: 238.02891 +- 0.00003

Atomic number: 92
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1789 Martin Heinrich Klaproth (DE)

Electronic configuration: [Rn] 5f3 6d1 7s2
Formal oxidation number: +3 +4 +5 +6
Atomic radius: 138.5 pm

Electronegativities: 1.7
Thermal conductivity: 27.6 W/(m K)
Electrical resistivity (20 oC): 30 microOhm cm

Melting point: 1135 oC
Boiling point: 4131 oC

Heat of fusion: 15.5 kJ/mol
Heat of vaporization: 417.1 kJ/mol
Heat of atomization: 535.43 kJ/mol

   )";

   case 93: cout<<R"(Neptunium

Relative atomic mass: [237]

Atomic number: 93
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1940 Edwin Mattison McMillan, Philip Hauge Abelson (US)

Electronic configuration: [Rn] 5f4 6d1 7s2
Formal oxidation number: +3 +4 +5 +6
Atomic radius: 130 pm

Electronegativities: 1.3
Thermal conductivity: 6.3 W/(m K)
Electrical resistivity (20 oC): 122 microOhm cm

Melting point: 644 oC
Boiling point: 3902 oC

Heat of fusion: 9.46 kJ/mol
Heat of vaporization: 336.6 kJ/mol
Heat of atomization: 457 kJ/mol
   )";
   break;

   case 94: cout<<R"(Plutonium

Relative atomic mass: [244]

Atomic number: 94
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1940 Glenn Theodore Seaborg, Joseph W. Kennedy, Arthur C. Wahl (US)

Electronic configuration: [Rn] 5f6 7s2
Formal oxidation number: +3 +4 +5 +6
Atomic radius: 151.3 pm

Electronegativities: 1.3
Thermal conductivity: 6.74 W/(m K)
Electrical resistivity (20 oC): 150 microOhm cm

Melting point: 640 oC
Boiling point: 3228 oC

Heat of fusion: 2.8 kJ/mol
Heat of vaporization: 343.5 kJ/mol
Heat of atomization: 348 kJ/mol
   )";
   break;

   case 95: cout<<R"(Americium

Relative atomic mass: [243]

Atomic number: 95
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1944 Glenn T. Seaborg, Ralph A. James, Leon O. Morgan, Albert Ghiorso (US)

Electronic configuration: [Rn] 5f7 7s2
Formal oxidation number: +3 +4 +5 +6
Atomic radius: 173 pm

Electronegativities: -
Thermal conductivity: 10 W/(m K)
Electrical resistivity (20 oC): 68 microOhm cm

Melting point: 1176 oC
Boiling point: 2011 oC

Heat of fusion: 14.4 kJ/mol
Heat of vaporization: 238.5 kJ/mol
Heat of atomization: 266 kJ/mol
   )";
   break;

   case 96: cout<<R"(Curium

Relative atomic mass: [247]

Atomic number: 96
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1944 Glenn T. Seaborg, Ralph A. James, Albert Ghiorso (US)

Electronic configuration: [Rn] 5f7 6d1 7s2
Formal oxidation number: +3
Atomic radius: 174 pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 1345 oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 382 kJ/mol
   )";
   break;

   case 97: cout<<R"(Berekelium

Relative atomic mass: [247]

Atomic number: 97
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1949 Stanley G. Thompson, Albert Ghiorso, Glenn T. Seaborg (US)

Electronic configuration: [Rn] 5f9 7s2
Formal oxidation number: +3 +4
Atomic radius: 170 pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 1050 oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 291 kJ/mol
   )";
   break;

   case 98: cout<<R"(Californium

Relative atomic mass: [251]

Atomic number: 98
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1950 Stanley G. Thompson, Kenneth Street Jr., Albert Ghiorso, Glenn T. Seaborg (US)

Electronic configuration: [Rn] 5f10 7s2
Formal oxidation number: +3
Atomic radius: 186 pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 900 oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 175 kJ/mol
   )";
   break;

   case 99: cout<<R"(Einsteinium

Relative atomic mass: [252]

Atomic number: 99
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1952 Albert Ghiorso & Berkely Lab. (US)

Electronic configuration: [Rn] 5f11 7s2
Formal oxidation number: +3
Atomic radius: 186 pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 860 oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 150 kJ/mol
   )";
   break;

   case 100: cout<<R"(Fermium

Relative atomic mass: [257]

Atomic number: 100
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1953 Albert Ghiorso & Berkely Lab. (US)

Electronic configuration: [Rn] 5f12 7s2
Formal oxidation number: +3
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 1527 oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 141 kJ/mol
   )";
   break;

   case 101: cout<<R"(Mendelivium

Relative atomic mass: [258]

Atomic number: 101
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1955 Albert Ghiorso, Bernard G. Harvey, Gregory R. Choppin, Stanley G. Thompson, Glenn T. Seaborg (US)

Electronic configuration: [Rn] 5f13 7s2
Formal oxidation number: +2 +3
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: 827 oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 116 kJ/mol
   )";
   break;

   case 102: cout<<R"(Nobelium

Relative atomic mass: [259]

Atomic number: 102
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1958 Albert Ghiorso, T. Sikkeland, J.R. Walton, Glenn T. Seaborg (US)

Electronic configuration: [Rn] 5f14 7s2
Formal oxidation number: +2 +3
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 108 kJ/mol
   )";
   break;

   case 103: cout<<R"(Lawrencium

Relative atomic mass: [262]

Atomic number: 103
Group numbers: 3
Period: 7
Standard state (20 oC): solid

Discovery: 1961 Albert Ghiorso, Torbjorn Sikkeland, Almon E. Larsh, R.M. Latimer (US)

Electronic configuration: [Rn] 5f14 6d1 7s2
Formal oxidation number: +3
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: 308 kJ/mol
   )";
   break;

   case 104: cout<<R"(Rutherfordium

Relative atomic mass: [267]

Atomic number: 104
Group numbers: 4
Period: 7
Standard state (20 oC): solid

Discovery: 1964 Albert Ghiorso & Berkely Lab. (US), Georgy Nikolaevich Flerov & JINR Dubna (RU)

Electronic configuration: [Rn] 5f14 6d2 7s2
Formal oxidation number: +4
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

   case 105: cout<<R"(Dubnium

Relative atomic mass: [268]

Atomic number: 105
Group numbers: 5
Period: 7
Standard state (20 oC): solid

Discovery: 1967 Albert Ghiorso & Berkely Lab. (US), Georgy Nikolaevich Flerov & JINR Dubna (RU)

Electronic configuration: [Rn] 5f14 6d3 7s2
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol

   )";
   break;

   case 106: cout<<R"(Seaborgium

Relative atomic mass: [271]

Atomic number: 106
Group numbers: 6
Period: 7
Standard state (20 oC): solid

Discovery: 1974 Albert Ghiorso, Kenneth Hulet et al. (US)

Electronic configuration: [Rn] 5f14 6d4 7s2
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
 )";
   break;

   case 107: cout<<R"(Bohrium

Relative atomic mass: [272]

Atomic number: 107
Group numbers: 7
Period: 7
Standard state (20 oC): solid

Discovery: 1981 Peter Armbruster, Gottfried Munzenber & GSI Darmstadt (DE)


Electronic configuration: [Rn] 5f14 6d5 7s2
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol

   )";
   break;

   case 108: cout<<R"(Hassium

Relative atomic mass: [277]

Atomic number: 108
Group numbers: 8
Period: 7
Standard state (20 oC): solid

Discovery: 1984 Peter Armbruster, Gottfried Munzenber & GSI Darmstadt (DE)

Electronic configuration: [Rn] 5f14 6d6 7s2
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

   case 109: cout<<R"(Meitnerium

Relative atomic mass: [276]

Atomic number: 109
Group numbers: 9
Period: 7
Standard state (20 oC): solid

Discovery: 1982 Peter Armbruster, Gottfried Munzenber & GSI Darmstadt (DE)

Electronic configuration: [Rn] 5f14 6d7 7s2
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol

   )";
   break;

   case 110: cout<<R"(Darmstadtium

Relative atomic mass: [281]

Atomic number: 110
Group numbers: 10
Period: 7
Standard state (20 oC): solid

Discovery: 1994 Sigurd Hofmann & GSI Darmstadt (DE)

Electronic configuration: [Rn] 5f14 6d9 7s1
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

   case 111: cout<<R"(Rntgenium

Relative atomic mass: [280]

Atomic number: 111
Group numbers: 11
Period: 7
Standard state (20 oC): solid

Discovery: 1994 Sigurd Hofmann & GSI Darmstadt (DE)

Electronic configuration: [Rn] 5f14 6d10 7s1
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

   case 112: cout<<R"(Copernicium

Relative atomic mass: [285]

Atomic number: 112
Group numbers: 12
Period: 7
Standard state (20 oC): solid

Discovery: 1996 Sigurd Hofmann & GSI Darmstadt (DE)

Electronic configuration: [Rn] 5f14 6d10 7s2
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
  )";
   break;

   case 113: cout<<R"(Nihonium

Relative atomic mass: [286]

Atomic number: 113
Group numbers: 13
Period: 7
Standard state (20 oC): solid

Discovery: 2004 Kosuke Moritom (JP)

Electronic configuration: [Rn] 5f14 6d10 7s2 7p1
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";

   case 114: cout<<R"(Flerovium

Relative atomic mass: [289]

Atomic number: 114
Group numbers: 14
Period: 7
Standard state (20 oC): solid

Discovery: 2004 Yuri Oganessian & JINR Dubna (RU), Kenton Moody & LLNL Livermore

Electronic configuration: [Rn] 5f14 6d10 7s2 7p2
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

   case 115: cout<<R"(Moscovium

Relative atomic mass: [289]

Atomic number: 115
Group numbers: 15
Period: 7
Standard state (20 oC): solid

Discovery: 2003 Yuri Oganessian & JINR Dubna (RU) & ORNL Oak Ridge (US) & LLNL Livermore (US)

Electronic configuration: [Rn] 5f14 6d10 7s2 7p3
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol

   )";
   break;

   case 116: cout<<R"(Livermorium

Relative atomic mass: [293]

Atomic number: 116
Group numbers: 16
Period: 7
Standard state (20 oC): solid

Discovery: 2004 Yuri Oganessian & JINR Dubna (RU), Kenton Moody & LLNL Livermore

Electronic configuration: [Rn] 5f14 6d10 7s2 7p4
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

   case 117: cout<<R"(Tennessine

Relative atomic mass: [293]

Atomic number: 117
Group numbers: 17
Period: 7
Standard state (20 oC): solid

Discovery: 2010 Yuri Oganessian & JINR Dubna (RU) & ORNL Oak Ridge (US)

Electronic configuration: [Rn] 5f14 6d10 7s2 7p5
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

   case 118: cout<<R"(Oganesson

Relative atomic mass: [294]

Atomic number: 118
Group numbers: 18
Period: 7
Standard state (20 oC): gas

Discovery: 2002 Yuri Oganessian & JINR Dubna (RU) & LLNL Livermore (US)

Electronic configuration: [Rn] 5f14 6d10 7s2 7p6
Formal oxidation number: 
Atomic radius: - pm

Electronegativities: -
Thermal conductivity: - W/(m K)
Electrical resistivity (20 oC): - microOhm cm

Melting point: - oC
Boiling point: - oC

Heat of fusion: - kJ/mol
Heat of vaporization: - kJ/mol
Heat of atomization: - kJ/mol
   )";
   break;

     default: cerr<<"ENTER A CORRECT ATOMIC NUMBER!";
              getch();
              INTERFACE();


	}
    getch();
    INTERFACE();
}

int main()
{
	INTERFACE();

	getch();
	return 0;
}