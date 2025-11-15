#include <stdio.h>
/*int main()
{
    double diem;
    printf("Nhap diem cua ban: ");
    scanf("%d", &diem);
    if (diem>9){
        printf("Xuat sac");
    }else if (diem>8 && diem<=9) {
        printf("Gioi");
    }else if (diem>=7 && diem<=8) {
        printf("Kha");
    }else if (diem>=5 && diem<7) {
        printf("Trung binh");
    }else (diem<5) {
    
        printf("Yeu-_-!!");
    }
    return 0;
}*/
int main(){
    printf("Viet Nam co bao nhieu dan toc anh em?\n");
    printf("A. 52\n B. 53\n C. 54\n D. 55\n");
    printf("Xin moi ban chon dap an: ");
    char dap_an;
    scanf(" %c", &dap_an);
    switch (dap_an)
    {
        case 'A': printf("Ban da chon sai\n");
            break;
        case 'B': printf("Ban da chon dung\n");
            break;
        case 'C': printf("Ban da chon dung\n");
            break;
        case 'D': printf("Ban da chon sai\n");
            break;
        default:
            printf("Ban chon khong dung bo dap an (a, b, c, d)");
    } return 0;
}