#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Xay dung chuong trinh tinh hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n");
        printf("3. Giai phuong trinh bac hai\n");
        printf("4. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1: {
                float dtb;
                printf("Nhap diem trung binh (0 - 10): ");
                scanf("%f", &dtb);

                if (dtb < 0 || dtb > 10) {
                    printf("Diem khong hop le!\n");
                    break;
                }

                if (dtb >= 9)
                    printf("Hoc luc: Xuat Sac\n");
                else if (dtb >= 8)
                    printf("Hoc luc: Gioi\n");
                else if (dtb >= 6.5)
                    printf("Hoc luc: Kha\n");
                else if (dtb >= 5)
                    printf("Hoc luc: Trung Binh\n");
                else
                    printf("Hoc luc: Yeu\n");
                break;
            }

            case 2: {
                float a, b;
                printf("Nhap a: ");
                scanf("%f", &a);
                printf("Nhap b: ");
                scanf("%f", &b);

                if (a == 0) {
                    if (b == 0)
                        printf("Phuong trinh vo so nghiem.\n");
                    else
                        printf("Phuong trinh vo nghiem.\n");
                } else {
                    printf("Phuong trinh co 1 nghiem: x = %.2f\n", -b / a);
                }
                break;
            }

            case 3: {
                float a, b, c;
                printf("Nhap a: ");
                scanf("%f", &a);
                printf("Nhap b: ");
                scanf("%f", &b);
                printf("Nhap c: ");
                scanf("%f", &c);

                if (a == 0) {
                    if (b == 0) {
                        if (c == 0)
                            printf("Phuong trinh vo so nghiem.\n");
                        else
                            printf("Phuong trinh vo nghiem.\n");
                    } else {
                        printf("Phuong trinh co nghiem x = %.2f\n", -c / b);
                    }
                } else {
                    float delta = b*b - 4*a*c;

                    if (delta < 0)
                        printf("Phuong trinh vo nghiem.\n");
                    else if (delta == 0)
                        printf("Phuong trinh co nghiem kep x = %.2f\n", -b / (2*a));
                    else {
                        float x1 = (-b + sqrt(delta)) / (2*a);
                        float x2 = (-b - sqrt(delta)) / (2*a);
                        printf("Phuong trinh co 2 nghiem:\n");
                        printf("x1 = %.2f\n", x1);
                        printf("x2 = %.2f\n", x2);
                    }
                }
                break;
            }

            case 4: {
                float KW;
                printf("Nhap so dien tieu thu trong thang: ");
                scanf("%f", &KW);

                if (KW < 0) {
                    printf("So dien khong hop le!\n");
                    break;
                }

                float tien;

                if (KW <= 50)
                    tien = KW * 1678;
                else if (KW <= 100)
                    tien = KW * 1734;
                else if (KW <= 200)
                    tien = KW * 2014;
                else if (KW <= 300)
                    tien = KW * 2536;
                else if (KW <= 400)
                    tien = KW * 2834;
                else
                    tien = KW * 2927;

                printf("Tien dien phai tra: %.0f VND\n", tien);
                break;
            }

            case 0:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
