#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void merge_sort(double arr[], int l, int r, int indices[]);
void merge(double arr[], int l, int m, int r, int indices[]);
void to_print(double n, const char *str);

int main() {
    int choice, n = 0;
    double num = 0, arr[5000];
    char input[100];
    char numbers[5000][100];  // เก็บสตริงของตัวเลขเพื่อการตรวจสอบรูปแบบทศนิยม

    scanf("%d", &choice);
    while (1) {
        scanf("%s", input);
        if (strcmp(input, "-3.1415923") == 0) {
            break;
        }
        strcpy(numbers[n], input); // เก็บตัวเลขในรูปแบบสตริง
        arr[n] = atof(input); // แปลงสตริงเป็น double
        n++;
    }

    double new_arr[n];
    int indices[n];  // เก็บดัชนีของค่าเดิมเพื่อคงการเชื่อมโยงกับสตริง input
    for (int i = 0; i < n; i++) {
        new_arr[i] = arr[i];
        indices[i] = i;  // เก็บดัชนีของค่าเดิม
    }

    merge_sort(new_arr, 0, n - 1, indices);

    if (choice == 0) {
        for (int i = n - 1; i >= 0; i--) {
            to_print(new_arr[i], numbers[indices[i]]);  // ใช้ดัชนีเพื่อเข้าถึงสตริงที่เก็บไว้
        }
    } else {
        for (int i = 0; i < n; i++) {
            to_print(new_arr[i], numbers[indices[i]]);
        }
    }

    return 0;
}

void merge(double arr[], int l, int m, int r, int indices[]) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    double L[n1], R[n2];
    int L_indices[n1], R_indices[n2];

    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
        L_indices[i] = indices[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
        R_indices[j] = indices[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            indices[k] = L_indices[i];
            i++;
        } else {
            arr[k] = R[j];
            indices[k] = R_indices[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        indices[k] = L_indices[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        indices[k] = R_indices[j];
        j++;
        k++;
    }
}

void merge_sort(double arr[], int l, int r, int indices[]) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m, indices);
        merge_sort(arr, m + 1, r, indices);
        merge(arr, l, m, r, indices);
    }
}

void to_print(double n, const char *str) {
    if (strchr(str, '.') != NULL) {
        // ถ้ามีจุดทศนิยมในสตริง input พิมพ์ทศนิยม 3 ตำแหน่ง
        printf("%.3lf\n", n);
    } else {
        // ถ้าไม่มีจุดทศนิยมในสตริง input พิมพ์เป็นจำนวนเต็ม
        printf("%.0lf\n", n);
    }
}
