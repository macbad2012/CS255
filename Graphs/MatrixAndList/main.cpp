#include <iostream>
#include "AdjacencyMatrix.h"
#include "AdjacencyList.h"
#include "GraphNode.h"

using namespace std;

int main()
{
    //GraveYard Problem
    AdjecencyMatrix problemIP;
    problemIP.GraveYard("GraveYardIP.txt");
    AdjecencyMatrix problemNP;
    problemNP.GraveYard("GraveYardNP.txt");
    AdjecencyMatrix problemN;
    problemN.GraveYard("GraveYardN.txt");

    //Matrix & List Stuff
/*
    AdjecencyMatrix Matrix;
    cout << "Adjacency Matrix" << endl;
    Matrix.fileRead("graphTest.txt");
    Matrix.printMatrix();
    Matrix.DFT();
    Matrix.BFT();
    Matrix.Dijkstras();
    Matrix.Prims();
    Matrix.Kruskals();
    Matrix.FloydWarshalls();
cout << "___________________" << endl;
cout << endl;
    AdjecencyList List;
    cout << "Adjacency List" << endl;
    List.fileRead("graphTest.txt");
    List.printList();
    List.DFT();
    List.BFT();
    List.Dijkstras();
    List.Prims();
    List.Kruskals();
    List.FloydWarshalls();
*/
    return 0;
}
