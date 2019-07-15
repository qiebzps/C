#include <stdio.h>
#include <string.h>


typedef struct{
    int id;
    char name[20];
}item;

int main(void){
    FILE * fp;
    item first,second,secondf;

    /* create records */
    first.id = 10276;
    strcpy(first.name,"Widget");
    second.id = 11786;
    strcpy(second.name,"Gadget");

    /* write records to a file */
    fp = fopen("info.dat","wb");
    fwrite(&first,1,sizeof(first),fp);
    fwrite(&second,1,sizeof(first),fp);
    fclose(fp);

    /* file contains 2 records of type item */
    fp = fopen("info.dat","rb");

    /* seek second record */
    fseek(fp,1*sizeof(item),SEEK_SET);
    fread(&secondf,1,sizeof(item),fp);
    printf("%d %s\n",secondf.id,secondf.name);
    fclose(fp);

    return 0;
}
