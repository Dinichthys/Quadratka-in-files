enum SOLVE_SQUARE_RESULT
{
    NO_ROOTS  = 0,
    ONE_ROOT  = 1,
    TWO_ROOTS = 2,
    ALL       = 3,
    LINE      = 4
};

struct pattern_for_tests
{
    FILE* stream;

    int number_of_test;

    double a;
    double b;
    double c;

    enum SOLVE_SQUARE_RESULT expect_result;
    double expect_x1;
    double expect_x2;

    bool verbose;
};

bool  my_is_finite (double x);
void  output_roots (FILE* stream, enum SOLVE_SQUARE_RESULT result, double x1, double x2);
void  print        (struct pattern_for_tests pattern, enum SOLVE_SQUARE_RESULT result, double x1, double x2, bool truth);
void  print_t_v    (struct pattern_for_tests pattern);
void  print_f_v    (struct pattern_for_tests pattern, enum SOLVE_SQUARE_RESULT result, double x1, double x2);
void  print_t      (struct pattern_for_tests pattern);
void  print_f      (struct pattern_for_tests pattern, enum SOLVE_SQUARE_RESULT result, double x1, double x2);
