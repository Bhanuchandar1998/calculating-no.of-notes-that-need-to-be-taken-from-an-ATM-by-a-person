#include <stdio.h>

int main() {
    int five=100,twoh=100,hun=100,twot=100;
    int amount,total;
     while(1){
    scanf("%d",&amount);
    if(amount==0)
    return 0;
    int i=0,j=0,k=0,l=0;
  total=five*500+twoh*200+hun*100+twot*2000;
    if(amount>total){
        printf("insufficient balance");
    }
    else{
        if(amount/2000<twot){
            i=amount/2000;
            twot=twot-i;
            amount-=i*2000;
        }
        if(amount/500<five){
            j=amount/500;
            five=five-j;
            amount-=j*500;
        }
         if(amount/200<twoh){
            k=amount/200;
            twoh=twoh-k;
            amount-=k*200;
        }
         if(amount/500<hun){
            l=amount/100;
            hun=hun-l;
            amount-=l*100;
        }
        
        if(amount>0)
        printf("insufficient");
        else
        printf("2000:%d 500:%d 200:%d 100:%d",i,j,k,l);
    }
    }
	return 0;
}
