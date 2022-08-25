#include "main.h"
#include <elf.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>


int check_elf(unsigned char *e_ident);
void close_elf(int elf);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_ABIVersion(unsigned char *e_ident);
void print_entry(unsigned char e_entry, unsigned char *e_ident);


/**
 * print_entry - file ABI version
 * @e_ident: array of bytes that specifies
 * @e_entry: the __libstart address
 * how to interpret the file
 */

void print_entry(unsigned char e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", (long)e_entry);
}

/**
 * print_ABIVersion - file ABI version
 * @e_ident: array of bytes that specifies
 * how to interpret the file
 */

void print_ABIVersion(unsigned char *e_ident)
{
	printf("  ABI Version:               ");
	printf("%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:               ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_osabi - the file OS/ABI
 * @e_ident: array of bytes that specifies
 * how to interpret the file
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:               ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("Unix - system\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded) ABI\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
}

/**
 * print_version - the file version
 * @e_ident: array of bytes that specifies
 * how to interpret the file
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:               ");
	switch (e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("Invalid version\n");
			break;
		case EV_CURRENT:
			printf("Current version\n");
			break;
		default:
			printf("<Unknown version %x\n", e_ident[EI_VERSION]);
	}
}


/**
 * print_data - the file data
 * @e_ident: array of bytes that specifies
 * how to interpret the file
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:               ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown data format\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("<Unknown data format %x>\n", e_ident[EI_DATA]);
			break;
	}
}


/**
 * print_class - the file class
 * @e_ident: array of bytes that specifies
 * how to interpret the file
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:               ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<Unknown: %x>", e_ident[EI_CLASS]);
			break;
	}
}

/**
 * print_magic - prints the magic numbers in an elf file
 * @e_ident: array of file interpretation specifications
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	if (e_ident == NULL)
		exit(98);
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%0x", e_ident[i]);
		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
			printf(" ");
	}
}
/**
 * check_elf - checks if a file is elf
 * @e_ident: array of file interpretation specifications
 *
 * Return: 0 if true
 */

int check_elf(unsigned char *e_ident)
{

	if (e_ident && ELFMAG0 && ELFMAG1 && ELFMAG2 && ELFMAG3)
		;
	else
	{
		dprintf(STDERR_FILENO, "ERROR!: Not ELF file\n");
		exit(98);
	}
	return (98);
}

/**
 * close_elf - closes an elf file successfully
 * @elf: elf file descriptor
 */

void close_elf(int elf)
{
	if (close(elf) < 0)
	{
		dprintf(STDERR_FILENO, "ERROR: can't close %d\n", elf);
		exit(98);
	}
}

/**
 * main - driver code
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 always
 */

int main(int __attribute__((__unused__))argc, char **argv)
{
	Elf64_Ehdr *header;
	int o, r;

	if (argc < 2)
	{
		dprintf(STDERR_FILENO, "ERROR!: please provide atleast one file\n");
		exit(98);
	}


	o = open(argv[1], O_RDONLY);

	if (o < 0)
	{
		dprintf(STDERR_FILENO, "ERROR!: %s file cannot be opened\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(0);
		dprintf(STDERR_FILENO, "ERROR!: cannot read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));

	if (r < 0)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "ERROR!: %s No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_ABIVersion(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	return (0);
}