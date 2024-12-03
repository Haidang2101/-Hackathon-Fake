#include <stdio.h>

int main() {
    int arr[100][100], rows, cols, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In cac phan tu nam tren duong bien va tinh tich\n");
        printf("4. In cac phan tu nam tren duong cheo chinh\n");
        printf("5. In cac phan tu nam tren duong cheo phu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so hang: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("arr[%d][%d] = ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                printf("Mang duoi dang ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: {
                long long product = 1;
                printf("Cac phan tu nam tren duong bien:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %lld\n", product);
                break;
            }

            case 4:
                printf("Cac phan tu tren duong cheo chinh:\n");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;

            case 5:
                printf("Cac phan tu tren duong cheo phu:\n");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][cols - 1 - i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 6);

    return 0;
}

