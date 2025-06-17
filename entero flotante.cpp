    #include <stdio.h>
    
    
     int  l[10],x;
     float f[10];
     int main(void){
     printf("\t\tentero\t\tflotante\n\n");
      for(x=0;x<10; x++){
         printf("elemento %d:\t%d\t\t%d\n", x, &l [x], &f [x]);
     }
     return 0;
  }   