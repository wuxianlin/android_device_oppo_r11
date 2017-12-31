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
	{ 0x3965daed, __VMLINUX_SYMBOL_STR(mpq_streambuffer_data_avail) },
	{ 0x85dd7bb2, __VMLINUX_SYMBOL_STR(mpq_streambuffer_flush) },
	{ 0xc5e9c169, __VMLINUX_SYMBOL_STR(ion_import_dma_buf) },
	{ 0xc3c77f8d, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_init) },
	{ 0x10af0199, __VMLINUX_SYMBOL_STR(mpq_streambuffer_get_data_rw_offset) },
	{ 0x99b4e157, __VMLINUX_SYMBOL_STR(mpq_streambuffer_terminate) },
	{ 0x27a13e09, __VMLINUX_SYMBOL_STR(mpq_streambuffer_init) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xab9db7cb, __VMLINUX_SYMBOL_STR(ion_unmap_kernel) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x39703e24, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xc647c7cc, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x416f41c4, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x7a4333a1, __VMLINUX_SYMBOL_STR(mpq_streambuffer_pkt_dispose) },
	{ 0xefa45cfc, __VMLINUX_SYMBOL_STR(mpq_streambuffer_metadata_free) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x6f189d7a, __VMLINUX_SYMBOL_STR(ion_free) },
	{ 0x13f23090, __VMLINUX_SYMBOL_STR(mpq_streambuffer_data_write) },
	{ 0xc382b59b, __VMLINUX_SYMBOL_STR(dvb_dmx_get_pattern) },
	{ 0x70fac94b, __VMLINUX_SYMBOL_STR(ion_handle_get_size) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x1d6b307, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xbeab943d, __VMLINUX_SYMBOL_STR(mpq_adapter_unregister_stream_if) },
	{ 0x6fd176df, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x517996c8, __VMLINUX_SYMBOL_STR(mpq_adapter_get) },
	{ 0x7f0216f0, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x8a20b0b8, __VMLINUX_SYMBOL_STR(mpq_adapter_get_stream_if) },
	{ 0x907a28f9, __VMLINUX_SYMBOL_STR(msm_ion_do_cache_op) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x462ca85e, __VMLINUX_SYMBOL_STR(dvbdmx_ts_reset_pes_state) },
	{ 0x7a63e42f, __VMLINUX_SYMBOL_STR(ion_share_dma_buf_fd) },
	{ 0xba05683b, __VMLINUX_SYMBOL_STR(ion_map_kernel) },
	{ 0x254b252b, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x81da6e5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7693c754, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x30cd96, __VMLINUX_SYMBOL_STR(mpq_streambuffer_pkt_write) },
	{ 0x2d192b01, __VMLINUX_SYMBOL_STR(dvb_dmx_video_pattern_search) },
	{ 0xe970ef5f, __VMLINUX_SYMBOL_STR(ion_handle_get_flags) },
	{ 0x83e5791d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xd863fc0a, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_format) },
	{ 0x1ca2fe5f, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5bdfc1ff, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x9cddae87, __VMLINUX_SYMBOL_STR(ion_alloc) },
	{ 0x7caa224e, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x4b63b4b5, __VMLINUX_SYMBOL_STR(dvb_dmx_notify_section_event) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa0e13006, __VMLINUX_SYMBOL_STR(mpq_adapter_register_stream_if) },
	{ 0x5d3b0128, __VMLINUX_SYMBOL_STR(ion_sg_table) },
	{ 0xab56e804, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_avail) },
	{ 0x1dbf0d40, __VMLINUX_SYMBOL_STR(mpq_streambuffer_get_buffer_handle) },
	{ 0x2776630a, __VMLINUX_SYMBOL_STR(qseecom_send_command) },
	{ 0x98a916d3, __VMLINUX_SYMBOL_STR(mpq_streambuffer_data_free) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbb4f4766, __VMLINUX_SYMBOL_STR(simple_write_to_buffer) },
	{ 0x177861d0, __VMLINUX_SYMBOL_STR(ion_phys) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x5d9d8c5b, __VMLINUX_SYMBOL_STR(mpq_streambuffer_data_write_deposit) },
	{ 0x5720c519, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x26714f2f, __VMLINUX_SYMBOL_STR(ion_client_destroy) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfac72b5a, __VMLINUX_SYMBOL_STR(qseecom_start_app) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xaf62a7c2, __VMLINUX_SYMBOL_STR(qseecom_shutdown_app) },
	{ 0x6197d62f, __VMLINUX_SYMBOL_STR(msm_ion_client_create) },
	{ 0xba6e7738, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mpq-adapter";

