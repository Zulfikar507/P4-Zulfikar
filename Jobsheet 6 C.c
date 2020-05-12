#include <stdio.h>
#include <stdlib.h>


main()
{
int i,j;
int matrik1[2][2];
printf("NAMA : ZULFIKAR \nNIM : F1B019147 \nKELOMPOK : 28\n\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Masukkan nilai matrik %i,%i = ",i,j);
scanf("%i",&matrik1[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%i ",matrik1[i][j]);
}
printf("\n");
}
printf("nilai matrik setelah di transpose = ");
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%i ",matrik1[j][i]);
}
printf("\n");
}
}

