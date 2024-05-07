#include <iostream>
using namespace std;

class persegipanjang
{

public :
    int panjang, lebar;
    int luasPersegiPanjang(int b, int a)
    {
        return a * b;
    }
        
};

class segitiga
{

public :
    int tinggi,
        alas;
    
    int luasSegitiga(int a, int t)
    {
        return 0.5 * a * t;
    }
    int hitung(persegipanjang p)
    {
        return p.panjang;
    }
};

