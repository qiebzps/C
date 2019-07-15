#include <stdio.h>
int main(void){
    FILE * fp;
    int arr[10];
    int x[10];
    int k;

    /* generate array of numbers */
    for (k = 0;k<10;k++){
        arr[k] = k;
    }
    /* write array to file */
    fp = fopen("bfileIO.txt","wb");
    /*The  function  fread()  reads nmemb items of data, each size 
     * bytes long, from the stream pointed to by stream, storing them 
     * at the location given by ptr.*/
    fwrite(arr,sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]),fp);
    fclose(fp);

    /* read array from file */
    fp = fopen("bfileIO.txt","rb");
    /*The  function fwrite() writes nmemb items of data, each size 
     * bytes long, to the stream pointed to by stream, obtaining  them
     * from  the  location given by ptr.*/
    fread(x,sizeof(*arr),sizeof(arr)/sizeof(*arr),fp);
    fclose(fp);

    /* print array */
    for(k = 0;k<10;k++){
        printf("%d",x[k]);
    }


    return 0;
}
