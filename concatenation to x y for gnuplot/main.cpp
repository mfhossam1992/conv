#include <iostream>
#include "concat.h"
using namespace std;
int main(int argc, char *argv[]) {

    concat obj(argv[1],argv[2]);
    obj.write_to_file();


    return 0;
}