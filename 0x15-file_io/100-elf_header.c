#include "main.h"
#define ERROR_CODE 98
void print_error(const char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(ERROR_CODE);
}

void print_elf_header(const Elf64_Ehdr* header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d (%s)\n", header->e_type, header->e_type == ET_EXEC ? "EXEC (Executable file)" : header->e_type == ET_DYN ? "DYN (Shared object file)" : "UNKNOWN");
	printf("  Entry point address:               %lx\n", header->e_entry);
	printf("\n");
}

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	const char* filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		print_error("Error: Cannot open file");
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error: Cannot read ELF header");
	}
	
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3) {
	print_error("Error: Not an ELF file");
}

	print_elf_header(&header);
	close(fd);
	return (0);
}
