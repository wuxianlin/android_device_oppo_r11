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
	{ 0x5ab4496e, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_free) },
	{ 0xc3c77f8d, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_init) },
	{ 0x8c242cd9, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_close) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x51a9a658, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xf23a08e3, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read_user) },
	{ 0x1d6b307, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa9db7ccf, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_dispose) },
	{ 0xe60d865f, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_write) },
	{ 0x968679ce, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x81da6e5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7693c754, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7caa224e, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x68338e17, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_start) },
	{ 0xb7a60dae, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_next) },
	{ 0xab56e804, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_avail) },
	{ 0x40d904ad, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6c10ba33, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9510a851, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_flush) },
	{ 0xa7b76181, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

