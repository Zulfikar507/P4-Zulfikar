#include <iostream>

using namespace std;

main ()
{
int i, j;
int matrik1[2][2];
cout << "Nama : ZULFIKAR" << endl;
cout << "NIM : F1B019147" << endl;
cout << "Kelompok : 28" << endl;
for (i = 0; i < 3; i++)
{
for (j=0; j<3; j++)
{
cout << "Masukkan nilai matrik " << i << "," << j << " = ";
cin >> matrik1[i][j];
}
}
cout << endl;
for (i=0; i< 3; i++){
for (j = 0; j < 3; j++){
cout<<matrik1[i][j]<<" ";
}
cout << endl;
}
cout << endl;
cout<<"nilai matrik setelah di transpose = "<<endl;
for (i=0; i< 3; i++){
for (j = 0; j < 3; j++){
cout<<matrik1[j][i]<<" ";
}
cout << endl;
}
}

