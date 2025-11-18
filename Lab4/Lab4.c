#include <stdio.h>
#include <math.h>

int main() {
    int min, max;
    int i = min;
    printf("Nhap so min:");
    scanf("%d", &min);
    float tong = 0, bienDiem = 0, trungBinh = 0; 
    while (i <= max)
    {
        if (i%2 == 0)
        {
            tong += i;
            bienDiem++;
        }
        
    }
    trungBinh = tong / bienDiem;
    printf("Trung binh tong la: %d", trungBinh);
    return 0;
}