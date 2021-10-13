#include "part_of_the_matrix.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
        exit(-1);
    }

    char *operand1 = mx_strtrim(argv[1]);
    char *operation = mx_strtrim(argv[2]);
    char *operand2 = mx_strtrim(argv[3]);
    char *result = mx_strtrim(argv[4]);

    mx_check_args(argv, operand1, operation, operand2, result);

    int operand1_length = mx_strlen(operand1);
    int operand2_length = mx_strlen(operand2);
    int result_length = mx_strlen(result);

    mx_calculate(operand1, operation, operand2, result, 
                operand1_length, operand2_length, result_length);
    

    free(operand1);
    operand1 = NULL;
    free(operation);
    operation = NULL;
    free(operand2);
    operand2 = NULL;
    free(result);
    result = NULL;
}

