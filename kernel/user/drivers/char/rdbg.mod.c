#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7d9b27cf, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xb113824f, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xab185887, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x8edfab07, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xc8be1060, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7c2a668, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x654a7522, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xdd5162b1, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7693c754, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xabf42529, __VMLINUX_SYMBOL_STR(smem_find) },
	{ 0x9cd04e54, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x84e51131, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa799b68, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x2091bb6b, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8e24979f, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x2e7d49c1, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0xf79e2768, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x1d6b307, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x83e5791d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xae1bc522, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

