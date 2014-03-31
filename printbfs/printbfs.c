/*************************************************************************
	> File Name: printbfs.c
	> Author: jerboa
	> Mail: a.jerboa@gmail.com
	> Created Time: 2013年09月23日 星期一 16时31分04秒
 ************************************************************************/

//#include <stdio.h>
#include <linux/init.h>
#include <linux/module.h>
//#include <linux/moduleparam.h> /*  wo don't need it anymore,just include <linux/sched.h>*/
#include <linux/kernel.h>
#include <linux/sched.h>
//#include <uapi/linux/sched.h>       /*  wo don't need it anymore,just include <linux/sched.h>*/

static int __init proc_init(void)
{
	int ret=0;
	extern void print_scheduler_version(void);
	printk(KERN_INFO "bfs dect insert.\n");
	print_scheduler_version();
	return ret;
}

static void __exit proc_exit(void)
{
	printk(KERN_INFO "bfs dect exit.\n");
}

module_init(proc_init);
module_exit(proc_exit);

//MODULE_DESCRIPTION("bfs ver.");
//MODULE_VERSION("v1.0.");
//MODULE_AUTHOR("jerboa.");
MODULE_LICENSE("GPL");
