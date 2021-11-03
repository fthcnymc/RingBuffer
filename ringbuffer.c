#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _ringbuff{
    int *buffer;
    int read_index;
    int write_index;
    int buff_capacity;
}ringbuff;

void push_to_ringbuff(ringbuff *f, int push_to_value){
    f->buffer[f->write_index] = push_to_value;
    f->write_index++;
    if(0 == f->write_index)
        f->write_index = 0; 
}

int pop_from_ringbuff(ringbuff *f,int *pop_val){

    if(f->read_index == f->write_index)
        return -1;
    *pop_val = f->buffer[f->read_index];
    f->read_index++;
    if(0 == f->read_index)
        f->read_index = 0;
    return 0;
}

void ringbuff_init(ringbuff *f, int capacity){
    f->buffer = calloc(capacity,sizeof(int));
    f->write_index = 0;
    f->read_index = 0;
}

void ringbuff_reset_values(ringbuff *f){
    memset(f,0,f->buff_capacity);
}

void ringbuff_free(ringbuff *f){
    free(f->buffer);
}




void main(){}
