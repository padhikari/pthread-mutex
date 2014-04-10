#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *countFunction();
pthread_mutex_t mutex1=PTHREAD_MUTEX_INITIALIZER; //define mutex variable
int counter = 0;

int main(){
    
    pthread_t thread1,thread2;
    
    //create thread1 and thread2
    pthread_create(&thread1,NULL,&countFunction,NULL);
    pthread_create(&thread2,NULL,&countFunction,NULL);
    
    //wait until both thread will finish their routines
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    
    exit(0);
}

void *countFunction(){
    pthread_exit(NULL);
}