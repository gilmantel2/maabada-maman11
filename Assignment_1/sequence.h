#ifndef SEQUENCE_H
#define SEQUENCE_H

enum order {NONE, STRICTLY_INCREASING, INCREASING, STRAIGHT, NON_MONOTONE,DECREASING,STRICTLY_DECREASING};
enum order f_sequence(char const sequence[]);

#endif // SEQUENCE_H
