#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct bus_s - variable -args, file, line content
 * @arg: argument
 * @file: monty file pointer.
 * @content: line contents.
 * @lifi: flag change.
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;

int main(int argc, char *argv[]);
void f_push(stack_t **head, unsigned int count);
void addnode(stack_t **head, int a);
void free_stack(stack_t *head);
void queue(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void f_div(stack_t **head, unsigned int count);
ssize_t _getline(char **linepoint, size_t *p, FILE *stream);
void f_add(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void f_mod(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_pall(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pint(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
#endif
