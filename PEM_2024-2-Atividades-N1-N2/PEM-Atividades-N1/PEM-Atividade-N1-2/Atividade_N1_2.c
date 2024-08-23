#include <stdio.h>

int main()
{
   int M, i;
   float N[], Ma, Me, soma, somaF;
  
   
   for(i=0;i<5;i++){
       printf("Forneça a Quantidade de Testes");
       scanf("%d", &M);
       
       for(i=0;i<M;i++){
            printf("Forneça as notas");
            scanf("%f", &N); 
            
            N[i] = N;
            N = Ma;
            N = Me;
            
            if(N < Me)N = Me;
            else{
                    if(N > Ma)N = Ma;
            }
            
            soma = soma + N;
           }
           somaF = somaF + soma;
       if(i=0){printf("Raciocínio lógico = %f \n", soma);}
       else{    if(i=1){printf("Conceitos de gerenciamento de projetos = %f\n", soma);}
                else{
                    if(i=2){printf("Lingua inglesa = %f\n", soma);}
                    else{
                        if(i=3){printf("Conceitos de metodologia ágil = %f\n", soma);}
                        else{
                            if(i=4){printf("linguagem javascript = %f\n", soma);}
                            
 }}}}}
 
 printf("Nota final do candidato = %f \n", somaF);

    return 0;
}