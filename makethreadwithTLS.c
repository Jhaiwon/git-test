#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void printsum();
void* calcThread(void *param);

static __thread int tsum=5;

int total=0;

int main(){
    char *p[2]={"100","200"};
    int i;
    pthread_t tid[2];
    pthread_attr_t attr[2];

    for(i=0; i<2; i++){
        pthread_attr_init(&attr[i]);
        pthread_create(&tid[i],&attr[i],calcThread,p[i]);
        printf("calcThread 스레드가 생성되었습니다.\n");
    }

    for(i=0;i<2;i++){
        pthread_join(tid[i],NULL);
        printf("calcThread 스레드가 종료하였습니다.\n");
    }
    printf("total=%d\n",total);
    return 0;
}

void* calcThread(void *param){
    printf("스레드 생성 초기 tsum=%d\n",tsum);

    int i, sum=0;
    for(i=1;i<=atoi(param); i++) sum +=i;

    tsum=sum;
    printsum();
    total +=sum;

}

void printsum(){
    printf("계산 후 tsum=%d\n",tsum);
}