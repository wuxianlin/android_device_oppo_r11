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
	{ 0x1ed0c1e0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x543f3b49, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x7f488df0, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x44d9762e, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x77497e76, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x998ead5a, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xca24c365, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe254175e, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x16e2e708, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xf109586f, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3dec9b2d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xbf60390f, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xc94e229f, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x2ddf889d, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x13a1d890, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0x61c68e25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9033bd8a, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x8a65aad, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x24f14b92, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xe87dc8a0, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x548e2872, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x42ae4c17, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0xa28a1cb2, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xabc0c36c, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x13f0ba17, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

