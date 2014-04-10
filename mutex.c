#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *countFunction();
pthread_mutex_t mutex1=PTHREAD_MUTEX_INITIALIZER; //define mutex variable
int counter = 0;

int main(){
    
    exit(0);
}

void *countFunction(){
    pthread_exit(NULL);
}