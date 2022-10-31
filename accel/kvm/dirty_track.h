#ifndef KERNEL_MODULE
#define KERNEL_MODULE
#include <linux/ioctl.h>

typedef struct
{
    unsigned long vpn, pfn;
	int pid;
	int dirty;
	int referenced;
	KVMSlot *slot;
	struct kvm_dirty_log *log;
} query_arg_t;

#define IOCTL_GET_DIRTY_BITMAP _IOWR('q', 1, query_arg_t *)
#define IOCTL_CLEAR_BITS _IOWR('q', 2, query_arg_t *)
#endif
