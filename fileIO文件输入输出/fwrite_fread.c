#include <stdio.h>
#include <string.h>

int main(void){
    //FILE * fp;
    //int arr[10];
    //int x[10];
    //int k;

    ///* generate array of numbers */
    //for (k=0;k<10;k++){
    //    arr[k] = k;
    //}

    ///* write array to file */
    //fp = fopen("fwrite_fread.txt","wb");
    //fwrite(arr,sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]),fp);
    //fclose(fp);

    ///* read from file */
    //fp = fopen("fwrite_fread.txt","rb");
    //fread(x,sizeof(*arr),sizeof(arr)/sizeof(*arr),fp);
    //fclose(fp);

    ///* print array */
    //for (k = 0;k<10;k++){
    //    printf("%d",x[k]);
    //}

    FILE * fp;
    char str[50] = "This is a char array,it is This is a ...\n";
    char *string;
    //printf("%s\n",str);
    //printf("%d\n",strlen(str));
    fp = fopen("fwrite_fread.txt","wb+");
    fwrite(str,sizeof(char),strlen(str)/sizeof(char)+1,fp);
    //fclose(fp);
    //fp = fopen("fwrite_fread.txt","rb");
    fseek(fp,0,SEEK_SET);
    //fseek(fp,0,SEEK_CUR);
    //fseek(fp,0,SEEK_END);
    
    fread(string,sizeof(char),strlen(str)/sizeof(char)+1,fp);
    fclose(fp);
    printf("%s",string);

    return 0;
}
