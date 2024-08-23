const int MAX_TRIES = 50;

int   clear_input        (FILE* stream);
bool  is_end_of_input    (FILE* stream);
bool  input_coefficients (FILE* stream_in, FILE* stream_out, double* a, double* b, double* c);
