#include <stdio.h>
int main(){
	int i,j,a[4][3]={{2,1,0},{1,4,3},{5,3,0},{8,8,3}};
	int yedek ,kontrol;
	for (kontrol=0;kontrol<12;kontrol++){
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>a[i][j+1]){
				yedek=a[i][j];
				a[i][j]=a[i][j+1];
				a[i][j+1]=yedek;
			}
		}
	}}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf(" %d",a[i][j]);
		} 
		printf("\n");
	}
	
	
	
}
