/*************************************************************************
	> File Name: test.c
	> Author: jerboa
	> Mail: a.jerboa@gmail.com
	> Created Time: 2013年09月24日 星期二 10时57分24秒
 ************************************************************************/

//#include <stdio.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include "Add.h"
//extern int add_integar(int,int);
//extern int sub_integar(int,int);

int result(void)
{
	int a,b;
	a = add_integar(1,1);
//	b = sub_integar(3,3);

	printk(KERN_INFO "a=%d\n",a);
//	printk(KERN_INFO "b=%d\n",b);

	return 0;
}

static int __init proc_init(void)
{
	printk(KERN_INFO "mod_2 insert.\n");
	result();
	return 0;
}

static void __exit proc_exit(void)
{
	printk(KERN_INFO "mod_2 exit.\n");
}

module_init(proc_init);
module_exit(proc_exit);

MODULE_LICENSE("GPL");
