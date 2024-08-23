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

bool  my_is_finite                     (double x);
bool  is_null                          (double number);
enum  SOLVE_SQUARE_RESULT solve_square (double a, double b, double c, double* x1, double* x2);
void  swap                             (enum SOLVE_SQUARE_RESULT result, double* x1, double* x2);
void  print                            (struct pattern_for_tests pattern, enum SOLVE_SQUARE_RESULT result, double x1, double x2, bool truth);
void  run_test                         (struct pattern_for_tests pattern);
void  run_all_tests                    (FILE* stream, bool verbose);
