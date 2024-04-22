#include <bits/stdc++.h>
using namespace std;

char * reverse(const char* a) {
    int n = strlen(a);
    char* result = new char[n+1];

    strcpy(result, a);

    char *start = result;
    char *end = result + n - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    return result;
}


char* delete_char(const char* a, char c) {
    int n = strlen(a);
    char* result = new char[n+1];
    char *x = result;

    while (*a != '\0') {
        if (*a != c) {
            *x = *a;
            x++;
        }
        a++;
    }
    *x = '\0';

    return result;
}


char* pad_right(const char* a, int n) {
    int l = strlen(a);
    char* result = new char[l+1];
    strcpy(result, a);
    char *p = result;

    while (l < n) {
        *(p+l) = ' ';
        l++;
    }
    *(p+l) = '\0';

    return result;
}


char* pad_left(const char* a, int n) {
    int l=strlen(a);
    char* result = new char[n+1];
    char* p = result;

    while(l<n){
        *p=' ';
        p++;
        l++;
    }
    strcat(result, a);

    return result;
}



char* truncate(const char* a, int n) {
    int l = strlen(a);
    if(l<=n) {
        char* result = new char[n+1];
        strcpy(result, a);
        return result;
    }
    else{
        char* result = new char[n+1];
        char* p = result;
        while(n){
            *p=*a;
            p++;
            a++;
            n--;
        }
        return result;
    }
}


char* trim_left(const char* a) {
    int l= strlen(a);
    char* result = new char[l+1];
    char* p = result;
    while(*a==' '){
        a++;
    }
    while(*a!='\0'){
        *p=*a;
        p++;
        a++;
    }
    *p='\0';
    return result;
}


char* trim_right(const char* a) {
    int l= strlen(a);
    char* result = new char[l+1];
    strcpy(result, a);
    char* p = result;

    for(int i=1;i<l;i++) p++;

    while(*p==' '){
        *p='\0';
        p--;
    }

    return result;
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "anh thich anh";
    char str3[] = "Daiiii";
    char str4[] = "Buon qua troi";
    char str5[] = "Da lam xong bai";
    char str6[] = ":PPPPPP:";
    char str7[] = "     >:D";
    char str8[] = "Yeu cau    ";

    //a
    cout << "Before reverse: " << str1 << endl;
    char * str11 =reverse(str1);
    cout << "After reverse: " << str11 << endl;

    //b
    cout << "Before delete_char: " << str2 << endl;
    char * str21 = delete_char(str2, 'a');
    cout << "After delete_char 'a': " << str21 << endl;

    //c
    cout << "Before pad_right: " << str3 << endl;
    char *str31 = pad_right(str3, 15);
    cout << "After pad_right: " << str31 << endl;

    //d
    cout << "Before pad_left: " << str4 << endl;
    char *str41 = pad_left(str4, 15);
    cout << "After pad_left: " << str41 << endl;

    //e
    cout << "Before truncate: " << str5 << endl;
    char *str51 = truncate(str5, 11);
    cout << "After truncate: " << str51 << endl;


    //g
    cout << "Before trim_left: " << str7 << endl;
    char* str71 = trim_left(str7);
    cout << "After trim_left: " << str71 << endl;

    //h
    cout << "Before trim_right: " << str8 << endl;
    char* str81 = trim_right(str8);
    cout << "After trim_right: " << str81 << endl;

    return 0;
}
