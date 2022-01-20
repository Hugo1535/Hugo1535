#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Interface.h"
#include "Graph.h"
#include "Vector.h"

using namespace std;

int main()
{
/*//#################### SELECTION DU TYPE DE PORTE ET CALCUL #########################################################################
    int TypeOfGate;
    cout<< " Selectionner la porte a simuler : CHOIX ==> 0 pour AND,  1 pour OR,  2 pour XOR,  3 pour NOT : ";
    cin >> TypeOfGate;

    switch(TypeOfGate){
        case 0:
        {

            int EntreeSignaux = 0;
            cout << "Entrez le nombre de signaux d'entree :";
            cin >> EntreeSignaux;

            AND porteAND;
            porteAND.print_info();
            porteAND.And(EntreeSignaux);
            for(int x=0; x<EntreeSignaux; x++){
                bool valbool;
                cout << "Entrez la valeur du signal [" << x << "]: ";
                cin >> valbool;
                porteAND.Set_input(valbool, x);
            }
            porteAND.Calculate_output(EntreeSignaux);
        break;
        }

        case 1:
        {
            int EntreeSignaux = 0;
            cout << "Entrez le nombre de signaux d'entree :";
            cin >> EntreeSignaux;

            OR porteOR;
            porteOR.print_info();
            porteOR.Or(EntreeSignaux);
            for(int x=0; x<EntreeSignaux; x++){
                bool valbool;
                cout << "Entrez la valeur du signal [" << x << "]: ";
                cin >> valbool;
                porteOR.Set_input(valbool, x);
            }
            porteOR.Calculate_output(EntreeSignaux);
        break;
        }

        case 2:
        {
            int EntreeSignaux = 0;
            cout << "Entrez le nombre de signaux d'entree :";
            cin >> EntreeSignaux;

            XOR porteXOR;
            porteXOR.print_info();
            porteXOR.Xor(EntreeSignaux);
            for(int x=0; x<EntreeSignaux; x++){
                bool valbool;
                cout << "Entrez la valeur du signal [" << x << "]: ";
                cin >> valbool;
                porteXOR.Set_input(valbool, x);
            }
            porteXOR.Calculate_output(EntreeSignaux);
        break;
        }

        case 3:
        {
            NOT porteNOT;
            porteNOT.print_info();
            porteNOT.Not();
            bool valbool;
            cout << "Entrez la valeur du signal : ";
            cin >> valbool;
            porteNOT.Set_input(valbool);
            porteNOT.Calculate_output();
        break;
        }
    }
//####################################################################################################################################

//######################### MATRICE ADJACENTE DE LA CLASS GRAPH ######################################################

    Graph g(15); //nombre de nodes

  //Connexions entre les noeuds
  g.addEdge(0, 6);
  g.addEdge(1, 6);
  g.addEdge(2, 7);
  g.addEdge(3, 7);
  g.addEdge(4, 8);
  g.addEdge(5, 11);
  g.addEdge(6, 9);
  g.addEdge(7, 8);
  g.addEdge(8, 9);
  g.addEdge(8, 10);
  g.addEdge(8, 11);
  g.addEdge(9, 12);
  g.addEdge(10, 13);
  g.addEdge(11, 14);

    g.toString();

//#####################################################################################################################*/

    Graph g(15);
    g.LectureFichier();




    //g.Simulation();

}

