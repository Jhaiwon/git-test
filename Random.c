#include <stdio.h>
#include <pthread.h>

void *thread_func(void *arg) {
    int i;
    int *tsum = (int *)arg;
    int total = 0;

    for (i = 0; i < 100; i++) {
        total += i;
    }

    *tsum = total;

    printf("tsum = %d\n", *tsum);
}

int main() {
    pthread_t tid;
    int tsum;

    pthread_create(&tid, NULL, thread_func, &tsum);
    pthread_join(tid, NULL);

    printf("total = %d\n", tsum);

    return 0;
}