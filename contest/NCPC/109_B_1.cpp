#include <iostream>
#include <cstring>
using namespace std;
void genMag(int *magic, int n)
{

    int mag[n * n];
    for (int i = 0; i < n * n; i++)
        mag[i] = -999;
    for (int i = 0; i < n * n; i++)
    {
        if (*(magic + i) != -1)
            mag[*(magic + i)] = i + 1;
    }
    int sum = n * (n * n + 1) / 2;
    int fl_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (mag[i] < 0)
        {
            for (int j = 0; j < n * n; j++)
            {
                if (*(magic + j) < 0)
                {
                    int *newMag = (int *)malloc(n * n * sizeof(int));
                    memcpy(newMag, magic, n * n * sizeof(int));
                    *(newMag + j) = i;
                    genMag(newMag, n);
                }
            }
        }
        fl_sum += mag[i];
    }
    if (fl_sum == sum)
    {
        int rdia_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mag[i * n + i] < 0)
            {
                for (int j = 0; j < n * n; j++)
                {
                    if (*(magic + j) < 0)
                    {
                        int *newMag = (int *)malloc(n * n * sizeof(int));
                        memcpy(newMag, magic, n * n * sizeof(int));
                        *(newMag + j) = i * n + i;
                        genMag(newMag, n);
                    }
                }
            }
            rdia_sum += mag[i * n + i];
        }
        if (rdia_sum == sum)
        {
            int ldia_sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (mag[i * n + (n - i) - 1] < 0)
                {
                    for (int j = 0; j < n * n; j++)
                    {
                        if (*(magic + j) < 0)
                        {
                            int *newMag = (int *)malloc(n * n * sizeof(int));
                            memcpy(newMag, magic, n * n * sizeof(int));
                            *(newMag + j) = i * n + (n - i) - 1;
                            genMag(newMag, n);
                        }
                    }
                }
                ldia_sum += mag[i * n + (n - i) - 1];
            }
            if (ldia_sum == sum)
            {

                for (int i = 0; i < n; i++)
                {
                    int hline_sum = 0;
                    for (int j = 0; j < n; j++)
                    {
                        if (mag[i * n + j] < 0)
                        {
                            for (int k = 0; k < n * n; k++)
                            {
                                if (*(magic + k) < 0)
                                {
                                    int *newMag = (int *)malloc(n * n * sizeof(int));
                                    memcpy(newMag, magic, n * n * sizeof(int));
                                    *(newMag + k) = i * n + j;
                                    genMag(newMag, n);
                                }
                            }
                        }
                        hline_sum += mag[i * n + j];
                    }
                    if (hline_sum != sum)
                        return;
                }
                for (int i = 0; i < n; i++)
                {
                    int vline_sum = 0;
                    for (int j = 0; j < n; j++)
                    {
                        if (mag[j * n + i] < 0)
                        {
                            for (int k = 0; k < n * n; k++)
                            {
                                if (*(magic + k) < 0)
                                {
                                    int *newMag = (int *)malloc(n * n * sizeof(int));
                                    memcpy(newMag, magic, n * n * sizeof(int));
                                    *(newMag + k) = j * n + i;
                                    genMag(newMag, n);
                                    return;
                                }
                            }
                        }
                        vline_sum += mag[j * n + i];
                    }
                    if (vline_sum != sum)
                        return;
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        cout << mag[i * n + j] << "\t";
                    }
                    cout << endl;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int magic[n * n];
    for (int i = 0; i < n * n; i++)
        magic[i] = -1;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        magic[t - 1] = i;
    }
    genMag(&magic[0], n);
}