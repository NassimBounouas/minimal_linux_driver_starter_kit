#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

#define LICENSE "GPL"
#define AUTHOR "Nassim Bounouas"
#define DESC "Minimal driver structure"

int init_module(void)
{
	printk(KERN_INFO "Module loaded\n");
	return  0;
}
   
void cleanup_module(void)
{
	printk(KERN_INFO "Module unloaded\n");
	return;
}

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESC);
