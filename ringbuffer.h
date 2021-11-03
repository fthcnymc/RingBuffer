#ifndef RINGBUFFER_H
#define RINGBUFFER_H

void push_to_ringbuff(ringbuff, int);

int pop_from_ringbuff(ringbuff,int);

void ringbuff_init(ringbuff, int);

void ringbuff_reset_values(ringbuff);

void ringbuff_free(ringbuff);

#endif