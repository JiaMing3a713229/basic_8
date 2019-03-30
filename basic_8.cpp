#include<stdio.h>
#include<stdlib.h>
int main(void){
	int factor=2;  //從2開始除，判斷是否為質數，factor為因數 
	int n;    //1-n個質數 
	printf("1-n質數，請輸入n:");//顯示至螢幕 
	scanf("%d、",&n);           //key in 
	for(int i=2;i<=n;i++){      //執行2-n的循環 
		if(i==2){               //2是質數 
			printf("%d",i);
			printf(" ");
			continue;
		}
		while(i%factor!=0&&factor<=i){  //當i%factor!=0及factor<=0都成立時循環 
			factor+=1;    //factor+1			
			if(factor/i==1){  //因數只有本身為質數 
				printf("%d",i);
				printf(" ");
				factor=2;
				break;
			} 
			if(i%factor==0){ //因數有其他數字不為質數 
				factor=2;
				break;
			}	
		}
	}
	system("pause");
	return 0;
}
