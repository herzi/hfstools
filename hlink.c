/* FIXME: add MPL2 header */

#include <stdlib.h> /* EXIT_SUCCESS */
#include <stdio.h>  /* fprintf() */
#include <unistd.h> /* link */

int
main (int   argc,
      char**argv)
{
    int status;

    if (argc != 3) {
        fprintf(stderr,
                "%s:%d:%s(): implement help screen\n",
                __FILE__,
                __LINE__,
                __FUNCTION__);
        return EXIT_FAILURE;
    }

    status = link(argv[1], argv[2]);
    if (status < 0) {
        perror("cannot create the link");
        return EXIT_SUCCESS;
    }

    return EXIT_SUCCESS;
}

/* vim:set sw=4 et: */
