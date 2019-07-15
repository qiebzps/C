#include <stdio.h>
#include <string.h>
int main(void){
    /* Accessing Files */
    //FILE * fp = NULL;
    //fp = fopen("fileIO.txt","r");
    //char * str = "This is a try of Accessing Files\n";
    //printf("%s",str);
    //if(fp != NULL){
    //    printf("Successful!\n");
    //}
    //if (fclose(fp) != EOF){
    //    printf("Accessing files fclose is Successful!\n");
    //}

    /* Reading from a File */
    //FILE * fp = NULL;
    //fp = fopen("fileIO.txt","r");
    //int c;
    //while((c = getc(fp)) != EOF){
    //    //printf("%c",c);
    //    //putchar(c);
    //    //putc(c,stdout);
    //}
    //if (fclose(fp) != EOF){
    //    printf(" Reading form a file fclose is Successful!\n");
    //}

    /* Writing to a File */
    FILE * fp;
    char filename[50];
    printf("Enter the filename of the file to create:");
    fgets(filename,50,stdin);
    fp = fopen(filename,"w");
    /*write to file*/
    fprintf(fp,"Inventory\n");
    fprintf(fp,"%d %s %f\n",100,"Widget",0.29);
    fputs("End of List",fp);

    return 0;
}
