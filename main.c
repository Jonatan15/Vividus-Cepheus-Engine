#include <stdio.h>
#include <persona.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int scoreMod (int x);
void initPersona();
void profilePersona (struct persona x);
int gerarAtributo();
char pseudoHex(int x);

int main(void)

{
    
    srand(time(NULL));
    initPersona();
    
    return 0;
}

int scoreMod (int x)
{
    int mod;
    
    if(x<=2)
    {
       mod = -2; 
       return mod;
    }
    
    mod = (x/3)-2;   
    
    return mod;
}

void initPersona()
{
    struct persona stdPersona;
           
    stdPersona.str = gerarAtributo();    
    stdPersona.des = gerarAtributo();    
    stdPersona.res = gerarAtributo();    
    stdPersona.in  = gerarAtributo();   
    stdPersona.edu = gerarAtributo();   
    stdPersona.car = gerarAtributo();
    
    stdPersona.strH = pseudoHex(stdPersona.str);    
    stdPersona.desH = pseudoHex(stdPersona.des);    
    stdPersona.resH = pseudoHex(stdPersona.res);    
    stdPersona.inH  = pseudoHex(stdPersona.in);   
    stdPersona.eduH = pseudoHex(stdPersona.edu);   
    stdPersona.carH = pseudoHex(stdPersona.car);

    profilePersona(stdPersona);
    
    return 0;
}

void profilePersona (struct persona x)
{
    
    printf("UPP: %d|%d|%d|%d|%d|%d \n", x.str, x.des, x.res, x.in, x.edu, x.car);
    printf("Hex: %c|%c|%c|%c|%c|%c \n", x.strH, x.desH, x.resH, x.inH, x.eduH, x.carH);
    printf("Mod: %d|%d|%d|%d|%d|%d \n", scoreMod(x.str), scoreMod(x.des), scoreMod(x.res), scoreMod(x.in), scoreMod(x.edu), scoreMod(x.car));
    
    return 0;
}

int gerarAtributo()
{
      
    int r = 0;
    
    while(r<2)
    {
        r = rand()%13;    
    }
        
    return r;
}

char pseudoHex(int x)
{
    /*if(someInteger < 0 || someInteger > 33 || someInteger != Math.floor(someInteger))
		throw "Illegal value passed to pseudoHex: " + someInteger + ". A pseudo hexadecimal must be an integer from 0 to 33";*/
	
    char i = x+'0';
    
    switch(x)
        {
            case 10: return 'A';
            case 11: return 'B';
            case 12: return 'C';
            case 13: return 'D';
            case 14: return 'E';
            case 15: return 'F';
            case 16: return 'G';
            case 17: return 'H';
			case 18: return 'J';
            case 19: return 'K';
            case 20: return 'L';
            case 21: return 'M';
            case 22: return 'N';
            case 23: return 'P';
            case 24: return 'Q';
            case 25: return 'R';
            case 26: return 'S';
            case 27: return 'T';
            case 28: return 'U';
            case 29: return 'V';
            case 30: return 'W';
            case 31: return 'X';
            case 32: return 'Y';
            case 33: return 'Z';  
            default: return i;
        }
        
        
}