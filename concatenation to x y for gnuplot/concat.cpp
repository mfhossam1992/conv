//
// Created by hossam on 6/22/18.
//

#include "concat.h"
#include <fstream>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

concat::concat(char *p1,char *p2){

    x.open(p1);
    y.open(p2);

}


void concat::write_to_file() {

    msd.open("msd.dat");

    while (getline (x,linex) && getline (y,liney)){

        msd << linex << " " << liney<< "\n";

    }


}

