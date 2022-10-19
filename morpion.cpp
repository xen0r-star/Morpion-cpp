#include <iostream>
#include <string>
#include <windows.h>
#include "resource.rc"

int main()
{   

    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);

    //-------variable-------

    std::string number1 = "1";
    std::string number2 = "2";
    std::string number3 = "3";
    std::string number4 = "4";
    std::string number5 = "5";
    std::string number6 = "6";
    std::string number7 = "7";
    std::string number8 = "8";
    std::string number9 = "9";
    std::string barre = "-------------";  
    int gagne = 0;
    int nbr = 2;
    int point1 = 0;
    int point2 = 0;
    int point3 = 0;

    //-------debut-------

    SetConsoleTextAttribute(console, 0);
    std::cout << barre << "{ " << "But du jeux" << " }" << barre << "\n\n";
    SetConsoleTextAttribute(console, 10);
    std::cout << "Le but du jeux est d'alignee horizontalement, verticalement ou obligement trois X ou O." << "\n" << "Pour gagnee la partie, il faut alligner 3 X ou O " << "\n\n";

    std::cout << barre << "\n| " << number1 << " | " << number2 << " | " << number3 << " |\n" << barre << "\n| " << number4 << " | " << number5 << " | " << number6 << " |\n" << barre << "\n| " << number7 << " | " << number8 << " | " << number9 << " |\n" << barre << "\n\n";

    SetConsoleTextAttribute(console, 11);
    std::cout << "premier utilisateur : ";
    SetConsoleTextAttribute(console, 15);
    std::string utilisateur_1;
    std::cin >> utilisateur_1;

    SetConsoleTextAttribute(console, 12);
    std::cout << "deuxieme utilisateur : ";
    SetConsoleTextAttribute(console, 15);
    std::string utilisateur_2;
    std::cin >> utilisateur_2;

    std::cout << "\nNombre de manche :\n";
    SetConsoleTextAttribute(console, 2);
    std::cout << "[ 1 ] ";
    SetConsoleTextAttribute(console, 15);
    std::cout << " / ";
    SetConsoleTextAttribute(console, 6);
    std::cout <<  " [ 3 ] ";
    SetConsoleTextAttribute(console, 15);
    std::cout << " / ";
    SetConsoleTextAttribute(console, 12);
    std::cout << " [ 5 ] " << "\n\n";
    SetConsoleTextAttribute(console, 15);

    int nbr_manche_3 = 0;

    while (nbr_manche_3 == 0) {

        int nbr_manche;
        std::cin >> nbr_manche;

        switch (nbr_manche) {
            case 1:
                nbr_manche_3 = 1;
                break;
            case 3:
                nbr_manche_3 = 3;
                break;
            case 5:
                nbr_manche_3 = 5;
                break;
            default:
                    SetConsoleTextAttribute(console, 12);   
                    std::cout << "Erreur, vous n'avez pas mis la bonne valeur (1, 3, 5)";
                    SetConsoleTextAttribute(console, 15);
                break;
        }
    }

    //-------manche-------

    for (int manche = 1; manche <= nbr_manche_3; manche++) {

        while (gagne == 0) {
        
            std::cout << "\n";
            SetConsoleTextAttribute(console, 0);
            std::cout << barre << "{ manche " << manche <<" }" << barre << "\n";
            SetConsoleTextAttribute(console, 11);
            std::cout << "\n" << utilisateur_1;
            SetConsoleTextAttribute(console, 15);
            std::cout << " : " << point1 << "\n";
            SetConsoleTextAttribute(console, 12);
            std::cout << utilisateur_2;
            SetConsoleTextAttribute(console, 15);
            std::cout << " : " << point2 << "\n";
            SetConsoleTextAttribute(console, 2);
            std::cout << "Partie neutre";
            SetConsoleTextAttribute(console, 15);
            std::cout << " : " << point3 << "\n\n";

            if(nbr%2 == 0) {       // n est paire
 
                int choix1 = 0;

                while (choix1 == 0) {
                    
                    std::cout << "Au tour de ";
                    SetConsoleTextAttribute(console, 11);
                    std::cout << utilisateur_1;
                    SetConsoleTextAttribute(console, 15);
                    std::cout << " (les nombre de 1 a 9)\n" << std::endl;
                    int partie;
                    std::cin >> partie;

                    if ((partie >= 1) && (partie <= 9)) {

                        if ((partie == 1) && (number1 == "1")) {
                            number1 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 2) && (number2 == "2")) {
                            number2 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 3) && (number3 == "3")) {
                            number3 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 4) && (number4 == "4")) {
                            number4 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 5) && (number5 == "5")) {
                            number5 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 6) && (number6 == "6")) {
                            number6 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 7) && (number7 == "7")) {
                            number7 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 8) && (number8 == "8")) {
                            number8 ="X";
                            choix1 = 1;
                        }
                        else if ((partie == 9) && (number9 == "9")) {
                            number9 ="X";
                            choix1 = 1;
                        }
                        else {
                            SetConsoleTextAttribute(console, 12);
                            std::cout << "Il y a déja un sympolle dans la case\n";
                            SetConsoleTextAttribute(console, 15);   
                        }
                    }
                    else {
                        SetConsoleTextAttribute(console, 12);
                        std::cout << "ERREUR, le nombre n'est pas entre 1 et 9\n";
                        SetConsoleTextAttribute(console, 15);                    
                    }
                }
            }
            else {       // n est impaire
                
                int choix2 = 0;

                while (choix2 == 0) {

                    std::cout << "Au tour de ";
                    SetConsoleTextAttribute(console, 12);
                    std::cout << utilisateur_2;
                    SetConsoleTextAttribute(console, 15);
                    std::cout << " (les nombre de 1 a 9)\n" << std::endl;
                    int partie;
                    std::cin >> partie;

                    if ((partie >= 1) && (partie <= 9)) {

                        if ((partie == 1) && (number1 == "1")) {
                            number1 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 2) && (number2 == "2")) {
                            number2 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 3) && (number3 == "3")) {
                            number3 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 4) && (number4 == "4")) {
                            number4 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 5) && (number5 == "5")) {
                            number5 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 6) && (number6 == "6")) {
                            number6 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 7) && (number7 == "7")) {
                            number7 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 8) && (number8 == "8")) {
                            number8 ="O";
                            choix2 = 1;
                        }
                        else if ((partie == 9) && (number9 == "9")) {
                            number9 ="O";
                            choix2 = 1;
                        }
                        else {
                            SetConsoleTextAttribute(console, 12);
                            std::cout << "Il y a déja un sympolle dans la case\n";
                            SetConsoleTextAttribute(console, 15);   
                        }
                    }
                    else {
                        SetConsoleTextAttribute(console, 12);
                        std::cout << "ERREUR, le nombre n'est pas entre 1 et 9\n";
                        SetConsoleTextAttribute(console, 15);                    
                    }
                }
            }
            
            if (((number1 =="X") && (number2 =="X") && (number3 =="X")) || ((number4 =="X") && (number5 =="X") && (number6 =="X")) || ((number7 =="X") && (number8 =="X") && (number9 =="X")) || ((number7 =="X") && (number5 =="X") && (number3 =="X")) || ((number1 =="X") && (number5 =="X") && (number9 =="X")) || ((number1 =="X") && (number4 =="X") && (number7 =="X")) || ((number2 =="X") && (number5 =="X") && (number8 =="X")) || ((number3 =="X") && (number6 =="X") && (number9 =="X"))) {
                gagne = 1;
                point1++;
            }
            else if (((number1 =="O") && (number2 =="O") && (number3 =="O")) || ((number4 =="O") && (number5 =="O") && (number6 =="O")) || ((number7 =="O") && (number8 =="O") && (number9 =="O")) || ((number7 =="O") && (number5 =="O") && (number3 =="O")) || ((number1 =="O") && (number5 =="O") && (number9 =="O")) || ((number1 =="O") && (number4 =="O") && (number7 =="O")) || ((number2 =="O") && (number5 =="O") && (number8 =="O")) || ((number3 =="O") && (number6 =="O") && (number9 =="O"))) {
                gagne = 2;
                point2++;
            }
            else if ((number1 !="1") && (number2 !="2") && (number3 !="3") && (number4 !="4") && (number5 !="5") && (number6 !="6") && (number7 !="7") && (number8 !="8") && (number9 !="9")) {
                gagne = 3;
                point3++;
            }
            else {}

            std::cout << barre << "\n| ";
            if (number1 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number1; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else if(number1 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number1; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else {
                std::cout << number1 << " | ";
            }

            if (number2 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number2; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else if(number2 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number2; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else {
                std::cout << number2 << " | ";
            }

            if (number3 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number3; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " |\n";
            }
            else if(number3 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number3; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " |\n";
            }
            else {
                std::cout << number3 << " |\n";
            }

            std::cout << barre << "\n| ";

            if (number4 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number4; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else if(number4 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number4; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else {
                std::cout << number4 << " | ";
            }      

            if (number5 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number5; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else if(number5 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number5; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else {
                std::cout << number5 << " | ";
            }       

            if (number6 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number6; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " |\n";
            }
            else if(number6 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number6; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " |\n";
            }
            else {
                std::cout << number6 << " |\n";
            }

            std::cout << barre << "\n| ";

            if (number7 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number7; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else if(number7 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number7; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else {
                std::cout << number7 << " | ";
            }      

            if (number8 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number8; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else if(number8 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number8; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " | ";
            }
            else {
                std::cout << number8 << " | ";
            } 

            if (number9 =="X") {
                SetConsoleTextAttribute(console, 11);
                std::cout << number9; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " |\n";
            }
            else if(number9 =="O") {
                SetConsoleTextAttribute(console, 12);
                std::cout << number9; 
                SetConsoleTextAttribute(console, 15);
                std::cout << " |\n";
            }
            else {
                std::cout << number9 << " |\n";
            }

            std::cout  << barre << "\n\n";

            nbr++;
        }

        switch (gagne) {
            case 1:
                SetConsoleTextAttribute(console, 6);
                std::cout << "Bravo ";
                SetConsoleTextAttribute(console,11);
                std::cout << utilisateur_1;
                SetConsoleTextAttribute(console, 6);
                std::cout << "! Tu as remportee la partie.";
                SetConsoleTextAttribute(console, 15);
                break;
            case 2:
                SetConsoleTextAttribute(console, 6);
                std::cout << "Bravo ";
                SetConsoleTextAttribute(console, 12);
                std::cout << utilisateur_2;
                SetConsoleTextAttribute(console, 6);
                std::cout << "! Tu as remportee la partie.";
                SetConsoleTextAttribute(console, 15);
                break;
            default:
                SetConsoleTextAttribute(console, 6);
                std::cout << "Personne n'a remporter la partie";
                SetConsoleTextAttribute(console, 15);
                break;
        }

        int fin = 30;

        std::cout << "    ";

        while (fin !=1)
        {
            if (fin >= 10)
            {
                std::cout << "  \b\b\b\b" << fin;
            }
            else
            {
                std::cout << "  \b\b\b\b0" << fin;
            }
            
            Sleep(1000);
            fin = fin - 1;
        }
        
    }

    return 0;
}

    
/*
    ----[ a terminer ]----

    - répéter les manche
    - bug ne pas mettre de lettre sinon boucle infinie
*/ 