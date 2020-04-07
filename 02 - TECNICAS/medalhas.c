#include <stdio.h>

int main(void){
  int T1,T2,T3;
  scanf ("%d\n",&T1);
  scanf ("%d\n",&T2);
  scanf ("%d",&T3);

  if(T1<T2 && T2<T3){
     printf("1\n");
     printf("2\n");
     printf("3\n");
     return 0;
  }

  if(T1<T3 && T3<T2){
     printf("1\n");
     printf("3\n");
     printf("2\n");
     return 0;
  }

  if(T2<T1 && T1<T3){
     printf("2\n");
     printf("1\n");
     printf("3\n");
     return 0;
  }

  if(T2<T3 && T3<T1){
     printf("2\n");
     printf("3\n");
     printf("1\n");
     return 0;
  }

  if(T3<T1 && T1<T2){
     printf("3\n");
     printf("1\n");
     printf("2\n");
     return 0;
  }

  if(T3<T2 && T2<T1){
     printf("3\n");
     printf("2\n");
     printf("1\n");
     return 0;
  }
  
  
  return 0;
} 