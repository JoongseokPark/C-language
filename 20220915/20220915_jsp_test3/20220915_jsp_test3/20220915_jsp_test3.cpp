﻿// 20220915_jsp_test3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char num1 = 1, num2 = 2, result1 = 0;
    short num3 = 300, num4 = 400, result2 = 0;

    printf("size of num1 & num2 = %d and %d\n", sizeof(num1), sizeof(num2));
    printf("size of num3 & num4 = %d and %d\n", sizeof(num3), sizeof(num4));
    printf("sizr of char add = %d\n ", sizeof(num1 + num2));
    printf("sizr of short add = %d\n ", sizeof(num3 + num4));

    result1 = num1 + num2;
    result2 = num3 + num4;

    printf("result1 & result2 = %d %d\n", sizeof(result1), sizeof(result2));

    double rad;
    double area;
    printf("radious\n");
    scanf("%lf", &rad);
    area = rad * rad * 3.1415;
    printf("area of round = %lf\n", area);
    printf("area of round = %f\n", area);

    return 0;
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
