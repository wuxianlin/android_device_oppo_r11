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
	{ 0xe211093e, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xddf91d21, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xc647c7cc, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc55f17f4, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x103fe816, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x23f27d1d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x8480c714, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb68ea30e, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x1d6b307, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9283a9af, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x3e2202ee, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x81da6e5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7693c754, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4b34bb8, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x4191d683, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf370512d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x83e5791d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa1936704, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xdab88dc, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x9fd9a70a, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x9372d7af, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x403ba62b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xeaf5b1db, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x2d6dcf8f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x774f97c, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xd447706d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x81ee392a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x706d8eab, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x8a65aad, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x403df269, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb2daabfc, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xca318f18, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x79737197, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xefe93746, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x26d0ed11, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x4b7b11a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xe3d06000, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x393962c, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x7329dcaa, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xa0de567, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4d143dc8, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F5C20D78E083AA5A11E6F23");
