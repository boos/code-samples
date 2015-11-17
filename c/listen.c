#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

int main(int argc, char *av)
{
	int fd;
	struct sockaddr_in name;

	if ((fd= socket(AF_INET, SOCK_STREAM, 0)) < 0 )
		perror("socket");

		name.sin_port = htons(2323);
	 	memset(&name.sin_addr, 0x00, sizeof(name.sin_addr));

	if ( bind(fd, (struct sockaddr *) &name, sizeof(name)) < 0 )
		perror("bind");

	if ( listen(fd, 0) < 0 ) 
		perror("listen");

	sleep(1000);

}
