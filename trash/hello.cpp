#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include "menu.cpp"

using namespace std;


#define ENTER           13
#define BACKSPACE        8


char passInputCharacter;
char password[20];
const char *accessPassword = "123";

int passInputCharacterPosition = 0;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void login() {
    // content of login file
}
