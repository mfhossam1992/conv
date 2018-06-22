//
// Created by hossam on 6/22/18.
//

#ifndef CONCATENATION_TO_X_Y_FOR_GNUPLOT_CONCAT_H
#define CONCATENATION_TO_X_Y_FOR_GNUPLOT_CONCAT_H

#include <fstream>
#include <cstring>
#include <string>

using namespace std;

class concat {

public:

    concat(char *p1,char *p2);
    void write_to_file();

private:

    string linex;
    string liney;
    ifstream x;
    ifstream y;
    ofstream msd;



};


#endif //CONCATENATION_TO_X_Y_FOR_GNUPLOT_CONCAT_H
