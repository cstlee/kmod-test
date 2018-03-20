#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("ISC");
MODULE_AUTHOR("Collin Lee");
MODULE_DESCRIPTION("A simple test kernel module.");
MODULE_VERSION("0.1");

static int __init hello_init(void) {
    printk(KERN_INFO, "KMT: Hello world.");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO, "KMT: Goodbye world.");
}

module_init(hello_init);
module_exit(hello_exit);
