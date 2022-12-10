#include <iostream>
#include <cmath>

int distance(int x1, int x2, int y1, int y2)
{
    return (pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main()
{
    const int x_s = 0, y_s = 0;
    const int x_e = 49, y_e = 49;

    const int c_x = 25, c_y = 25, c_r = 25;

    float s_length_x = 0, s_length_y = 0;
    float c_length_x = 0, c_length_y = 0;

    int points_in_square_x[10000];
    int points_in_square_y[10000];

    int points_in_circle_x[10000];
    int points_in_circle_y[10000];

    for (int j = y_s; j <= y_e; j++)
    {
        for (int i = x_s; i <= x_e; i++)
        {
            points_in_square_x[int(s_length_x)] = i;
            points_in_square_y[int(s_length_y)] = j;
            s_length_x += 1;
            s_length_y += 1;
        }
    }

    s_length_x = 0, s_length_y = 0;

    for (int j = y_s; j <= y_e; j++)
    {
        for (int i = x_s; i <= x_e; i++)
        {
            if (distance(points_in_square_x[int(s_length_x)], c_x, points_in_square_y[int(s_length_y)], c_y) <= pow(c_r, 2))
            {
                points_in_circle_x[int(c_length_x)] = i;
                points_in_circle_y[int(c_length_y)] = j;
                c_length_x += 1;
                c_length_y += 1;
            }

            s_length_x += 1;
            s_length_y += 1;
        }
    }

    float pi = (4 * (c_length_x - 4)) / (s_length_x);

    std::cout << pi;
}
