#include"../../include/fast_io_device.h"

int main()
{
	fast_io::obuf obuf(u8"file_hello_world.txt");
	println(obuf,u8"Hello World!");
}