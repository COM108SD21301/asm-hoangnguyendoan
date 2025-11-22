#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int luaChon;

    do {
        system("cls"); // Xóa màn hình cho đẹp, có thể bỏ nếu không cần

        printf("\n================ MENU ================");
        printf("\n1. Chức năng Số nguyên");
        printf("\n2. Tìm UCLN và BCNN");
        printf("\n3. Tính tiền quán Karaoke");
        printf("\n4. Tính tiền điện");
        printf("\n6. Vay ngân hàng");
        printf("\n8. Coming soon...");
        printf("\n0. Thoát chương trình");
        printf("\n======================================");
        printf("\nMời bạn nhập lựa chọn: ");
        scanf("%d", &luaChon);

        switch (luaChon) {

            // ============================
            // CHỨC NĂNG 1
            // ============================
            case 1: {
                printf("\nBạn chọn CN1\n");

                float x;
                printf("Nhập số x: ");
                scanf("%f", &x);

                if (x == (int)x) {
                    int n = (int)x;
                    printf("%d là số nguyên\n", n);

                    // ---- Số chính phương ----
                    int can = sqrt(n);
                    if (can * can == n)
                        printf("%d là số chính phương\n", n);
                    else
                        printf("%d không phải số chính phương\n", n);

                    // ---- Số nguyên tố ----
                    int laNT = 1;
                    if (n < 2) laNT = 0;
                    else {
                        for (int i = 2; i <= sqrt(n); i++) {
                            if (n % i == 0) {
                                laNT = 0;
                                break;
                            }
                        }
                    }

                    if (laNT)
                        printf("%d là số nguyên tố\n", n);
                    else
                        printf("%d không phải số nguyên tố\n", n);

                } else {
                    printf("%.2f là số thực, không phải số nguyên\n", x);
                }

                break;
            }

            case 2:
                printf("\nBạn chọn CN2\n");
                break;

            case 3:
                printf("\nBạn chọn CN3\n");
                break;

            case 4:
                printf("\nBạn chọn CN4\n");
                break;

            case 6:
                printf("\nBạn chọn CN6\n");
                break;

            case 8:
                printf("\nBạn chọn CN8\n");
                break;

            case 0:
                printf("\nBạn đã chọn thoát chương trình!\n");
                break;

            default:
                printf("\nBạn chọn sai! Vui lòng nhập lại.\n");
                break;
        }

        system("pause");

    } while (luaChon != 0);   // Lặp lại CHO ĐẾN KHI chọn 0

    return 0;
}
