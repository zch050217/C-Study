#include <stdio.h>

struct STUDENT {
    char name[11];
    char id[11];
    int scores[3];
};

void input(struct STUDENT *stu) {
    scanf("%s %s", stu->name, stu->id);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &stu->scores[i]);
    }
}

/*void output(struct STUDENT *stu) {
    printf("%s,%s", stu->name, stu->id);
    for (int i = 0; i < 3; i++) {
        printf(",%d", stu->scores[i]);
    }
    printf("\n");
}*/

void output(struct STUDENT *stu) {
    printf("%s %s", stu->name, stu->id);
    for (int i = 0; i < 3; i++) {
        printf(" %d", stu->scores[i]);
    }
    printf("\n");
}

void find_max(struct STUDENT *stu, int n) {
    int max = 0;
    for (int i = 1; i < n; i++) {
        if (stu[i].scores[0] + stu[i].scores[1] + stu[i].scores[2] > stu[max].scores[0] + stu[max].scores[1] + stu[max].scores[2]) {
            max = i;
        }
    }
    output(&stu[max]);
}

void average(struct STUDENT *stu, int n) {
    int sum[3] = {0};
    for (int i = 0; i < n; i++) {
        sum[0] += stu[i].scores[0];
        sum[1] += stu[i].scores[1];
        sum[2] += stu[i].scores[2];
    }
    printf("%d %d %d\n", sum[0] / n, sum[1] / n, sum[2] / n);
}

int main() {
    struct STUDENT student[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        input(&student[i]);
    }
    
    /*for (int i = 0; i < n; i++) {
        output(&student[i]);
    }*/

    average(student, n);
    find_max(student, n);

    return 0;
}