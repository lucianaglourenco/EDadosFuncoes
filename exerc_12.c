
#include<stdio.h>


int elementosiguais(int vet[], int tam){
 int i = 0;  
 int j = 0;
for (i = 0; i < tam; i++) {
        for (j = i + 1; j < tam; j++) {
            if (vet[i] == vet[j]) {
             return 0;
         }           	
		    	
		 
                
      }
      return 1;
 }
 
                
                
                
int main () {
	
 int v[] = {0,8,7,4,7,0};

 if (elementosiguais(v, 6) == 0){
         printf("\n Este vetor possui elementos iguais");
     }  else {
         printf("\n Este vetor não possui elementos iguais");
     }

 
system("pause");
return 0;
}
