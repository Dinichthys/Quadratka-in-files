enum SOLVE_SQUARE_RESULT
{
    NO_ROOTS  = 0,
    ONE_ROOT  = 1,
    TWO_ROOTS = 2,
    ALL       = 3,
    LINE      = 4
};

bool  my_is_finite                          (double x);
bool  is_null                               (double number);
bool  is_equal                              (double a, double b);
enum  SOLVE_SQUARE_RESULT solve_lineal      (double b, double c, double* x);
enum  SOLVE_SQUARE_RESULT solve_square      (double a, double b, double c, double* x1, double* x2);
