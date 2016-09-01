/**
    SPDO V 1.0 by n0v1c4@sdf.org

 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <bitset>
#include <sstream>

#include "spdof.h"

 using namespace std;

 int main (int argc, char* argv[])
 {
  string s, p, d, o;
  o = "\t";

  system("clear");
  cout << "{S, P, D, O Ver 1.0}" << endl << endl;

  if(argv[1]!=NULL)
 { cout << "\t[p]: ";    getline (cin, p);
   cout << "\t[d]: ";    getline (cin, d);

   system("clear");

   Spdo c;
   c.PostaviVrednosti(argv[1],p,d,o);
   c.d();
 } else
  { cout << "\t[c]: ";    getline (cin, s);
    cout << "\t[p]: ";    getline (cin, p);
    cout << "\t[d]: ";    getline (cin, d);

    system("clear");

    Spdo e;
    e.PostaviVrednosti(s, p, d, o);
    e.c();
  }

  return EXIT_SUCCESS;

}
