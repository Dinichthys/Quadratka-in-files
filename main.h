struct settings_of_command
{
    FILE* stream_in;
    FILE* stream_out;
    bool test_or_user;
    bool verbose;
    bool stop_program;
};

void  settings_from_argv (int argc, char * const * argv, struct settings_of_command *set);
void  run_all_tests      (FILE* stream, bool verbose);
void  user_version       (FILE* stream_in, FILE* stream_out);
