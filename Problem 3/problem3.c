
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *user_input1, const void *user_input2)
{
    const float *first = (const float *)user_input1;
    const float *second = (const float *)user_input2;

    if (*first < *second)
        return -1;
    if (*first > *second)
        return 1;
    return 0;
}

int main()
{
    float user_input1;
    float user_input2;
    float user_input3;
    float user_input4;
    float user_input5;

    printf("Please enter five values:\n");

    scanf("%f", &user_input1);
    scanf("%f", &user_input2);
    scanf("%f", &user_input3);
    scanf("%f", &user_input4);
    scanf("%f", &user_input5);

    // Calculate mean

    float sum = user_input1 + user_input2 + user_input3 + user_input4 + user_input5;
    float mean = sum / 5;

    printf("The mean of the values is: %.2f\n", mean);

    // Calculate median

    float asc[5] = {user_input1, user_input2, user_input3, user_input4, user_input5};

    qsort(asc, 5, sizeof(float), compare);

    float median = asc[2];

    printf("The median of the values is: %.2f\n", median);

    // Calculate standard deviation

    float squared_difference_sum = 0;

    for (int i = 0; i < 5; i++) {
        float difference = asc[i] - mean;
        squared_difference_sum += difference * difference;
    }

    float variance = squared_difference_sum / 5;
    float st = sqrt(variance);

    printf("The Standard Deviation of the values is: %.2f\n", st);

    // Kurtosis

    float fourth_power_sum = 0;

    for (int i = 0; i < 5; i++) {

    float difference = asc[i] - mean;
    float fourth_power = difference * difference * difference * difference;

    fourth_power_sum = fourth_power_sum + fourth_power;
    }

    float kurtosis = (fourth_power_sum / 5) / (variance * variance) - 3;

    printf("The Kurtosis of the values is: %.2f\n", kurtosis);

    return 0;
}
