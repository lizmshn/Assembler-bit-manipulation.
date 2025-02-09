#include <iostream>
using namespace std;
int main(void) {
int a;
int max = 0;
int count = 0;
cin >> a;
__asm {
mov ebx, count
mov edx, max
repit :
cmp a, 0
je e
mov eax, a
and eax, 1b
cmp eax, 1
je r
mov ebx, 0
jmp p
r:
add ebx, 1
cmp ebx, edx
jg m
jmp p
m:
mov edx, ebx
p: sar a, 1
jmp repit
e:
mov max, edx
}
cout << max << endl;
return 0;
}
