#include<stdio.h>
#include<stdlib.h>
int main(void){
	int factor=2;  //�q2�}�l���A�P�_�O�_����ơAfactor���]�� 
	int n;    //1-n�ӽ�� 
	printf("1-n��ơA�п�Jn:");//��ܦܿù� 
	scanf("%d�B",&n);           //key in 
	for(int i=2;i<=n;i++){      //����2-n���`�� 
		if(i==2){               //2�O��� 
			printf("%d",i);
			printf(" ");
			continue;
		}
		while(i%factor!=0&&factor<=i){  //��i%factor!=0��factor<=0�����߮ɴ`�� 
			factor+=1;    //factor+1			
			if(factor/i==1){  //�]�ƥu����������� 
				printf("%d",i);
				printf(" ");
				factor=2;
				break;
			} 
			if(i%factor==0){ //�]�Ʀ���L�Ʀr������� 
				factor=2;
				break;
			}	
		}
	}
	system("pause");
	return 0;
}
