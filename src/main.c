//VGA memmory address 0xB8000
void writechar32() {
	char *p_vga_memmory_address = 0xB8000;

	p_vga_memmory_address[0] = 'A';
	p_vga_memmory_address[0] = 0x0F42;

}


//main fn.
void kernel_main(void) {

writechar32();


}
