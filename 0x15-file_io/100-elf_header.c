#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

char *get_type(unsigned int type);
char *get_abi(unsigned int abi);

/**
 * main - The entry point for program to get header of ELF file
 * @argc: The number of arguments
 * @argv: The pointer to array of arguments
 * Return: 1 on success, error code on failure
 */

int main(int argc, char *argv[])
{
	FILE *file = fopen(argv[1], "rb");
	size_t bytes_read;
	const char *elf_class;
	const char *elf_data;
	const char *elf_version;
	struct elf_header
	{
		unsigned char e_ident[16];
		uint16_t e_type;
		uint16_t e_machine;
		uint32_t e_version;
		uint64_t e_entry;
		uint64_t e_phoff;
		uint64_t e_shoff;
		uint32_t e_flags;
		uint16_t e_ehsize;
		uint16_t e_phentsize;
		uint16_t e_phnum;
		uint16_t e_shentsize;
		uint16_t e_shnum;
		uint16_t e_shstrndx;
	} elf_header;

	argc += 0;
	if (file == NULL)
	{
		fprintf(stderr, "Failed to open file: %s\n", argv[1]);
		exit(98);
	}
	bytes_read = fread(&elf_header, sizeof(elf_header), 1, file);
	if (bytes_read != 1)
	{
		printf("Failed to read ELF header\n");
		fclose(file);
		exit(98);
	}

	elf_class = (elf_header.e_ident[4] == 1) ? "ELF32" :
	(elf_header.e_ident[4] == 2) ? "ELF64" : "Unknown";
	elf_data = (elf_header.e_ident[5] == 1) ? "2's complement, little endian" :
	(elf_header.e_ident[5] == 2) ? "1's complement, big endian" : "Unknown";
	elf_version = (elf_header.e_version == 1) ? "1 (current)" :
	(elf_header.e_version == 2) ? "2 (original)" : "Unknown";
	

	printf("ELF Header:\n");
	printf("\t%s %02x %02x %02x %02x %02x %02x %02x %02x %02x \
%02x %02x %02x %02x %02x %02x %02x\n","Magic Number:",
	elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3],
	elf_header.e_ident[4], elf_header.e_ident[5], elf_header.e_ident[6], elf_header.e_ident[7],
	elf_header.e_ident[8], elf_header.e_ident[9], elf_header.e_ident[10], elf_header.e_ident[11],
	elf_header.e_ident[12], elf_header.e_ident[13], elf_header.e_ident[14], elf_header.e_ident[15]);
	printf("\t%-39s%s\n", "Class: ", elf_class);
	printf("\t%-39s%s\n", "Data: ", elf_data);
	printf("\t%-39s%s\n", "Version: ", elf_version);
	printf("\t%-39s%s\n", "OS/ABI: ", get_abi(elf_header.e_ident[7]));
	printf("\t%-39s%d\n", "ABI Version: ", elf_header.e_ident[8]);
	printf("\t%-39s%s\n", "Type: ", get_type(elf_header.e_ident[10]));
	printf("\t%-39s%#04lx\n", "Entry point address: ", elf_header.e_entry);
	return (1);
}

/**
 * get_abi - The entry point for program to get header abi of ELF file
 * @abi: argument
 * Return: pointer to string
 */
char *get_abi(unsigned int abi)
{
	char *elf_osabi;

	switch (abi)
	{
		case 0x00:
			elf_osabi = "UNIX - System V";
			break;
		case 0x01:
			elf_osabi = "UNIX - HP-UX";
			break;
		case 0x02:
			elf_osabi = "UNIX - NetBSD";
			break;
		case 0x03:
			elf_osabi = "UNIX - Linux";
			break;
		case 0x04:
			elf_osabi = "UNIX - GNU Hurd";
			break;
		case 0x06:
			elf_osabi = "UNIX - Solaris";
			break;
		case 0x07:
			elf_osabi = "UNIX - AIX (Monterey)";
			break;
		case 0x08:
			elf_osabi = "UNIX - IRIX";
			break;
		case 0x09:
			elf_osabi = "UNIX - FreeBSD";
			break;
		case 0x0A:
			elf_osabi = "UNIX - Tru64";
			break;
		case 0x0B:
			elf_osabi = "UNIX - Novell Modesto";
			break;
		case 0x0C:
			elf_osabi = "UNIX - OpenBSD";
			break;
		case 0x0D:
			elf_osabi = "UNIX - OpenVMS";
			break;
		case 0x0E:
			elf_osabi = "UNIX - NonStop Kernel";
			break;
		case 0x0F:
			elf_osabi = "UNIX - AROS";
			break;
		case 0x10:
			elf_osabi = "UNIX - FenixOS";
			break;
		case 0x11:
			elf_osabi = "UNIX - Nuxi CloudABI";
			break;
		case 0x12:
			elf_osabi = "UNIX - Stratus Technologies OpenVOS";
			break;
		default :
			break;
	}
	return (elf_osabi);
}

/**
 * get_type - The entry point for program to get type header of ELF file
 * @type: argument
 * Return: pointer to string
 */
char *get_type(unsigned int type)
{
	char *msg;

	switch (type)
	{
		case 0x00:
			msg = "NONE (Unknown)";
			break;
		case 0x01:
			msg = "REL (Relocatable file)";
			break;
		case 0x02:
			msg = "EXEC (Executable file)";
			break;
		case 0x03:
			msg = "DYN (Shared object)";
			break;
		case 0x04:
			msg = "CORE (Core file)";
			break;
		case 0xFE00:
			msg = "LOOS (Reserved inclusive range. Operating system specific)";
			break;
		case 0xFEFF:
			msg = "HIOS (Reserved inclusive range. Operating system specific)";
			break;
		case 0xFF00:
			msg = "LOPROC (Reserved inclusive range. Processor specific)";
			break;
		case 0xFFFF:
			msg = "HIPROC (Reserved inclusive range. Processor specific)";
			break;
		default :
			break;
	}
	return (msg);
}
