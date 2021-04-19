#include "encryption.h"

Encryption::Encryption()
{

}

int Encryption::charToAscii(char c){
    int ascii = (c+2);

    return ascii;
}

char Encryption::asciiToChar(int c){
    if(c >= 65 && c <= 80){
        c = c + 10;
    } else if(c >= 81 && c <= 90){
        switch (c) {
        case 81: c = 48;
            break;
        case 82: c = 49;
            break;
        case 83: c = 50;
            break;
        case 84: c = 51;
            break;
        case 85: c = 52;
            break;
        case 86: c = 53;
            break;
        case 87: c = 54;
            break;
        case 88: c = 55;
            break;
        case 89: c = 56;
            break;
        case 90: c = 57;
            break;
        }
    } else if(c >= 97 && c <= 117){
        c = c + 5;
    } else if(c >= 118 && c <= 122){
        switch (c) {
        case 118: c = 33;
            break;
        case 119: c = 34;
            break;
        case 120: c = 35;
            break;
        case 121: c = 35;
            break;
        case 122: c = 37;
            break;
        }
    }
    char caracter = (c);
    return caracter;
}

void Encryption::encode(char *msj, int n){
//    char encodedText[n];
    for (int i = 0 ; i < n ; i++) {
        int msjAscii = charToAscii(msj[i]);
        char newChar = asciiToChar(msjAscii);
        msj[i] = newChar;
    }
//    strcpy(msj, encodedText);
}

void Encryption::decode(char *msj, int n){
//    char encodedText[n];
    for (int i = 0 ; i < n ; i++) {
        int msjAscii = charToAscii(msj[i]);
        char newChar = asciiToChar(msjAscii);
        msj[i] = newChar;
    }
//    strcpy(msj, encodedText);
}

