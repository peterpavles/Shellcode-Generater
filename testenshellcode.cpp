int main(int argc, char* argv[])
{
char shellcode[]=
"\x83\xc0\x14\x33\xc9\x8a\x1c\x08\x80\xf3\x44\x88\x1c\x08\x41\x80"
"\xfb\x91\x75\xf1\x11\xcf\xa8\xc7\xa8\x3c\x83\x01\xb4\x44\x44\x44"
"\x44\x83\x01\xa8\x44\x44\x44\x44\x83\x01\x9c\x44\x44\x44\x44\xfc"
"\x31\x44\x44\x44\x22\xcd\x01\xcc\xfd\x37\x44\x44\x44\x22\xcd\x09"
"\xce\xfe\x21\x44\x44\x44\x22\xcd\x11\xc8\xfc\x36\x44\x44\x44\x22"
"\xcd\x01\xca\xfd\x77\x44\x44\x44\x22\xcd\x09\xd4\xfe\x76\x44\x44"
"\x44\x22\xcd\x11\xd6\xfc\x6a\x44\x44\x44\x22\xcd\x01\xd0\xfd\x20"
"\x44\x44\x44\x22\xcd\x09\xd2\xfe\x28\x44\x44\x44\x22\xcd\x11\xdc"
"\xfc\x28\x44\x44\x44\x22\xcd\x01\xde\x77\x8d\x22\xcd\x09\xd8\x82"
"\x01\x84\x09\x82\x01\x85\x21\x82\x01\x86\x37\x82\x01\x87\x37\x82"
"\x01\x80\x25\x82\x01\x81\x23\x82\x01\x82\x21\x82\x01\x83\x06\x82"
"\x01\x8c\x2b\x82\x01\x8d\x3c\x82\x01\x8e\x05\x82\x01\x8f\x44\xac"
"\x64\x40\x44\x44\xcd\x01\xac\xc7\x39\xac\xbb\x31\x41\xad\x33\x45"
"\x44\x44\xcf\x11\xac\xcd\x11\xb8\xcf\x01\xb8\xcd\x01\x90\xcf\x09"
"\x90\xcf\x11\xb8\x47\x15\x78\xcd\x11\x94\xfc\x4c\x44\x44\x44\x2f"
"\x84\x44\xcf\x09\x94\xcf\x11\xb8\x47\x10\x45\x3c\xcd\x11\xb0\xcf"
"\x01\xb0\xcf\x09\xb8\x47\x0c\x64\xcd\x09\x88\xcf\x11\xb0\xcf\x01"
"\xb8\x47\x06\x58\xcd\x01\x98\xcf\x09\xb0\xcf\x11\xb8\x47\x15\x60"
"\xcd\x11\xa4\x82\x01\xf4\x08\x82\x01\xf5\x2b\x82\x01\xf6\x25\x82"
"\x01\xf7\x20\x82\x01\xf0\x08\x82\x01\xf1\x2d\x82\x01\xf2\x26\x82"
"\x01\xf3\x36\x82\x01\xfc\x25\x82\x01\xfd\x36\x82\x01\xfe\x3d\x82"
"\x01\xff\x13\x82\x01\xf8\x44\x82\x01\xe4\x03\x82\x01\xe5\x21\x82"
"\x01\xe6\x30\x82\x01\xe7\x14\x82\x01\xe0\x36\x82\x01\xe1\x2b\x82"
"\x01\xe2\x27\x82\x01\xe3\x05\x82\x01\xec\x20\x82\x01\xed\x20\x82"
"\x01\xee\x36\x82\x01\xef\x21\x82\x01\xe8\x37\x82\x01\xe9\x37\x82"
"\x01\xea\x44\x83\x01\xbc\x44\x44\x44\x44\xaf\x4d\xcf\x01\xbc\xc7"
"\x84\x45\xcd\x01\xbc\xcf\x09\xb0\xcf\x11\xbc\x7f\x15\x5c\x4b\xc7"
"\xd1\x44\x44\x44\xcf\x01\xbc\xcf\x09\x88\xcf\x11\xb8\x47\x50\xc5"
"\xcd\x11\xa0\xc9\x01\xe4\x14\xcf\x09\xa0\x15\xac\x80\x45\x44\x44"
"\xc7\x80\x4c\xc1\x84\x31\x5c\xcf\x11\xbc\xcf\x01\xa4\x4b\xf3\x48"
"\x14\xcf\x11\x98\xcf\x01\xb8\x47\x40\xce\xcd\x01\xa8\xaf\x6e\xc9"
"\x09\xf4\x15\xcf\x11\xa0\x16\xac\xdc\x45\x44\x44\xc7\x80\x4c\xc1"
"\x84\x31\x52\xcf\x01\xbc\xcf\x09\xa4\x4b\xf3\x50\x05\xcf\x01\x98"
"\xcf\x09\xb8\x47\x48\xd4\xcd\x09\xb4\xc7\x39\xa8\x44\x30\x61\xc7"
"\x39\xb4\x44\x30\x5b\xc9\x11\x84\x16\xc9\x01\xcc\x14\xbb\x11\xb4"
"\x14\xbb\x11\xa8\xcd\x01\x9c\x2e\x44\x2e\x44\x2e\x44\x2e\x44\xbb"
"\x11\x9c\xaf\x41\xad\x17\xbb\xbb\xbb\xcf\xa1\x19\x87\x88\x88\x88"
"\x88\x88\x88\x88\x11\xcf\xa8\x15\x4b\xfa\x01\x4c\xc7\xbc\x05\x38"
"\x56\x4b\xfa\x09\x4c\xc7\xbd\x1e\x3b\x4d\x83\x01\xb8\x45\x44\x44"
"\x44\xaf\x43\x83\x01\xb8\x44\x44\x44\x44\xcf\x01\xb8\xcf\xa1\x19"
"\x87\x88\x88\x88\x11\xcf\xa8\x15\x4b\xf2\x01\x4c\x14\xac\x86\xbb"
"\xbb\xbb\xc7\x80\x40\xc1\x84\x30\x48\x4b\xfa\x09\x4c\xc7\x85\x64"
"\xcd\x09\xb8\xaf\x43\x4b\xfa\x11\x4c\xcd\x11\xb8\xce\x01\xb8\xcf"
"\xa1\x19\x87\x88\x11\xcf\xa8\x15\x83\x01\xb8\x44\x44\x44\x44\xcf"
"\x01\xb8\xcf\x09\x4c\x4b\xf3\x50\x05\xc1\x96\x30\x4f\xcf\x01\xb8"
"\xc7\x84\x45\xcd\x01\xb8\xaf\xa3\xcf\x01\xb8\xcf\xa1\x19\x87\x88"
"\x88\x88\x88\x88\x11\xcf\xa8\xc7\xa8\x4c\xfc\x45\x44\x44\x44\x2f"
"\x84\x44\xcf\x09\x48\xce\x50\x45\xcc\x11\xb9\x4b\xf2\x01\xb9\x14"
"\xac\x3b\xbb\xbb\xbb\xc7\x80\x40\xcc\x01\xba\xcf\x09\x48\xc7\x85"
"\x46\xcd\x09\x48\x4b\xfa\x11\xba\xc1\x96\x31\x41\xcf\x01\x4c\xaf"
"\x2b\xcf\x01\x48\x14\xac\xce\xbb\xbb\xbb\xc7\x80\x40\xcd\x01\xbc"
"\xfd\x45\x44\x44\x44\x2f\x8d\x44\xcf\x11\x4c\xce\x40\x4e\xcc\x01"
"\xb8\x4b\xf2\x09\xb8\x15\xac\x7d\xbb\xbb\xbb\xc7\x80\x40\xcc\x01"
"\xbb\xcf\x11\x4c\xc7\x86\x46\xcd\x11\x4c\x4b\xfa\x01\xbb\xc1\x84"
"\x31\x40\x77\x84\xaf\x6e\x4b\xfa\x09\xbb\x4b\xfa\x11\xba\x7f\x8e"
"\x31\xfa\xcf\x01\xbc\x14\xcf\x09\x48\x15\xcf\x11\x4c\x16\xac\xc5"
"\x44\x44\x44\xc7\x80\x48\xc1\x84\x31\xe2\xcf\x01\x4c\xc7\xac\x46"
"\xcf\xa1\x19\x87\x11\xcf\xa8\xc7\xa8\x4c\x12\xcf\x01\x4c\xce\x4c"
"\xcc\x09\xbb\xcf\x11\x4c\xc7\x86\x45\xcd\x11\x4c\xcf\x01\x48\xce"
"\x4c\xcc\x09\xba\xcf\x11\x48\xc7\x86\x45\xcd\x11\x48\x4b\xf2\x01"
"\xbb\x14\xac\xf9\xba\xbb\xbb\xc7\x80\x40\x4b\xfa\xb4\x4b\xf2\x09"
"\xba\x15\xac\xe9\xba\xbb\xbb\xc7\x80\x40\x4b\xfa\x94\x6f\xb6\xcd"
"\x31\xbc\x31\x54\x4b\xfa\x01\xbb\xc1\x84\x30\x4c\x4b\xfa\x09\xba"
"\xc1\x8d\x31\xe3\xcf\x01\xbc\x1a\xcf\xa1\x19\x87\x88\x88\x88\x88"
"\x88\x88\x88\x88\x11\xcf\xa8\xc7\xa8\x4c\x12\xcf\x01\x54\xc7\xac"
"\x45\xcd\x01\x54\xfd\x45\x44\x44\x44\x2f\x8d\x44\xcf\x11\x4c\xce"
"\x40\x4e\xcc\x01\xbb\xcf\x09\x4c\xc7\x85\x46\xcd\x09\x4c\xfe\x45"
"\x44\x44\x44\x2f\x96\x44\xcf\x01\x48\xce\x48\x54\xcc\x09\xba\xcf"
"\x11\x48\xc7\x86\x46\xcd\x11\x48\x4b\xf2\x01\xbb\x14\xac\x76\xba"
"\xbb\xbb\xc7\x80\x40\x4b\xfa\xb4\x4b\xf2\x09\xba\x15\xac\x66\xba"
"\xbb\xbb\xc7\x80\x40\x4b\xfa\x94\x6f\xb6\xcd\x31\xbc\x31\x52\x4b"
"\xfa\x01\xbb\xc1\x84\x30\x4a\x4b\xfa\x09\xba\xc1\x8d\x30\x42\xc7"
"\x39\x54\x44\x33\xc2\xcf\x01\xbc\x1a\xcf\xa1\x19\x87\x88\x88\x88"
"\x88\x88\x88\x88\x11\xcf\xa8\xc7\xa8\x48\xcf\x01\x48\xcd\x01\xbc"
"\xcf\x09\x4c\xcd\x09\xb8\xcf\x11\x54\xcd\x11\xb0\xcf\x01\x54\xc7"
"\xac\x45\xcd\x01\x54\xc7\x39\xb0\x44\x30\x5a\xcf\x09\xb8\xcf\x11"
"\xbc\xce\x46\xcc\x45\xcf\x09\xb8\xc7\x85\x45\xcd\x09\xb8\xcf\x11"
"\xbc\xc7\x86\x45\xcd\x11\xbc\xaf\x89\xcf\x01\x4c\xcf\xa1\x19\x87"
"\x88\x88\x88\x88\x11\xcf\xa8\xc5\xa8\x78\x46\x44\x44\x83\x01\xb4"
"\xbb\xbb\xbb\xbb\x20\xe5\x74\x44\x44\x44\xcd\x01\x88\xcf\x09\x88"
"\xcf\x15\x48\xc7\x86\x50\xcd\x11\xa8\xcf\x01\xa8\xcf\x4c\xcd\x09"
"\xbc\xfe\x2f\x44\x44\x44\x22\xcd\x11\x94\xfc\x21\x44\x44\x44\x22"
"\xcd\x01\x96\xfd\x36\x44\x44\x44\x22\xcd\x09\x90\xfe\x2a\x44\x44"
"\x44\x22\xcd\x11\x92\xfc\x21\x44\x44\x44\x22\xcd\x01\x9c\xfd\x28"
"\x44\x44\x44\x22\xcd\x09\x9e\xfe\x77\x44\x44\x44\x22\xcd\x11\x98"
"\xfc\x76\x44\x44\x44\x22\xcd\x01\x9a\xfd\x6a\x44\x44\x44\x22\xcd"
"\x09\xa4\xfe\x20\x44\x44\x44\x22\xcd\x11\xa6\xfc\x28\x44\x44\x44"
"\x22\xcd\x01\xa0\xfd\x28\x44\x44\x44\x22\xcd\x09\xa2\x77\x96\x22"
"\xcd\x11\xac\xcf\x01\xbc\x7f\x01\xa8\x30\x37\xcf\x09\xbc\xc7\xad"
"\x4c\xcd\x09\xb8\xcf\x11\xb8\x4b\xf3\x06\x60\xc1\x84\x30\x11\xcf"
"\x09\xb8\x4b\xf3\x15\x60\xcd\x11\xb0\xcf\x01\xb0\x14\xcf\x09\xb8"
"\xcf\x15\x6c\x16\xc9\xc1\x80\xb9\xbb\xbb\x14\xac\x90\xba\xbb\xbb"
"\xc7\x80\x48\xcf\x09\xb0\x95\xad\x77\x96\x22\xcd\xd0\x09\x80\xb9"
"\xbb\xbb\xc9\x01\x94\x14\xc9\xc9\x80\xb9\xbb\xbb\x15\xac\x46\xb9"
"\xbb\xbb\xc7\x80\x4c\xc1\x84\x30\x4f\xcf\x11\xb8\xcf\x06\x5c\xcd"
"\x01\xb4\xaf\x4e\xcf\x09\xbc\xcf\x55\xcd\x11\xbc\xaf\xc1\xcf\x01"
"\xb4\xcf\xa1\x19\x87\x88\x88\x88\x88\x88\x88\x88\x88\x88\x88\x88"
"\x88\x88\x88\x88\xd5";

	printf("1");
	__asm
	{
		lea eax,shellcode
		push eax
		ret
	}
	return 0;
}
