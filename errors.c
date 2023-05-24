#include "shell.h"

/**
 *_eputs - prints an input string
 * @str: the string to be printed
 *
 * Return: Nothing 
 */
void_eputs(char*str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i]!='\0')
	{
		_eputchar(str[i];
	i++;
	}
	}
	 
	/**
	 *_eputchar- writes the charactr c to stderr
	 *@c: The character to print 
	 *
	 * Return:On success 1.
	 * On error, -1 is returned, and errn is set appropriately 
	 */
	

	int_eputchar(char c)
	{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH ||i>=WRITE_BUF_SIZE)
	{
		write(2, buf, i); 
			i=0;
	}
	if (c!=BUF_FLUSH)
		buf{i++]=c;
			return(1);
		}


	/**
	 * _putfd-writes the character c to given fd
	 * @c: The character to print
	 * @fd: The filedescriptor to erite to
	 *
	 * Return: On sucess 1.
	 * on erroe, -1 is returned and errno is set appropriately
	 */


	int_putfd(char c, int fd)
	{
		static int i;
		static char buf[WRITE_BUF_SIZE];

		if(c == BUF_FLUSH ||i>=WRITE_bUF_SIZE)
		{
			write(fd, buf, i);
			i=0;
		}
		if(c!=BUF_FLUSH)
			buf[i++]=c;
		return(1);
	}

	/**
	 * _putsfd_prints an input 
	 * @str: the string to be printed
	 * @fd:the filedescriptor to write to
	 * Return: the number of charts put 
	 */
	int_putsfd(char*str,int fd)
	{
		int i=0;

		if(!str)
			return(0);
		while(*str)
		{
			i+=_putfd(str++,fd);
		}
		return(i);
	}



