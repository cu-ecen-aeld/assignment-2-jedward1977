#include <stdio.h>
#include <syslog.h>

int main(int argc, char *argv[])
{
	openlog(NULL,0,LOG_USER);
	FILE *fptr;
    if (argc == 3)
    {
		syslog(LOG_INFO, "Number of arguments is: %d", argc);
		syslog(LOG_INFO, "File to be written is: %s", argv[1]);
		syslog(LOG_INFO, "Text to be inserted is: %s", argv[2]);
    }
	else
	{
		syslog(LOG_ERR, "Number of arguments needs to be 2");
		return 1;
	}

	syslog(LOG_DEBUG, "Writing %s to %s", argv[2], argv[1]);
	fptr = fopen(argv[1],"w");
	fprintf(fptr,"%s",argv[2]);
	fclose(fptr);

    return 0;
}