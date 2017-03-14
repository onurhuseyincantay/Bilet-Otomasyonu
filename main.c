#include <stdio.h>
#include <stdlib.h>
typedef enum
{
    bos,
    dolu
}Doluluk;
typedef struct
{
    char film[50];
    int K_numarasi[50];
}Red;
typedef struct
{
    char film[50];
    int K_numarasi[50];
}Green;
typedef struct
{
    char film[50];
    int K_numarasi[50];
}Blue;


int main()
{ char secim,ch;//salon secimi
    fflush(stdin);
    char G_sifre[13];
    char b,d[10];//sifreleme icin gecici ramde alan
    int t=0,i,ucret=0,j;
    int o_ucret[3][5];//ogrenci ucretli müsterilerin sayısının saklandıgı alan 2 boyutlu cunku 1. boyut salonu 2. boyut matineyi ifade ediyor
    int t_ucret[3][5];//tam ucretli müsterilerin sayısının saklandıgı alan 2 boyutlu cunku 1. boyut salonu 2. boyut matineyi ifade ediyor
for(i=0;i<3;i++)
{
    for(j=0;j<5;j++)
    {
        o_ucret[i][j]=0;//deger olarak basta hasılat 0 olmalı
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<5;j++)
    {
        t_ucret[i][j]=0;//deger olarak basta hasılat 0 olmalı
    }
}

    FILE  *hb1;
 hb1=fopen("HBSalon1.txt","a");
 if(hb1==NULL)
 {
     printf("HBSalon 1.txt acilamadi:!");//burası olunca hata veriyor
     exit(1);
 }
 else
 {
    fclose(hb1);
 }
     FILE  *hb2;
 hb2=fopen("HBSalon2.txt","a");
 if(hb2==NULL)
 {
     printf("HBSalon 2.txt acilamadi:!");//burası olunca hata veriyor
     exit(1);
 }
 else
 {
    fclose(hb2);
 }
     FILE  *hb3;
 hb3=fopen("HBSalon3.txt","a");
 if(hb3==NULL)
 {
     printf("HBSalon 3.txt acilamadi:!");//burası olunca hata veriyor
     exit(1);
 }
 else
 {
    fclose(hb3);
 }


 FILE  *pdosya;
 pdosya=fopen("sifre.txt","w");
 if(pdosya==NULL)
 {
     printf("sifre.txt dosyasi acilmadi :!\n");
     exit(1);
 }
 else
 {
     char Sifre[10]="Onur";
  for(i=0;i<strlen(Sifre);i++)

{
   b = (char) (((int) Sifre[i]-65+2)%26+65);//ascıı kod da kaç birim ilerlemimizi söylemek istedim
d[i]=b;

}
d[i]=0;


     fprintf(pdosya,"%s",&d);
 }
 fclose(pdosya);
 Red rd[5];//5'li dizi olarak olmasinin sebebi 5 matine olmasi
 Blue bl[5];
 Green gr[5];
 fflush(stdin);
 for(i=0;i<5;i++)
 {
     for(j=0;j<50;j++)
     {
rd[i].K_numarasi[j]=bos;

     }
 }
  for(i=0;i<5;i++)
 {
     for(j=0;j<50;j++)
     {
bl[i].K_numarasi[j]=bos;

     }
 }



 for(i=0;i<5;i++)
 {
     strcpy(rd[i].film,"1.Salon(Red)   Inception-*-Baslangic-*-");
     strcpy(bl[i].film,"2.Salon(Blue)  A Beautiful Mind-*-Akil Oyunlari-*-");
     strcpy(gr[i].film,"3.Salon(Green) The Shawshank Redemption-*-Esaretin Bedeli-*-");
 }

 char U_Name[10],U_Pass[20];
 printf("\n--------------------------------------------------------------");
 printf("\n-          Kullanici Adi :");scanf("%s",U_Name);
 printf("\n-          Sifre         :");scanf("%s",U_Pass);
 printf("\n--------------------------------------------------------------");
   for(i=0;i<5;i++)
 {
     for(j=0;j<50;j++)
     {
    gr[i].K_numarasi[j]=bos;//bos degerini burda atamak zorunda kaldım cunku program oncesinde yaparsam ilk boyutun tumundeki 0. ve 1. indise 0 değerini atmıyordu random deger atıyordu

     }
 }
 do{
        t++;
  for(i=0;i<strlen(U_Pass);i++)

{
   b = (char) (((int) U_Pass[i]-65+2)%26+65);//ascıı kod da kaç birim ilerlemimizi söylemek istedim
d[i]=b;

}
d[i]=0;
pdosya=fopen("sifre.txt","r");
 if(pdosya==NULL)
 {
     printf("sifre.txt acilamadi:!");
     exit(1);
 }
 else
 {
   int k;
 while(k!=EOF)
 {
     k=fscanf(pdosya,"%s",&G_sifre);//geçici bellekte yaziyi saklýyorum  ilerde sifreli olacaðý için dizideki indislerinden cekicem sifreyi
 }


 }
 fclose(pdosya);

 if(!(strcmp(U_Name,"admin")))
 {
   if(!(strcmp(G_sifre,d)))//kullanıcınin girmis oldugu sifrenin sifrelenmis hali ile asıl sifrenin sifrelenmis halini karsılastırıyorum
   {

       int *ps,*pm,s,m,x;//salon secimi
    if(t==1){printf("\nGiris Basarili !!\n");}
    printf("\nHasilat bilgisi icin : H\n Film ve koltuk secimi icin F giriniz :");
    secim=getch();//scanf te hata veriyor program direk kapatıyor ?
    fflush(stdin);
    switch(secim)
    {
    case 'H':
    case 'h':
printf("\n");
printf("hangi Salonun Hasilat bilgisini istersiniz ?\n");
int l;//salon secimi
printf("Red icin 1 Blue icin 2 Green icin 3 giriniz :");scanf("%d",&l);
if(l==1)
{
      hb1=fopen("HBSalon1.txt","r");

    char G_kelime[500];
    while(!feof(hb1))
    {
       fgets(G_kelime,500,hb1);//her satırı dosya sonuna kadar yazdır
       puts(G_kelime);
    }



    fclose(hb1);
}
if(l==2)
{
      hb2=fopen("HBSalon2.txt","r");

    char G_kelime[500];
    while(!feof(hb2))
    {
       fgets(G_kelime,500,hb2);//her satırı dosya sonuna kadar yazdır
       puts(G_kelime);
    }



    fclose(hb2);
}
if(l==3)
{
      hb3=fopen("HBSalon3.txt","r");

    char G_kelime[500];
    while(!feof(hb2))
    {
       fgets(G_kelime,500,hb3);//her satırı dosya sonuna kadar yazdır
       puts(G_kelime);
    }



    fclose(hb3);
}



break;




    case 'F':
        case 'f':
           do
            {
                printf("\nVizyondaki filmler :");
    printf("\n%s\n%s\n%s",rd[1].film,gr[1].film,bl[1].film);
    printf("\nLutfen Hangi Film izlenecek ?\nSalon 1'deki film icin 1\nSalon 2'deki film icin 2\nSalon 3'deki film icin 3? :");scanf("%d",&s);
    if(!(s>=1 && s<=3)){printf("Seciminiz icin Salon YOK !! program kapatiliyor!!!!");return 0;}
    printf("Lutfen Hangi Matinede Girecegini Belirtiniz :");scanf("%d",&m);
    ps=&s;
    pm=&m;

    switch(s)
    {
    case 1:
    for(i=0;i<50;i++)
    {
    if(rd[*pm].K_numarasi[i]==bos)
    {
        printf("*-%d-* ",i+1);
    }

    }
    printf("\nnumarali koltuklar bos birini giriniz : ");scanf("%d",&x);
    if(rd[*pm].K_numarasi[x-1]==dolu){printf("\nDolu Koltuk Sectiniz !! programdan Cikiliyor !!!!");return 0;}
    rd[*pm].K_numarasi[x-1]=dolu;

printf("Ogrenci icin 20 Tl Tam bilet icin 30 giriniz");scanf("%d",&ucret);
if(ucret==20)
{
    o_ucret[0][*pm]++;
}
else if(ucret==30)
{
    t_ucret[0][*pm]++;
}
else
{
    printf("\n yanlis deger girdiniz programdan cikiliyor !!");
    return 0;
}
printf("\nBilet alimi Tamamlandi !!");
printf("\nBilet alimina devam etmek icin E/e giriniz ana menuye donmek isterseniz M/m giriniz:");ch=getch();break;

  case 2:
      for(i=0;i<50;i++)
    {
    if(bl[*pm].K_numarasi[i]==bos)
    {
        printf("*-%d-* ",i+1);
    }

    }
    printf("\nnumarali koltuklar bos birini giriniz : ");scanf("%d",&x);
    if(bl[*pm].K_numarasi[x-1]==dolu){printf("\nDolu Koltuk Sectiniz !! programdan Cikiliyor !!!!");return 0;}
    bl[*pm].K_numarasi[x-1]=dolu;

printf("Ogrenci icin 20 Tl Tam bilet icin 30 giriniz");scanf("%d",&ucret);

if(ucret==20)
{
    o_ucret[1][*pm]++;
}
else if(ucret==30)
{
    t_ucret[1][*pm]++;
}
else
{
    printf("\n yanlis deger girdiniz programdan cikiliyor !!");
    return 0;
}
printf("\nBilet alimi Tamamlandi !!");
printf("\nBilet alimina devam etmek icin E/e giriniz ana menuye donmek isterseniz M/m giriniz:");ch=getch();
      break;
        case 3:

            for(i=0;i<50;i++)
    {
    if(gr[*pm].K_numarasi[i]==bos)
    {
        printf("*-%d-* ",i+1);
    }

    }
    printf("\nnumarali koltuklar bos birini giriniz : ");scanf("%d",&x);
    if(gr[*pm].K_numarasi[x-1]==dolu){printf("\nDolu Koltuk Sectiniz !! programdan Cikiliyor !!!!");return 0;}
    gr[*pm].K_numarasi[x-1]=dolu;

printf("Ogrenci icin 20 Tl Tam bilet icin 30 giriniz");scanf("%d",&ucret);
if(ucret==20)
{
    o_ucret[2][*pm]++;
}
else if(ucret==30)
{
    t_ucret[2][*pm]++;
}
else
{
    printf("\n yanlis deger girdiniz programdan cikiliyor !!");
    return 0;
}
printf("\nBilet alimi Tamamlandi !!");
printf("\nBilet alimina devam etmek icin E/e giriniz ana menuye donmek isterseniz M/m giriniz:");ch=getch();
            break;
}

}while('E'==ch||'e'==ch);
}
}
}
else
{
   printf("\nKulanici adi Hatasi!!");return 0 ;
}

    if(strcmp(G_sifre,d))
{
    printf("\nSifre hatali");return 0 ;
}

 hb1=fopen("HBSalon1.txt","r+");



   for(i=0;i<5;i++)
{
   fprintf(hb1,"1.salon (RED) %d Matinedeki Ogrenci Hasilati :%d\n",i+1,20*o_ucret[0][i]);

}
for(i=0;i<5;i++)
{
   fprintf(hb1,"1.salon (RED) %d Matinedeki Tam Hasilati :%d\n",i+1,20*t_ucret[0][i]);
}
for(i=0;i<5;i++)
{
   fprintf(hb1,"1.salon (RED) %d Matinedeki Tam Bilet Sayisi :%d\n",i+1,t_ucret[2][i]);
}
for(i=0;i<5;i++)
{
   fprintf(hb1,"1.salon (RED) %d Matinedeki Ogrenci Sayisi :%d\n",i+1,o_ucret[0][i]);
}
for(i=0;i<5;i++)
{
   fprintf(hb1,"1.salon (RED) %d Matinedeki Tam Bilet Sayisi :%d\n",i+1,t_ucret[0][i]);
}

    fprintf(hb1,"1.salon (RED) Toplam Ogrenci Hasilati :%d",20*(o_ucret[0][0]+o_ucret[0][1]+o_ucret[0][2]+o_ucret[0][3]+o_ucret[0][4]));
    fprintf(hb1,"\n1.salon (RED) Toplam Tam Hasilati :%d",20*(t_ucret[0][0]+t_ucret[0][1]+t_ucret[0][2]+t_ucret[0][3]+t_ucret[0][4]));
    fprintf(hb1,"\n1.salon (RED) Toplam Satilan Ogrenci Bileti Sayisi:%d",(o_ucret[0][0]+o_ucret[0][1]+o_ucret[0][2]+o_ucret[0][3]+o_ucret[0][4]));
    fprintf(hb1,"\n1.salon (RED) Toplam Tam Satilan Tam Bilet Sayisi:%d",(t_ucret[0][0]+t_ucret[0][1]+t_ucret[0][2]+t_ucret[0][3]+t_ucret[0][4]));


fclose(hb1);
 hb2=fopen("HBSalon2.txt","r+");



   for(i=0;i<5;i++)
{
   fprintf(hb2,"2.salon (BLUE) %d Matinedeki Ogrenci Hasilati :%d\n",i+1,20*o_ucret[1][i]);

}
for(i=0;i<5;i++)
{
   fprintf(hb2,"2.salon (BLUE) %d Matinedeki Ogrenci Sayisi :%d\n",i+1,o_ucret[1][i]);
}
for(i=0;i<5;i++)
{
   fprintf(hb2,"2.salon (BLUE) %d Matinedeki Tam Bilet Sayisi :%d\n",i+1,t_ucret[1][i]);
}
for(i=0;i<5;i++)
{
   fprintf(hb2," 2.salon (BLUE) %d Matinedeki Tam Hasilati :%d\n",i+1,20*t_ucret[1][i]);
}
    fprintf(hb2,"\n 2.salon (BLUE) Toplam Ogrenci Hasilati :%d",20*(o_ucret[1][0]+o_ucret[1][1]+o_ucret[1][2]+o_ucret[1][3]+o_ucret[1][4]));
    fprintf(hb2,"\n 2.salon (BLUE)  Toplam Tam Hasilati :%d",20*(t_ucret[1][0]+t_ucret[1][1]+t_ucret[1][2]+t_ucret[1][3]+t_ucret[1][4]));
    fprintf(hb2,"\n 2.salon (BLUE) Toplam Satilan Ogrenci Bileti Sayisi :%d",(o_ucret[1][0]+o_ucret[1][1]+o_ucret[1][2]+o_ucret[1][3]+o_ucret[1][4]));
    fprintf(hb2,"\n 2.salon (BLUE)  Toplam Tam Satilan Tam Bilet Sayisi :%d",(t_ucret[1][0]+t_ucret[1][1]+t_ucret[1][2]+t_ucret[1][3]+t_ucret[1][4]));

fclose(hb2);
 hb3=fopen("HBSalon3.txt","r+");


for(i=0;i<5;i++)
{
   fprintf(hb3,"3.salon (GREEN) %d Matinedeki Ogrenci Hasilati :%d\n",i+1,20*o_ucret[2][i]);

}
for(i=0;i<5;i++)
{
   fprintf(hb3," 3.salon (GREEN) %d Matinedeki Tam Hasilati :%d\n",i+1,20*t_ucret[2][i]);
}
for(i=0;i<5;i++)
{
   fprintf(hb3,"3.salon (GREEN) %d Matinedeki Ogrenci Sayisi :%d\n",i+1,o_ucret[2][i]);
}
for(i=0;i<5;i++)
{
   fprintf(hb3,"3.salon (GREEN) %d Matinedeki Tam Bilet Sayisi :%d\n",i+1,t_ucret[2][i]);
}
fprintf(hb3,"\n 3.salon (GREEN) Toplam Ogrenci Hasilati :%d",20*(o_ucret[2][0]+o_ucret[2][1]+o_ucret[2][2]+o_ucret[2][3]+o_ucret[2][4]));
fprintf(hb3,"\n 3.salon (GREEN) Toplam Tam Hasilati :%d",20*(t_ucret[2][0]+t_ucret[2][1]+t_ucret[2][2]+t_ucret[2][3]+t_ucret[2][4]));
fprintf(hb3,"\n 3.salon (GREEN) Toplam Tam Satilan Tam Bilet Sayisi :%d",(t_ucret[2][0]+t_ucret[2][1]+t_ucret[2][2]+t_ucret[2][3]+t_ucret[2][4]));
fprintf(hb3,"\n 3.salon (GREEN) Toplam Ogrenci Bileti Sayisi :%d",(o_ucret[2][0]+o_ucret[2][1]+o_ucret[2][2]+o_ucret[2][3]+o_ucret[2][4]));

fclose(hb3);


}while((ch=='m'||ch=='M')&&(ch!='H'||ch!='h'));
printf("yanlis karakter girdiniz Programdan Cikiliyor");
}








