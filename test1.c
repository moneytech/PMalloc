#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#define EHEAP_START_ADDRESS 0xf0000000
#define EHEAP_SIZE 0x10000000 
int main()
{

	// char *addr;
	// addr = mmap((void*)EHEAP_START_ADDRESS, EHEAP_SIZE, PROT_READ | PROT_WRITE,
 //                 MAP_ANONYMOUS | MAP_PRIVATE | MAP_FIXED, -1, 0);
 //    if (addr == MAP_FAILED)
 //        printf("mmap error\n"); 
 //    else
 //    	printf("%p\n", addr);
 //    memset((void*)EHEAP_START_ADDRESS, 1, 1024);
 //    return 1;
	int *data = malloc(1024*1024);
	int *data2 = malloc(1024*1024);
	int *data3 = malloc(1024*1024);
	memset(data2, 1, 4);
	printf("%p\n", data3);
	free(data);
	
}
