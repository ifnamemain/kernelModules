/*
 * hello-l.c - The simplest kernel module
 */
#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void){
    printk(KERN_INFO "Hello world l.\n");
    /*
     * A non 0 return means init_module failed; module can't be loaded.
     */
    return 0;
}

void cleanup_module(void){
    printk(KERN_INFO "Goodbye world l.\n");
}
