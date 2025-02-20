/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int multiplicaçao;
    int divisao;
    int subtraçao;
    char comando;
    
    printf("digite um numero");
    scanf("%d",&n1);
    printf("digite um numero");
    scanf("%d",&n2);

 do{ 
        printf("digite um comando válido:");
        scanf(" %c",&comando);
        }while(comando != 's' && comando != 'm' && comando != 'd' && comando != 'b');
    
    if(comando == 's'){
        soma =n1+n2;
        printf("a soma vale %d",soma);
        
    }
    
    else if(comando == 'm'){
        multiplicaçao =n1*n2;
        printf("a multiplicaçao vale %d", multiplicaçao);
    }
    
    else if(comando == 'd'){
        divisao =n1/n2;
        printf("a divisao vale %d", divisao);
    }
    
    else if (comando == 'b'){
        subtraçao =n1-n2;
        printf("a subtraçao vale %d", subtraçao);
    }
    
    
    return 0;
}