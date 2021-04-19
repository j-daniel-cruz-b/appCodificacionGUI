#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <cstring>
#include <string>
#include <stdio.h>

class Encryption
{
public:
    Encryption();

    //Arreglo para el nuevo texto
    char *newCode;

    //Metodos
    void encode(char msj[], int n);
    void decode(char msj[], int n);
    int charToAscii(char c);
    char asciiToChar(int c);
};

#endif // ENCRYPTION_H
