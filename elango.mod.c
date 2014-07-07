#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0xa60b9ee, "module_layout" },
	{ 0x4f605695, "device_unregister" },
	{ 0xc2a80510, "class_destroy" },
	{ 0xe56368a0, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x14b4d91a, "driver_unregister" },
	{ 0x63f40e31, "spi_add_device" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x84493442, "bus_find_device_by_name" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7a3841fd, "put_device" },
	{ 0xd627ee81, "spi_alloc_device" },
	{ 0x444f1067, "spi_busnum_to_master" },
	{ 0xeb37cbde, "spi_register_driver" },
	{ 0x2c28632b, "device_create" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x532bdb3a, "cdev_del" },
	{ 0x44e7643d, "__class_create" },
	{ 0x3afdbb64, "cdev_add" },
	{ 0x12bee511, "cdev_init" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x27e1a049, "printk" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x91715312, "sprintf" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xfadeeeac, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x82f776b7, "gpio_export" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x9bf67b84, "kmem_cache_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc9f5df35, "up" },
	{ 0x695b2cfd, "down_interruptible" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9E3291BB833FDBCFE463240");
