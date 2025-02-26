/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

  int main (){
  int idade;
  int comando;
  
  printf("digite a idade");
  scanf("%d" , &idade);
  
  if(idade>=18){
  printf("entre e se divirta");
  
  }else if (idade>=16){
      printf("espie por 5 minutos");
  
  }else{
      printf("chora");
  }  
  
  do{ 
        printf("digite uma idade válido:");
        scanf(" %d",&comando);
        }while(comando != idade<0 && comando != idade<100);
        
  printf("  vá para casa e durma");
  return 0;
  
  }