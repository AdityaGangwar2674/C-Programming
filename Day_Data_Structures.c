#include <stdio.h>
struct DayData
{
    float temperature;
    float rainfall;
};
int main()
{
    int num_days;
    float total_temperature = 0.0;
    float total_rainfall = 0.0;

    printf("enter number of days : ");
    scanf("%d", &num_days);

    struct DayData month_data[num_days];

    for (int i = 0; i < num_days; i++)
    {
        printf("enter temperature and rainfall : ");
        scanf("%f %f", &month_data[i].temperature, &month_data[i].rainfall);

        total_temperature += month_data[i].temperature;
        total_rainfall += month_data[i].rainfall;
    }

    float avg_temperature = total_temperature / num_days;
    float avg_rainfall = total_rainfall / num_days;

    printf("average temperature for %d days = %f\n", num_days, avg_temperature);
    printf("average rainfall for %d days = %f\n", num_days, avg_rainfall);

    return 0;
}