#ifndef SHELL_H
#define SHELL_H
#include "system.h"
#include "string.h"
#include "kb.h"
#include "screen.h"
#include "types.h"
#include "util.h"

void launch_shell(int n);

void help();
void fill_array(int arr[],int n);
void pow();
void sum();
void print_array(int arr[],int n);
int sum_array(int arr[],int n);
void multiply();
void sqrt();

#endif
