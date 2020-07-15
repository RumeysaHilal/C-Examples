#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,j,kac,dizi[20],k;
kac=20;

   srand(time(NULL)); //Random fonksiyonunu kullanırken her seferinde farklı sayı çıkması için böyle bir yöntem kullandım.
     for(i=0;i<kac;i++){ //Dizinin uzunluğu kadar dizinin içine random sayı ataması için böyle bir döngü kurdum.
     	dizi[i]=rand()%20;
     	printf(" %d",dizi[i]);
	 }
   for(i=0;i<kac;i++){ //Bubble sort gibi yaparak sayıların tekrar edilip edilmediğini kontrol ettim.
   	for(j=i+1;j<kac;j++){
   		if(dizi[i]==dizi[j]){ //Eşit oldukları zaman bir üstteki sayıya eşitleyerek diğer indisleri boşalttım.
   			for(k=j;k<kac;k++)
   			    dizi[k]=dizi[k+1];
		 kac--;  //İndis sayısını azaltmış oldum.
		   }
	   }
   }
printf(" \n\n");
for (i=0;i<kac;i++){ //Azaltılan indis sayısına kadar gidip farklı sayıları yazdırmasını sağladım.
	printf(" %d",dizi[i]);
}
}
