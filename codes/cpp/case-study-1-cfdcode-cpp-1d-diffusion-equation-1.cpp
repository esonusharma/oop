/*
1. source file
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "gnuplot-iostream.h"

using namespace std;

int main() {
    Gnuplot gp;
    int nx = 41;
    double dx = 2.0 / (nx - 1);
    int nt = 20;
    double nu = 0.3;
    double k = 0.2;
    double dt = k * pow(dx, 2) / nu;

    vector<double> u(nx, 1.0);
    for (int i = int(0.5 / dx); i <= int(1 / dx); i++) {
        u[i] = 2.0;
    }

    vector<double> un(nx, 1.0);
    for (int n = 1; n <= nt; n++) {
        un = u;
        for (int i = 1; i < nx - 1; i++) {
            u[i] = un[i] + nu * dt / pow(dx, 2) * (un[i+1] - 2 * un[i] + un[i-1]);
        }
    }

    ofstream outfile("output.dat");

    for (int i = 0; i < nx; i++) {
        outfile << i * dx << " " << u[i] << "\n";
    }
    outfile.close();
    gp << "set title 'x vs u graph'\n";
	gp << "set xlabel 'x'\n";
	gp << "set ylabel 'u'\n";	
	gp << "set grid\n";
    gp << "set xtics rotate by 90 right\n";
//	gp << "set term png\n";
//	gp << "set output 'sample-csv.png'\n";
	gp << "plot('output.dat') using 2:xticlabel(1) with linespoints\n";

    return 0;
}
