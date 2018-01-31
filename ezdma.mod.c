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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1bfd809d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x29ce7956, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x80b1cd59, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x110cf8a0, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd4d7708e, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x41f3a59a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb2ccde2e, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb717ec16, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7cc1d3cd, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x2f30d584, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2361b66a, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x3f32f282, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x5620977e, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xce9cc39c, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x3a717212, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2d5484b4, __VMLINUX_SYMBOL_STR(of_property_read_string_helper) },
	{ 0x5cd79e0d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x548cb12f, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x68ebbd2a, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xab6ec41f, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cezdma");
MODULE_ALIAS("of:N*T*CezdmaC*");

MODULE_INFO(srcversion, "A2908106CDEB57F40D5BFD7");
