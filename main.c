
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int bai1() {
    float score;
    printf("Mời nhập điểm:");
    scanf("%f", &score);

    if (score > 10 || score < 0) {
        printf("Điểm không hợp lệ vui lòng nhập từ 0 - 10 điểm\n");
        return 0;
    }

    if (score >= 9) {
        printf("Học lực xuất sắc! \n");
    } else if (score >= 8) {
        printf("Học lực giỏi! \n");
    } else if (score >= 6.5) {
        printf("Học lực khá! \n");
    } else if (score >= 5) {
        printf("Học lực trung bình! \n");
    } else if (score >= 3.5) {
        printf("Học lực yếu! \n");
    } else {
        printf("Học lực kém! \n");
    }
    return 0;
}

int bai2() {
    float a, b;

    printf("Mời nhập số A:");
    scanf("%f", &a);

    printf("Mời nhập số B:");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phương trình có vô số nghiệm!\n");
            return 0;
        }
        printf("Phương trình vô nghiệm!\n");
        return 0;
    }

    printf("Phương trình có nghiệm là: %f \n", -a / b);
    return 0;
}

int bai2_2() {
    float a, b, c, delta;

    printf("Mời nhập số A:");
    scanf("%f", &a);

    printf("Mời nhập số B:");
    scanf("%f", &b);

    printf("Mời nhập số C:");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phương trình có vô số nghiệm!\n");
                return 0;
            }
            printf("Phương trình vô nghiệm!\n");
            return 0;
        }
        printf("Phương trình có nghiệm là: %f \n", -b / c);
        return 0;
    }

    delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) {
        printf("Phương trình vô nghiệm!\n");
    }

    if (delta == 0) {
        printf("Phương trình có một nghiệm kép là: %f\n", -b / (2 * a));
    }

    if (delta > 0) {
        printf("Phương trình có hai nghiệm riêng biệt là: X1 = %f, X2 %f: \n",
               (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }

    return 0;
}

int bai3() {
    double input, price;

    printf("Mời nhập số kWh tiêu thụ:");
    scanf("%lf", &input);
    input = round(input);

    if (input < 0) {
        printf("Số kWh tiêu thụ không hợp lệ vui lòng nhập lớn hơn 0 kWh\n");
        return 0;
    }

    if (input <= 50) {
        price = 1.678;
    } else if (input <= 100) {
        price = 1.734;
    } else if (input <= 200) {
        price = 2.014;
    } else if (input <= 300) {
        price = 2.536;
    } else if (input <= 400) {
        price = 2.834;
    } else {
        price = 2.927;
    }

    printf("Tiền điện của bạn là %lf: \n", input * price);

    return 0;
};

int main(int argc, const char* argv[]) {
    int input;

    printf("Chọn chương trình!\n");
    printf("[1] Bài 1\n");
    printf("[2] Bài 2\n");
    printf("[3] Bài 2.2\n");
    printf("[4] Bài 3\n");

reInput:
    printf("Nhập số bài muốn chọn\n");

    if (scanf("%d", &input) && input <= 4 && input > 0) {

    } else {
        while (getchar() != '\n')
            ;
        goto reInput;
    }

    switch (input) {
    case 1: {
        bai1();
        break;
    }
    case 2: {
        bai2();
        break;
    }

    case 3: {
        bai2_2();
        break;
    }
    case 4: {
        bai3();
        break;
    }
    }
    return 0;
}
