#include <stdio.h>
#define STACK_SIZE 10

typedef struct fstack
{
	int arr[STACK_SIZE];
	int cnt;
} fstack_t;

#define fstack_push(s, n)   \
	if ((s).cnt < STACK_SIZE) \
	(s).arr[(s).cnt++] = n

#define fstack_pop(s) \
	if ((s).cnt > 0)    \
	--((s).cnt)

#define fstack_init(s) (s).cnt = 0
#define fstack_empty(s) ((s).cnt == 0)
#define fstack_top(s) (s).arr[(s).cnt - 1]
#define fstack_clear(s) (s).cnt = 0

int main(void)
{
	int i;
	fstack_t st;

	fstack_init(st);
	for (i = 0; i < 10; ++i)
		fstack_push(st, i);

	while (!fstack_empty(st))
	{
		printf("%d ", fstack_top(st));
		fstack_pop(st);
	}
	return 0;
}