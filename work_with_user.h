enum SOLVE_SQUARE_RESULT
{
    NO_ROOTS  = 0,
    ONE_ROOT  = 1,
    TWO_ROOTS = 2,
    ALL       = 3,
    LINE      = 4
};

bool  input_coefficients                    (FILE* stream_in, FILE* stream_out, double* a, double* b, double* c);
void  output_roots                          (FILE* stream, enum SOLVE_SQUARE_RESULT result, double x1, double x2);
void  user_version                          (FILE* stream_in, FILE* stream_out);
enum  SOLVE_SQUARE_RESULT solve_square      (double a, double b, double c, double* x1, double* x2);
