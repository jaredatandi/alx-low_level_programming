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

/**
 * print_class - the file class
 * @e_ident: array of bytes that specifies
 * how to interpret the file
 */

void print_class(unsigned char *e_ident)
{
	printf("Class:			");
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
	printf("Magic: ");
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

int main(int argc, char **argv)
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

	return (argc);
}
