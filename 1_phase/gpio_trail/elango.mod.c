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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x82f776b7, "gpio_export" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x93b9f771, "__register_chrdev" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B39E86A13BCD6FDD76B2E97");
