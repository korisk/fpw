//==========================================
// kernel_api.c
#include <linux/slab.h>
#include <linux/module.h>
void *my_alloc(size_t s) {
	return kmalloc(s, GFP_KERNEL);
}
void my_free(void *p) {
	return kfree(p);
}
