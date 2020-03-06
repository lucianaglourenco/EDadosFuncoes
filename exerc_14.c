# include <stdio.h>


 int verificaDecrescente(int vet[], int tam){
  	int i = 1;
    for (i = 1; i <tam; i ++){
        if ( vet[i + 1] < vet[i]){
            return 1;

        }
    }
    return 0;
}


int main(){
	
    int v[] = {2, 4, 2, 5, 7, 8, 9, 6};

     if (verificaDecrescente (v, 8) == 0){
         printf("Decrescente");
     }  else {
         printf("Não decrescente");
     }

}
