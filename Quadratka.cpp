#include <stdio.h>
#include "main.h"

int main (const int argc, char * const argv[])
{
    struct settings_of_command set = { stdin, stdout, false, false, false };

    settings_from_argv (argc, argv, &set);
    if (set.stop_program)
    {
        fclose (set.stream_in);
        fclose (set.stream_out);
        return 0;
    }
    if (set.test_or_user)
    {
        run_all_tests (set.stream_out, set.verbose);
    }
    else
    {
        user_version (set.stream_in, set.stream_out);
    }
    fclose (set.stream_in);
    fclose (set.stream_out);
}
