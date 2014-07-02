#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
static int __init hello_init(void)
{
pr_alert("Good morrow");
pr_alert("to this fair assembly.\n");
return 0;
}
static void __exit hello_exit(void)
{
pr_alert("Alas, poor world, what treasure");
pr_alert("hast thou lost!\n");
}
module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Greeting module");
MODULE_AUTHOR("William Shakespeare");





/*
#include<linux/module.h>
#include<linux/kernel.h>


static int __init initmymodule(void)
{

printk(KERN_INFO "hello world 1 \n");

return 0;

}

static void  __exit  cleanupmymodule(void)
{

printk(KERN_INFO "good bye...\n");

}

module_init(initmymodule);
module_exit(cleanupmymodule);
MODULE_AUTHOR("Elango Palanisamy");
MODULE_LICENSE("GPL");
*/


/*
#include <linux/module.h>
#include <linux/kernel.h>

 void __exit clean(void)
{

printk(KERN_INFO "ta ta bye  bye ...:)   \n");


}


 int __init start(void)
{

printk(KERN_INFO "hai ela ...  \n");

return 0;
}

module_init(start);
module_exit(clean);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Someone Like You");

*/




