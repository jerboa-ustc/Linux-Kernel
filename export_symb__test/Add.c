/*************************************************************************
	> File Name: Add.c
	> Author: jerboa
	> Mail: a.jerboa@gmail.com
	> Created Time: 2013年09月24日 星期二 10时49分21秒
 ************************************************************************/

//#include <stdio.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include "Add.h"

int add_integar(unsigned int a,unsigned int b)
{
	int sum = a^b;
	int carry = a&b;
	printk(KERN_INFO "a+b = %u+%u\n",a,b);
	while(carry!=0)
	{
		a = sum;
		b = carry << 1;
		sum = a+b;
		carry = a&b;
	}

	return sum;
}
EXPORT_SYMBOL(add_integar);

/*
int sub_integar(unsigned int a,unsigned int b)
{
	printk(KERN_INFO "a-b = %u-%u\n",a,b);
	return add_integar(a,-b);
}
EXPORT_SYMBOL(sub_integar);
*/

/*
static int __init proc_init(void)
{
	printk(KERN_INFO "mod_1 insert.\n");
	return 0;
}

static void __exit proc_exit(void)
{
	printk(KERN_INFO "mod_1 exit.\n");
}

module_init(proc_init);
module_exit(proc_exit);
*/
MODULE_LICENSE("GPL");
