#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - prints the opcodes of its own main function
  * @argc: argument count
  * @argv: argument value
  * Description: prints the opcodes of its own main function
  * Return: return 0 for success
  */
int main(int argc, char *argv[])
{
ud_t ud_obj;
int k = 0, i = 0;
if (argc == 2)
{
k = atoi(argv[1]);
if (k < 0)
{
printf("Error\n");
exit(2);
}
ud_unit(&ud_obj);
ud_set_input_buffer(&ud_obj, argv[1], k);
ud_set_mode(&ud_obj, 64);
ud_set_syntax(&ud_obj, UD_SYN_INTEL);
while (ud_disassemble(&ud_obj))
{
printf("\t%s\n", ud_insn_hex(&ud_obj));
}
}
return (0);
}
