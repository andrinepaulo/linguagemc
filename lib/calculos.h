int soma (int array[],int qtd){
 int rs = 0,
 int x;
 for(x = 0; x < qtd ; x++){
    rs += array[x];
 }
return rs;
}
int media (int array[],int qtd){
 int rs = 0,
 int x;
 for(x = 0; x < qtd ; x++){
    rs +=array[x];
     }
     return rs / qtd;
      }
 
      void valores_iguais(int array[], int qdt1, int array2[], int qdt2){
        int i,j;
        for( i = 0 ; i < qtd1 ; i++){
            for(j = 0 ; < qtd2 ; j++){
                if(array1[i] == array2[j]){
                    printf("Este valor %d tem nos dois arrays\n",array1[i]);
                    break; // quando encontrar os número iguais
                        // sai do for de dentro 
                }
            }
        }


      }
 