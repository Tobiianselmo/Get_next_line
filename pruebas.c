#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buffer[100];
	int num_bytes;

	fd = open("/Users/tanselmo/Desktop/GNL_help/prueba", O_RDONLY);
	printf("%d\n", fd);

	if (fd == -1)
	{
		printf("Error al abrir archivo");
	}
	else
	{
		num_bytes = read(fd, buffer, 5);
		close(fd);
		if (num_bytes == 0)
		{
			printf("El archivo esta vacio");
		}
		else
		{
			printf("El contenido es de %d bytes, y es: %s", num_bytes, buffer);
		}
	}
	return (0);
}